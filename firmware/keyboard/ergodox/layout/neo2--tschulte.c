/* ----------------------------------------------------------------------------
 * Copyright (c) 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * A layout modeled after the [Arensito layout]
 * (http://www.pvv.org/~hakonhal/main.cgi/keyboard)
 * by Håkon Hallingstad
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 *
 * TODO:
 * - separate most of this into a template (so i can have different versions of
 *   the "ben" layout, just like there are different "kinesis-mod" layouts)?
 *   lol
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

KEYS__DEFAULT(sz, KEYBOARD__Dash_Underscore);
KEYS__DEFAULT(ue, KEYBOARD__LeftBracket_LeftBrace);
KEYS__DEFAULT(oe, KEYBOARD__Semicolon_Colon);
KEYS__DEFAULT(ae, KEYBOARD__SingleQuote_DoubleQuote);
KEYS__DEFAULT(accent_aigu, KEYBOARD__Equal_Plus);
KEYS__SHIFTED(accent_grave, KEYBOARD__Equal_Plus);
KEYS__DEFAULT(accent_circumflex, KEYBOARD__GraveAccent_Tilde);

// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

// TODO: make this Arensito!
// - add layers with other layouts? arensito, colemak, dvorak, qwerty
static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     esc,        1,        2,        3,        4,        5,      accent_aigu,
     tab,        x,        v,        l,        c,        w,      bs,
     nop,        u,        i,        a,        e,        o,
     shiftL,     ue,       oe,       ae,       p,        y,      enter,
                 ctrlL,    altL,     guiL,     lpupo2l2, lpupo1l1,
                                                               ctrlL,      lpupo1l1,
                                                       nop,      nop,      altL,
                                                        bs,      shiftL,   end,
// right hand ..... ......... ......... ......... ......... ......... .........
               accent_grave,     6,        7,        8,        9,        0,      accent_circumflex,
               bs,              k,        h,        g,        f,        q,      sz,
                                 s,        n,        r,        t,        d,      z,
               enter,            b,        m,        comma,    period,   j,      shiftR,
                                 lpupo1l1, lpupo2l2, nop,      nop,      nop,
   ins,    ctrlR,
   pageU,      nop,      nop,
   pageD,    shiftR,    space  ),

// ............................................................................

    MATRIX_LAYER(  // layer TODO : symbols and function keys
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  btldr,       F1,       F2,       F3,       F4,       F5,      F6,
  transp,   braceL,   braceR,    brktL,    brktR,      nop,   nop,
  transp,  nonUSBkslash,    amp,     dash,        dash,    nop,
  transp,        6,        7,        8,        9,     plus, nop,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               F7,       F8,       F9,       F10,       F11,      F12,    nop,
            nop,      nop,  undersc, lessThan, grtrThan,   dollar,  volumeU,
                     bkslash,        1,   asterisk,   parenL,    equal,  volumeD,
          nop, asterisk,        2,        3,        4,        5,     mute,
                                transp,   transp,   transp,   transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer TODO : keyboard functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      bs,      arrowU,      del,      nop,      nop,      nop,
     nop,      arrowL,      arrowD,      arrowR,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop, nop,
               nop,      nop,      7,      8,      9,      nop, nop,
                         nop,      4,      5,      6,      comma, period,
               nop,      nop,      1,      2,      3,      nop,      nop,
                                   0,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      0  ),

// ............................................................................
};

