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
#define DE Y     Z
#define DE_Z     Y

#define DE_equal        parenR
#define DE_exclam       exclam
#define DE_quote        quote
#define DE_paragraph    at
#define DE_dollar       pound
#define DE_percent      
#define DE_amp          
#define DE_slash        
#define DE_parenL       
#define DE_paranR       
#define 

KEYS__SHIFTED(    parenR,         KEYBOARD__0_RightParenthesis         );
KEYS__SHIFTED(    exclam,         KEYBOARD__1_Exclamation              );
KEYS__SHIFTED(    at,             KEYBOARD__2_At                       );
KEYS__SHIFTED(    pound,          KEYBOARD__3_Pound                    );
KEYS__SHIFTED(    dollar,         KEYBOARD__4_Dollar                   );
KEYS__SHIFTED(    percent,        KEYBOARD__5_Percent                  );
KEYS__SHIFTED(    caret,          KEYBOARD__6_Caret                    );
KEYS__SHIFTED(    amp,            KEYBOARD__7_Ampersand                );
KEYS__SHIFTED(    asterisk,       KEYBOARD__8_Asterisk                 );
KEYS__SHIFTED(    parenL,         KEYBOARD__9_LeftParenthesis          );

// whitespace and symbols
KEYS__DEFAULT(    enter,          KEYBOARD__ReturnEnter                );
KEYS__DEFAULT(    space,          KEYBOARD__Spacebar                   );
KEYS__DEFAULT(    tab,            KEYBOARD__Tab                        );
// ---
KEYS__DEFAULT(    bkslash,        KEYBOARD__Backslash_Pipe             );
KEYS__DEFAULT(    brktL,          KEYBOARD__LeftBracket_LeftBrace      );
KEYS__DEFAULT(    brktR,          KEYBOARD__RightBracket_RightBrace    );
KEYS__DEFAULT(    comma,          KEYBOARD__Comma_LessThan             );
KEYS__DEFAULT(    dash,           KEYBOARD__Dash_Underscore            );
KEYS__DEFAULT(    equal,          KEYBOARD__Equal_Plus                 );
KEYS__DEFAULT(    grave,          KEYBOARD__GraveAccent_Tilde          );
KEYS__DEFAULT(    period,         KEYBOARD__Period_GreaterThan         );
KEYS__DEFAULT(    quote,          KEYBOARD__SingleQuote_DoubleQuote    );
KEYS__DEFAULT(    semicol,        KEYBOARD__Semicolon_Colon            );
KEYS__DEFAULT(    slash,          KEYBOARD__Slash_Question             );
// --- (shifted) ---
KEYS__SHIFTED(    pipe,           KEYBOARD__Backslash_Pipe             );
KEYS__SHIFTED(    braceL,         KEYBOARD__LeftBracket_LeftBrace      );
KEYS__SHIFTED(    braceR,         KEYBOARD__RightBracket_RightBrace    );
KEYS__SHIFTED(    lessThan,       KEYBOARD__Comma_LessThan             );
KEYS__SHIFTED(    undersc,        KEYBOARD__Dash_Underscore            );
KEYS__SHIFTED(    plus,           KEYBOARD__Equal_Plus                 );
KEYS__SHIFTED(    tilde,          KEYBOARD__GraveAccent_Tilde          );
KEYS__SHIFTED(    grtrThan,       KEYBOARD__Period_GreaterThan         );
KEYS__SHIFTED(    dblQuote,       KEYBOARD__SingleQuote_DoubleQuote    );
KEYS__SHIFTED(    colon,          KEYBOARD__Semicolon_Colon            );
KEYS__SHIFTED(    question,       KEYBOARD__Slash_Question             );


#define DE_oe    semicol
#define DE_ae    quote
#define DE_ue    brktL
#define DE_dash  slash
#define DE_hut   grave



// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  DE_hut,        1,        2,        3,        4,        5,      nop,
     nop,        q,        w,        e,        r,        t,      nop,
     nop,        a,        s,        d,        f,        g,
     nop,        y,        x,        c,        v,        b,      nop,
     nop,      nop,      nop,      nop,      nop,
                                                               ctrlL,     altL,
                                                       nop,      nop,      nop,
                                                     space,      del, shL2kcap,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,        6,        7,        8,        9,        0,      nop,
               nop,        z,        u,        i,        o,        p,    DE_ue,
                           h,        j,        k,        l,    DE_oe,    DE_ae,
               nop,        n,        m,    comma,   period,  DE_dash,      nop,
                                   nop,      nop,      nop,      nop,    caret,
    altR,    ctrlR,
     nop,      nop,      nop,
shR2kcap,    enter,       bs  ),

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
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            lpo1l1,   transp,   lpo1l1,    equal,    slash, asterisk,   transp,
            transp,   transp,        7,        8,        9,     dash,   transp,
                      transp,        4,        5,        6,     plus,   transp,
            transp,   transp,        1,        2,        3,    enter,   transp,
                                transp,   transp,   period,    enter,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,        0  ),

// ............................................................................

    MATRIX_LAYER(  // layer 2 : symbols and function keys
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,       F1,       F2,       F3,       F4,       F5,      F11,
  transp,   braceL,   braceR,    brktL,    brktR,      nop,   lpo2l2,
  transp,  semicol,    slash,     dash,        0,    colon,
  transp,        6,        7,        8,        9,     plus, lpupo3l3,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,      F10,    power,
            lpo2l2,      nop,  undersc, lessThan, grtrThan,   dollar,  volumeU,
                     bkslash,        1,   parenL,   parenR,    equal,  volumeD,
          lpupo3l3, asterisk,        2,        3,        4,        5,     mute,
                                transp,   transp,   transp,   transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

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
};

