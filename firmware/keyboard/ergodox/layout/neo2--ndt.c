/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * My QWERTY layout, at the moment.  I imagine this will evolve over time.
 * Once I'm done with the Arensito layout, it may disappear altogether.
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 */


#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

#include "./fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "./fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "./fragments/matrix-control.part.h"


// ----------------------------------------------------------------------------
// german keymap DE
// ----------------------------------------------------------------------------
#define DE_y     z
#define DE_z     y
#define DE_Y     Z
#define DE_Z     Y

#define DE_equal        parenR    // KEYBOARD__0_RightParenthesis
#define DE_exclam       exclam    // KEYBOARD__1_Exclamation
#define DE_quote        quote     // KEYBOARD__2_At
#define DE_secsign      at        // KEYBOARD__3_Pound
#define DE_dollar       pound     // KEYBOARD__4_Dollar
#define DE_percent      percent   // KEYBOARD__5_Percent
#define DE_amp          caret     // KEYBOARD__6_Caret
#define DE_slash        amp       // KEYBOARD__7_Ampersand
#define DE_parenL       asterisk  // KEYBOARD__8_Asterisk
#define DE_paranR       parenL    // KEYBOARD__9_LeftParenthesis
// ---
#define DE_lessThan     bkslash   // KEYBOARD__Backslash_Pipe
#define DE_ue           brktL     // KEYBOARD__LeftBracket_LeftBrace
#define DE_plus         brktR     // KEYBOARD__RightBracket_RightBrace
#define DE_comma        comma     // KEYBOARD__Comma_LessThan
#define DE_sz           dash      // KEYBOARD__Dash_Underscore
#define DE_acute        equal     // KEYBOARD__Equal_Plus
#define DE_caret        grave     // KEYBOARD__GraveAccent_Tilde
#define DE_period       period    // KEYBOARD__Period_GreaterThan
#define DE_ae           quote     // KEYBOARD__SingleQuote_DoubleQuote
#define DE_oe           semicol   // KEYBOARD__Semicolon_Colon
#define DE_dash         slash     // KEYBOARD__Slash_Question
// shifted
#define DE_grtrThan     pipe      // KEYBOARD__Backslash_Pipe
#define DE_UE           braceL    // KEYBOARD__LeftBracket_LeftBrace
#define DE_asterisk     braceR    // KEYBOARD__RightBracket_RightBrace
#define DE_semicol      lessThan  // KEYBOARD__Comma_LessThan
#define DE_question     undersc   // KEYBOARD__Dash_Underscore
#define DE_grave        plus      // KEYBOARD__Equal_Plus
#define DE_ring         tilde     // KEYBOARD__GraveAccent_Tilde
#define DE_colon        grtThan   // KEYBOARD__Period_GreaterThan
#define DE_AE           dbQuote   // KEYBOARD__SingleQuote_DoubleQuote
#define DE_OE           colon     // KEYBOARD__Semicolon_Colon
#define DE_undersc      question  // KEYBOARD__Slash_Question





// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  lpu2l2,      nop,      nop,      nop,      nop,      nop,      nop,
lpupo2l2,        x,        v,        l,        c,        w,      nop,
     nop,        u,        i,        a,        e,        o,
     nop,    DE_ue,    DE_oe,    DE_ae,        p,     DE_z,      nop,
shL2kcap,      nop,      nop,      nop,      nop,
                                                               ctrlL,     altL,
                                                       nop,      nop, lpupo2l2,
                                                     space,      del, lpupo1l1,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
               nop,        k,        h,        g,        f,        q,      nop,
                           s,        n,        r,        t,        d,      nop,
               nop,        n,        m,     DE_y,    DE_sz,        j,      nop,
                                   nop,      nop,      nop,      nop, shR2kcap,
    altR,    ctrlR,
lpupo2l2,      nop,      nop,
lpupo1l1,      nop,    enter  ),

// ............................................................................

    MATRIX_LAYER(  // layer 1 : number pad
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,      ins,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp, lpupo4l4,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            lpo1l1,   transp,   lpo1l1,    equal,    slash, asterisk,   transp,
            transp,   transp,        7,        8,        9,     dash,   transp,
                      transp,        4,        5,        6,     plus,   transp,
            transp,   transp,        1,        2,        3,    enter,   transp,
                                transp,   transp,   period,    enter,   transp,
  transp,   transp,
lpupo4l4,   transp,   transp,
  transp,   transp,        0  ),

// ............................................................................

    MATRIX_LAYER(  // layer 2 : symbols and function keys
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  lpo2l2,       F1,       F2,       F3,       F4,       F5,      F11,
  transp,   braceL,   braceR,    brktL,    brktR,      nop,   lpo2l2,
  transp,  semicol,    slash,     dash,        0,    colon,
  transp,        6,        7,        8,        9,     plus, lpupo3l3,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp, lpupo4l4,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,      F10,    power,
            lpo2l2,      nop,  undersc, lessThan, grtrThan,   dollar,  volumeU,
                     bkslash,        1,   parenL,   parenR,    equal,  volumeD,
          lpupo3l3, asterisk,        2,        3,        4,        5,     mute,
                                transp,   transp,   transp,   transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
 lpupo4l4,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer 3 : keyboard functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop, dmp_sram,
               nop,      nop,      nop,      nop,      nop,      nop, dmp_prog,
                         nop,      nop,      nop,      nop,      nop, dmp_eepr,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................

    MATRIX_LAYER(  // layer 4 : keyboard functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,   arrowU,      nop,      nop,      nop,
     nop,      nop,   arrowL,   arrowD,   arrowR,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop, dmp_sram,
               nop,      nop,      nop,      nop,      nop,      nop, dmp_prog,
                         nop,      nop,      nop,      nop,      nop, dmp_eepr,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................
};

