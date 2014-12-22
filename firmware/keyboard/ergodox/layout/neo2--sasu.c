/* ----------------------------------------------------------------------------
 * Copyright (c) 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * A Layout for [Neo2]
 * (http://neo-layout.org/).
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 *
 * This layout assumes that the PC the keyboard is connected to uses the German
 * QWERTZ layout, i.e. you don't have to install any special driver to use the
 * layout.
 *
 */


#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

// We need to use our own definitions
#define ERGODOX_FIRMWARE__FIRMWARE__LIB__LAYOUT__KEYS__H

#include "./fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "./fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "./fragments/matrix-control.part.h"

// letters
TYPE__DEFAULT(    a,              KEYBOARD__a_A                        );
TYPE__DEFAULT(    b,              KEYBOARD__b_B                        );
TYPE__DEFAULT(    c,              KEYBOARD__c_C                        );
TYPE__DEFAULT(    d,              KEYBOARD__d_D                        );
TYPE__DEFAULT(    e,              KEYBOARD__e_E                        );
TYPE__DEFAULT(    f,              KEYBOARD__f_F                        );
TYPE__DEFAULT(    g,              KEYBOARD__g_G                        );
TYPE__DEFAULT(    h,              KEYBOARD__h_H                        );
TYPE__DEFAULT(    i,              KEYBOARD__i_I                        );
TYPE__DEFAULT(    j,              KEYBOARD__j_J                        );
TYPE__DEFAULT(    k,              KEYBOARD__k_K                        );
TYPE__DEFAULT(    l,              KEYBOARD__l_L                        );
TYPE__DEFAULT(    m,              KEYBOARD__m_M                        );
TYPE__DEFAULT(    n,              KEYBOARD__n_N                        );
TYPE__DEFAULT(    o,              KEYBOARD__o_O                        );
TYPE__DEFAULT(    p,              KEYBOARD__p_P                        );
TYPE__DEFAULT(    q,              KEYBOARD__q_Q                        );
TYPE__DEFAULT(    r,              KEYBOARD__r_R                        );
TYPE__DEFAULT(    s,              KEYBOARD__s_S                        );
TYPE__DEFAULT(    t,              KEYBOARD__t_T                        );
TYPE__DEFAULT(    u,              KEYBOARD__u_U                        );
TYPE__DEFAULT(    v,              KEYBOARD__v_V                        );
TYPE__DEFAULT(    w,              KEYBOARD__w_W                        );
TYPE__DEFAULT(    x,              KEYBOARD__x_X                        );
TYPE__DEFAULT(    y,              KEYBOARD__z_Z                        );
TYPE__DEFAULT(    z,              KEYBOARD__y_Y                        );
TYPE__DEFAULT(    sz,             KEYBOARD__Dash_Underscore            );
TYPE__DEFAULT(    ue,             KEYBOARD__LeftBracket_LeftBrace      );
TYPE__DEFAULT(    oe,             KEYBOARD__Semicolon_Colon            );
TYPE__DEFAULT(    ae,             KEYBOARD__SingleQuote_DoubleQuote    );

// --- (shifted) ---
TYPE__SHIFTED(    A,              KEYBOARD__a_A                        );
TYPE__SHIFTED(    B,              KEYBOARD__b_B                        );
TYPE__SHIFTED(    C,              KEYBOARD__c_C                        );
TYPE__SHIFTED(    D,              KEYBOARD__d_D                        );
TYPE__SHIFTED(    E,              KEYBOARD__e_E                        );
TYPE__SHIFTED(    F,              KEYBOARD__f_F                        );
TYPE__SHIFTED(    G,              KEYBOARD__g_G                        );
TYPE__SHIFTED(    H,              KEYBOARD__h_H                        );
TYPE__SHIFTED(    I,              KEYBOARD__i_I                        );
TYPE__SHIFTED(    J,              KEYBOARD__j_J                        );
TYPE__SHIFTED(    K,              KEYBOARD__k_K                        );
TYPE__SHIFTED(    L,              KEYBOARD__l_L                        );
TYPE__SHIFTED(    M,              KEYBOARD__m_M                        );
TYPE__SHIFTED(    N,              KEYBOARD__n_N                        );
TYPE__SHIFTED(    O,              KEYBOARD__o_O                        );
TYPE__SHIFTED(    P,              KEYBOARD__p_P                        );
TYPE__SHIFTED(    Q,              KEYBOARD__q_Q                        );
TYPE__SHIFTED(    R,              KEYBOARD__r_R                        );
TYPE__SHIFTED(    S,              KEYBOARD__s_S                        );
TYPE__SHIFTED(    T,              KEYBOARD__t_T                        );
TYPE__SHIFTED(    U,              KEYBOARD__u_U                        );
TYPE__SHIFTED(    V,              KEYBOARD__v_V                        );
TYPE__SHIFTED(    W,              KEYBOARD__w_W                        );
TYPE__SHIFTED(    X,              KEYBOARD__x_X                        );
TYPE__SHIFTED(    Y,              KEYBOARD__z_Z                        );
TYPE__SHIFTED(    Z,              KEYBOARD__y_Y                        );
TYPE__DEFAULT(    SZ,             KEYBOARD__Dash_Underscore            );
TYPE__DEFAULT(    UE,             KEYBOARD__LeftBracket_LeftBrace      );
TYPE__DEFAULT(    OE,             KEYBOARD__Semicolon_Colon            );
TYPE__DEFAULT(    AE,             KEYBOARD__SingleQuote_DoubleQuote    );

// numbers
TYPE__DEFAULT(    0,              KEYBOARD__0_RightParenthesis         );
TYPE__DEFAULT(    1,              KEYBOARD__1_Exclamation              );
TYPE__DEFAULT(    2,              KEYBOARD__2_At                       );
TYPE__DEFAULT(    3,              KEYBOARD__3_Pound                    );
TYPE__DEFAULT(    4,              KEYBOARD__4_Dollar                   );
TYPE__DEFAULT(    5,              KEYBOARD__5_Percent                  );
TYPE__DEFAULT(    6,              KEYBOARD__6_Caret                    );
TYPE__DEFAULT(    7,              KEYBOARD__7_Ampersand                );
TYPE__DEFAULT(    8,              KEYBOARD__8_Asterisk                 );
TYPE__DEFAULT(    9,              KEYBOARD__9_LeftParenthesis          );

// --- (keypad) ---
TYPE__DEFAULT(    kp0,            KEYPAD__0_Insert                     );
TYPE__DEFAULT(    kp1,            KEYPAD__1_End                        );
TYPE__DEFAULT(    kp2,            KEYPAD__2_DownArrow                  );
TYPE__DEFAULT(    kp3,            KEYPAD__3_PageDown                   );
TYPE__DEFAULT(    kp4,            KEYPAD__4_LeftArrow                  );
TYPE__DEFAULT(    kp5,            KEYPAD__5                            );
TYPE__DEFAULT(    kp6,            KEYPAD__6_RightArrow                 );
TYPE__DEFAULT(    kp7,            KEYPAD__7_Home                       );
TYPE__DEFAULT(    kp8,            KEYPAD__8_UpArrow                    );
TYPE__DEFAULT(    kp9,            KEYPAD__9_PageUp                     );

// function
TYPE__DEFAULT(    F1,             KEYBOARD__F1                         );
TYPE__DEFAULT(    F2,             KEYBOARD__F2                         );
TYPE__DEFAULT(    F3,             KEYBOARD__F3                         );
TYPE__DEFAULT(    F4,             KEYBOARD__F4                         );
TYPE__DEFAULT(    F5,             KEYBOARD__F5                         );
TYPE__DEFAULT(    F6,             KEYBOARD__F6                         );
TYPE__DEFAULT(    F7,             KEYBOARD__F7                         );
TYPE__DEFAULT(    F8,             KEYBOARD__F8                         );
TYPE__DEFAULT(    F9,             KEYBOARD__F9                         );
TYPE__DEFAULT(    F10,            KEYBOARD__F10                        );
TYPE__DEFAULT(    F11,            KEYBOARD__F11                        );
TYPE__DEFAULT(    F12,            KEYBOARD__F12                        );

// whitespace and symbols
KEYS__DEFAULT(    enter,          KEYBOARD__ReturnEnter                );
KEYS__DEFAULT(    space,          KEYBOARD__Spacebar                   );
KEYS__DEFAULT(    tab,            KEYBOARD__Tab                        );

// dead keys
TYPE__DEFAULT(    dead_aigu,      KEYBOARD__Equal_Plus                 );
TYPE__SHIFTED(    dead_grave,     KEYBOARD__Equal_Plus                 );
TYPE__DEFAULT(    dead_caret,     KEYBOARD__GraveAccent_Tilde          );

TYPE__NON_DEAD(   aigu,           KEYBOARD__Equal_Plus                 );
TYPE__NON_DEAD_SHIFTED(   grave,          KEYBOARD__Equal_Plus                 );
TYPE__NON_DEAD(   caret,          KEYBOARD__GraveAccent_Tilde          );


// --- (shifted) ---
TYPE__SHIFTED(    parenL,         KEYBOARD__8_Asterisk                 );
TYPE__SHIFTED(    parenR,         KEYBOARD__9_LeftParenthesis);
TYPE__SHIFTED(    exclam,         KEYBOARD__1_Exclamation              );
TYPE__ALT_GR (    at,             KEYBOARD__q_Q                        );
TYPE__SHIFTED(    dollar,         KEYBOARD__4_Dollar                   );
TYPE__ALT_GR (    eur,            KEYBOARD__e_E                        );
TYPE__SHIFTED(    percent,        KEYBOARD__5_Percent                  );
TYPE__SHIFTED(    amp,            KEYBOARD__6_Caret                    );
TYPE__SHIFTED(    asterisk,       KEYBOARD__RightBracket_RightBrace    );

// ---
TYPE__ALT_GR (    bkslash,        KEYBOARD__Dash_Underscore            );
TYPE__ALT_GR (    brktL,          KEYBOARD__8_Asterisk);
TYPE__ALT_GR (    brktR,          KEYBOARD__9_LeftParenthesis          );
TYPE__DEFAULT(    comma,          KEYBOARD__Comma_LessThan             );
TYPE__DEFAULT(    dash,           KEYBOARD__Slash_Question             );
TYPE__SHIFTED(    equal,          KEYBOARD__0_RightParenthesis         );
TYPE__DEFAULT(    period,         KEYBOARD__Period_GreaterThan         );
TYPE__SHIFTED(    quote,          KEYBOARD__Backslash_Pipe             );
TYPE__SHIFTED(    semicol,        KEYBOARD__Comma_LessThan             );
TYPE__SHIFTED(    slash,          KEYBOARD__7_Ampersand                );
// --- (shifted) ---
TYPE__ALT_GR (    pipe,           KEYBOARD__NonUS_Backslash_Pipe       );
TYPE__ALT_GR (    braceL,         KEYBOARD__7_Ampersand                );
TYPE__ALT_GR (    braceR,         KEYBOARD__0_RightParenthesis         );
TYPE__DEFAULT(    lessThan,       KEYBOARD__NonUS_Backslash_Pipe       );
TYPE__SHIFTED(    undersc,        KEYBOARD__Slash_Question             );
TYPE__DEFAULT(    plus,           KEYBOARD__RightBracket_RightBrace    );
TYPE__ALT_GR (    tilde,          KEYBOARD__RightBracket_RightBrace    );
TYPE__SHIFTED(    grtrThan,       KEYBOARD__NonUS_Backslash_Pipe       );
TYPE__SHIFTED(    dblQuote,       KEYBOARD__2_At                       );
TYPE__SHIFTED(    colon,          KEYBOARD__Period_GreaterThan         );
TYPE__SHIFTED(    question,       KEYBOARD__Dash_Underscore            );
TYPE__DEFAULT(    pound,          KEYBOARD__Backslash_Pipe             );

// --- (keypad) ---
TYPE__DEFAULT(    kpEnter,        KEYPAD__Enter                        );
// ---
TYPE__DEFAULT(    kpDec,          KEYPAD__Period_Delete                );
// ---
TYPE__DEFAULT(    kpAdd,          KEYPAD__Plus                         );
TYPE__DEFAULT(    kpSub,          KEYPAD__Minus                        );
TYPE__DEFAULT(    kpMul,          KEYPAD__Asterisk                     );
TYPE__DEFAULT(    kpDiv,          KEYPAD__Slash                        );

// text control
KEYS__DEFAULT(    arrowU,         KEYBOARD__UpArrow                    );
KEYS__DEFAULT(    arrowD,         KEYBOARD__DownArrow                  );
KEYS__DEFAULT(    arrowL,         KEYBOARD__LeftArrow                  );
KEYS__DEFAULT(    arrowR,         KEYBOARD__RightArrow                 );
KEYS__DEFAULT(    bs,             KEYBOARD__DeleteBackspace            );
KEYS__DEFAULT(    del,            KEYBOARD__DeleteForward              );
KEYS__DEFAULT(    end,            KEYBOARD__End                        );
KEYS__DEFAULT(    esc,            KEYBOARD__Escape                     );
KEYS__DEFAULT(    home,           KEYBOARD__Home                       );
KEYS__DEFAULT(    ins,            KEYBOARD__Insert                     );
KEYS__DEFAULT(    pageU,          KEYBOARD__PageUp                     );
KEYS__DEFAULT(    pageD,          KEYBOARD__PageDown                   );

// modifier
KEYS__DEFAULT(    altR,           KEYBOARD__RightAlt                   );
KEYS__DEFAULT(    altL,           KEYBOARD__LeftAlt                    );
KEYS__DEFAULT(    ctrlL,          KEYBOARD__LeftControl                );
KEYS__DEFAULT(    ctrlR,          KEYBOARD__RightControl               );
KEYS__DEFAULT(    guiL,           KEYBOARD__LeftGUI                    );
KEYS__DEFAULT(    guiR,           KEYBOARD__RightGUI                   );
KEYS__DEFAULT(    shiftL,         KEYBOARD__LeftShift                  );
KEYS__DEFAULT(    shiftR,         KEYBOARD__RightShift                 );

// lock
TYPE__DEFAULT(    caps,           KEYBOARD__CapsLock                   );
TYPE__DEFAULT(    scrl,           KEYBOARD__ScrollLock                 );
// --- (keypad) ---
TYPE__DEFAULT(    num,            KEYPAD__NumLock_Clear                );

// special function
TYPE__DEFAULT(    app,            KEYBOARD__Application                );
TYPE__DEFAULT(    pause,          KEYBOARD__Pause                      );
TYPE__DEFAULT(    prScr,          KEYBOARD__PrintScreen                );

// international and language
TYPE__DEFAULT(    nonUSBkslash,   KEYBOARD__NonUS_Backslash_Pipe       );
TYPE__DEFAULT(    nonUSPound,     KEYBOARD__NonUS_Pound_Tilde          );

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
     esc,        1,        2,        3,        4,        5,      dead_caret,
     nop,        x,        v,        l,        c,        w,      app,
     tab,        u,        i,        a,        e,        o,
     shiftL,        ue,       oe,       ae,       p,        z,      space,
     app,        guiL,     nop,      nop,      lpupo2l2,
                                                                          nop, lpupo3l3,
                                                                nop,      nop,      altL,
                                                                enter, lpupo1l1,   ctrlL,
// right hand ..... ......... ......... ......... ......... ......... .........
               dead_aigu,     6,        7,        8,        9,        0,      dead_grave,
               nop,         k,        h,        g,        f,        q,      sz,
                            s,        n,        r,        t,        d,      y,
               sz,          b,        m,        comma,    period,   j,      shiftR,
                              			lpupo2l2, prScr, 	app,   	  guiR,   nop,
   altL, lpupo1l1,
   ctrlR,     nop,      nop,
   bs,    lpupo1l1,   space
),

// ............................................................................

    MATRIX_LAYER(  // layer mod3 : symbols and function keys
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,      transp,     transp,     transp,      transp,    transp,    transp,
  transp,      nop,        undersc,    brktL,       brktR,     caret,     transp,
  transp,      bkslash,    slash,      braceL,      braceR,    asterisk,
  transp,      pound,      dollar,     pipe,        tilde,     grave,     transp,
  transp,      transp,     transp,     transp,      transp,
                                                                          transp,   transp,
                                                                transp,   transp,   transp,
                                                                transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               transp,   transp,       eur,      	transp,     transp,   transp,      transp,
               transp,   exclam,       lessThan,    grtrThan,   equal,    amp,         transp,
                         question,     parenL,      parenR,     dash,     colon,       at,
               transp,   plus,         percent,     dblQuote,   quote,    semicol,     transp,
                                       transp,      transp,     transp,   transp,      transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer mod4 : keyboard functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   transp,       transp,      transp,      transp,      transp,     transp,      transp,
   transp,      pageU,       bs,          arrowU,      del,         pageD,       transp,
   ctrlL,      home,        arrowL,      arrowD,      arrowR,      end,
   transp,      esc,         tab,         ins,         enter,       transp,      transp,
   transp,      transp,      transp,      transp,      transp,
                                                                                  transp,      transp,
                                                                     transp,      transp,      transp,
                                                                     transp,      transp,      transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               transp,      transp,      transp,      tab,      slash,      asterisk,     transp,
               transp,      transp,      7,         8,         9,         plus,       dash,
                            transp,      4,         5,         6,         comma,      period,
               transp,      colon,       1,         2,         3,         semicol,    transp,
                                        transp,         transp,      transp,      transp,     transp,
     transp,      transp,
     transp,      transp,      transp,
     transp,      transp,      0  ),

// ............................................................................
    MATRIX_LAYER(  // layer for F1-F12
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,       F1,        F2,         F3,          F4,        F5,        F6,
  altL,      	F7,        F8,         F9,          F10,       F11,       F12,
  ctrlL,      transp,     transp,     transp,      transp,    transp,
  transp,      transp,     transp,     transp,      transp,    transp,    transp,
  btldr,      transp,     transp,     transp,      transp,
                                                                          transp,   transp,
                                                                transp,   transp,   transp,
                                                                transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               transp,   transp,       transp,      transp,     transp,   transp,      transp,
               transp,   transp,       transp,      transp,     transp,   transp,      transp,
                         transp,       transp,      transp,     transp,   transp,      transp,
               transp,   transp,       transp,      transp,     transp,   transp,      transp,
                                       transp,      transp,     transp,   transp,      transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................

};

