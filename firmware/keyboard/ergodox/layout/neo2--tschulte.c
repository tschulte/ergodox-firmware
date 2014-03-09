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
KEYS__DEFAULT(    a,              KEYBOARD__a_A                        );
KEYS__DEFAULT(    b,              KEYBOARD__b_B                        );
KEYS__DEFAULT(    c,              KEYBOARD__c_C                        );
KEYS__DEFAULT(    d,              KEYBOARD__d_D                        );
KEYS__DEFAULT(    e,              KEYBOARD__e_E                        );
KEYS__DEFAULT(    f,              KEYBOARD__f_F                        );
KEYS__DEFAULT(    g,              KEYBOARD__g_G                        );
KEYS__DEFAULT(    h,              KEYBOARD__h_H                        );
KEYS__DEFAULT(    i,              KEYBOARD__i_I                        );
KEYS__DEFAULT(    j,              KEYBOARD__j_J                        );
KEYS__DEFAULT(    k,              KEYBOARD__k_K                        );
KEYS__DEFAULT(    l,              KEYBOARD__l_L                        );
KEYS__DEFAULT(    m,              KEYBOARD__m_M                        );
KEYS__DEFAULT(    n,              KEYBOARD__n_N                        );
KEYS__DEFAULT(    o,              KEYBOARD__o_O                        );
KEYS__DEFAULT(    p,              KEYBOARD__p_P                        );
KEYS__DEFAULT(    q,              KEYBOARD__q_Q                        );
KEYS__DEFAULT(    r,              KEYBOARD__r_R                        );
KEYS__DEFAULT(    s,              KEYBOARD__s_S                        );
KEYS__DEFAULT(    t,              KEYBOARD__t_T                        );
KEYS__DEFAULT(    u,              KEYBOARD__u_U                        );
KEYS__DEFAULT(    v,              KEYBOARD__v_V                        );
KEYS__DEFAULT(    w,              KEYBOARD__w_W                        );
KEYS__DEFAULT(    x,              KEYBOARD__x_X                        );
KEYS__DEFAULT(    y,              KEYBOARD__z_Z                        );
KEYS__DEFAULT(    z,              KEYBOARD__y_Y                        );
KEYS__DEFAULT(    sz,             KEYBOARD__Dash_Underscore            );
KEYS__DEFAULT(    ue,             KEYBOARD__LeftBracket_LeftBrace      );
KEYS__DEFAULT(    oe,             KEYBOARD__Semicolon_Colon            );
KEYS__DEFAULT(    ae,             KEYBOARD__SingleQuote_DoubleQuote    );

// --- (shifted) ---
KEYS__SHIFTED(    A,              KEYBOARD__a_A                        );
KEYS__SHIFTED(    B,              KEYBOARD__b_B                        );
KEYS__SHIFTED(    C,              KEYBOARD__c_C                        );
KEYS__SHIFTED(    D,              KEYBOARD__d_D                        );
KEYS__SHIFTED(    E,              KEYBOARD__e_E                        );
KEYS__SHIFTED(    F,              KEYBOARD__f_F                        );
KEYS__SHIFTED(    G,              KEYBOARD__g_G                        );
KEYS__SHIFTED(    H,              KEYBOARD__h_H                        );
KEYS__SHIFTED(    I,              KEYBOARD__i_I                        );
KEYS__SHIFTED(    J,              KEYBOARD__j_J                        );
KEYS__SHIFTED(    K,              KEYBOARD__k_K                        );
KEYS__SHIFTED(    L,              KEYBOARD__l_L                        );
KEYS__SHIFTED(    M,              KEYBOARD__m_M                        );
KEYS__SHIFTED(    N,              KEYBOARD__n_N                        );
KEYS__SHIFTED(    O,              KEYBOARD__o_O                        );
KEYS__SHIFTED(    P,              KEYBOARD__p_P                        );
KEYS__SHIFTED(    Q,              KEYBOARD__q_Q                        );
KEYS__SHIFTED(    R,              KEYBOARD__r_R                        );
KEYS__SHIFTED(    S,              KEYBOARD__s_S                        );
KEYS__SHIFTED(    T,              KEYBOARD__t_T                        );
KEYS__SHIFTED(    U,              KEYBOARD__u_U                        );
KEYS__SHIFTED(    V,              KEYBOARD__v_V                        );
KEYS__SHIFTED(    W,              KEYBOARD__w_W                        );
KEYS__SHIFTED(    X,              KEYBOARD__x_X                        );
KEYS__SHIFTED(    Y,              KEYBOARD__z_Z                        );
KEYS__SHIFTED(    Z,              KEYBOARD__y_Y                        );
KEYS__DEFAULT(    SZ,             KEYBOARD__Dash_Underscore            );
KEYS__DEFAULT(    UE,             KEYBOARD__LeftBracket_LeftBrace      );
KEYS__DEFAULT(    OE,             KEYBOARD__Semicolon_Colon            );
KEYS__DEFAULT(    AE,             KEYBOARD__SingleQuote_DoubleQuote    );

// numbers
KEYS__DEFAULT(    0,              KEYBOARD__0_RightParenthesis         );
KEYS__DEFAULT(    1,              KEYBOARD__1_Exclamation              );
KEYS__DEFAULT(    2,              KEYBOARD__2_At                       );
KEYS__DEFAULT(    3,              KEYBOARD__3_Pound                    );
KEYS__DEFAULT(    4,              KEYBOARD__4_Dollar                   );
KEYS__DEFAULT(    5,              KEYBOARD__5_Percent                  );
KEYS__DEFAULT(    6,              KEYBOARD__6_Caret                    );
KEYS__DEFAULT(    7,              KEYBOARD__7_Ampersand                );
KEYS__DEFAULT(    8,              KEYBOARD__8_Asterisk                 );
KEYS__DEFAULT(    9,              KEYBOARD__9_LeftParenthesis          );

// --- (keypad) ---
KEYS__DEFAULT(    kp0,            KEYPAD__0_Insert                     );
KEYS__DEFAULT(    kp1,            KEYPAD__1_End                        );
KEYS__DEFAULT(    kp2,            KEYPAD__2_DownArrow                  );
KEYS__DEFAULT(    kp3,            KEYPAD__3_PageDown                   );
KEYS__DEFAULT(    kp4,            KEYPAD__4_LeftArrow                  );
KEYS__DEFAULT(    kp5,            KEYPAD__5                            );
KEYS__DEFAULT(    kp6,            KEYPAD__6_RightArrow                 );
KEYS__DEFAULT(    kp7,            KEYPAD__7_Home                       );
KEYS__DEFAULT(    kp8,            KEYPAD__8_UpArrow                    );
KEYS__DEFAULT(    kp9,            KEYPAD__9_PageUp                     );

// function
KEYS__DEFAULT(    F1,             KEYBOARD__F1                         );
KEYS__DEFAULT(    F2,             KEYBOARD__F2                         );
KEYS__DEFAULT(    F3,             KEYBOARD__F3                         );
KEYS__DEFAULT(    F4,             KEYBOARD__F4                         );
KEYS__DEFAULT(    F5,             KEYBOARD__F5                         );
KEYS__DEFAULT(    F6,             KEYBOARD__F6                         );
KEYS__DEFAULT(    F7,             KEYBOARD__F7                         );
KEYS__DEFAULT(    F8,             KEYBOARD__F8                         );
KEYS__DEFAULT(    F9,             KEYBOARD__F9                         );
KEYS__DEFAULT(    F10,            KEYBOARD__F10                        );
KEYS__DEFAULT(    F11,            KEYBOARD__F11                        );
KEYS__DEFAULT(    F12,            KEYBOARD__F12                        );

// whitespace and symbols
KEYS__DEFAULT(    enter,          KEYBOARD__ReturnEnter                );
KEYS__DEFAULT(    space,          KEYBOARD__Spacebar                   );
KEYS__DEFAULT(    tab,            KEYBOARD__Tab                        );

// dead keys
KEYS__DEFAULT(    dead_aigu,      KEYBOARD__Equal_Plus                 );
KEYS__SHIFTED(    dead_grave,     KEYBOARD__Equal_Plus                 );
KEYS__DEFAULT(    dead_caret,     KEYBOARD__GraveAccent_Tilde          );

KEYS__NON_DEAD(   aigu,           KEYBOARD__Equal_Plus                 );
KEYS__NON_DEAD(   grave,          KEYBOARD__Equal_Plus                 );
KEYS__NON_DEAD(   caret,          KEYBOARD__GraveAccent_Tilde          );


// --- (shifted) ---
KEYS__SHIFTED(    parenL,         KEYBOARD__8_Asterisk                 );
KEYS__SHIFTED(    parenR,         KEYBOARD__9_LeftParenthesis);
KEYS__SHIFTED(    exclam,         KEYBOARD__1_Exclamation              );
KEYS__ALT_GR (    at,             KEYBOARD__q_Q                        );
KEYS__SHIFTED(    dollar,         KEYBOARD__4_Dollar                   );
KEYS__ALT_GR (    eur,            KEYBOARD__e_E                        );
KEYS__SHIFTED(    percent,        KEYBOARD__5_Percent                  );
KEYS__SHIFTED(    amp,            KEYBOARD__6_Caret                    );
KEYS__SHIFTED(    asterisk,       KEYBOARD__RightBracket_RightBrace    );

// ---
KEYS__ALT_GR (    bkslash,        KEYBOARD__Dash_Underscore            );
KEYS__ALT_GR (    brktL,          KEYBOARD__8_Asterisk);
KEYS__ALT_GR (    brktR,          KEYBOARD__9_LeftParenthesis          );
KEYS__DEFAULT(    comma,          KEYBOARD__Comma_LessThan             );
KEYS__DEFAULT(    dash,           KEYBOARD__Slash_Question             );
KEYS__SHIFTED(    equal,          KEYBOARD__0_RightParenthesis         );
KEYS__DEFAULT(    period,         KEYBOARD__Period_GreaterThan         );
KEYS__SHIFTED(    quote,          KEYBOARD__Backslash_Pipe             );
KEYS__SHIFTED(    semicol,        KEYBOARD__Comma_LessThan             );
KEYS__SHIFTED(    slash,          KEYBOARD__7_Ampersand                );
// --- (shifted) ---
KEYS__ALT_GR (    pipe,           KEYBOARD__NonUS_Backslash_Pipe       );
KEYS__ALT_GR (    braceL,         KEYBOARD__7_Ampersand                );
KEYS__ALT_GR (    braceR,         KEYBOARD__0_RightParenthesis         );
KEYS__DEFAULT(    lessThan,       KEYBOARD__NonUS_Backslash_Pipe       );
KEYS__SHIFTED(    undersc,        KEYBOARD__Slash_Question             );
KEYS__DEFAULT(    plus,           KEYBOARD__RightBracket_RightBrace    );
KEYS__NON_DEAD_ALT_GR (    tilde,          KEYBOARD__RightBracket_RightBrace    );
KEYS__SHIFTED(    grtrThan,       KEYBOARD__NonUS_Backslash_Pipe       );
KEYS__SHIFTED(    dblQuote,       KEYBOARD__2_At                       );
KEYS__SHIFTED(    colon,          KEYBOARD__Period_GreaterThan         );
KEYS__SHIFTED(    question,       KEYBOARD__Dash_Underscore            );
KEYS__DEFAULT(    pound,          KEYBOARD__Backslash_Pipe             );

// --- (keypad) ---
KEYS__DEFAULT(    kpEnter,        KEYPAD__Enter                        );
// ---
KEYS__DEFAULT(    kpDec,          KEYPAD__Period_Delete                );
// ---
KEYS__DEFAULT(    kpAdd,          KEYPAD__Plus                         );
KEYS__DEFAULT(    kpSub,          KEYPAD__Minus                        );
KEYS__DEFAULT(    kpMul,          KEYPAD__Asterisk                     );
KEYS__DEFAULT(    kpDiv,          KEYPAD__Slash                        );

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
KEYS__DEFAULT(    caps,           KEYBOARD__CapsLock                   );
KEYS__DEFAULT(    scrl,           KEYBOARD__ScrollLock                 );
// --- (keypad) ---
KEYS__DEFAULT(    num,            KEYPAD__NumLock_Clear                );

// special function
KEYS__DEFAULT(    app,            KEYBOARD__Application                );
KEYS__DEFAULT(    pause,          KEYBOARD__Pause                      );
KEYS__DEFAULT(    prScr,          KEYBOARD__PrintScreen                );

// international and language
KEYS__DEFAULT(    nonUSBkslash,   KEYBOARD__NonUS_Backslash_Pipe       );
KEYS__DEFAULT(    nonUSPound,     KEYBOARD__NonUS_Pound_Tilde          );

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
     esc,        1,        2,        3,        4,        5,      dead_aigu,
     ins,        x,        v,        l,        c,        w,      del,
     nop,        u,        i,        a,        e,        o,
     nop,        ue,       oe,       ae,       p,        z,      tab,
     nop,        nop,      nop,      guiL,     lpupo2l2,
                                                                          ctrlL,    altL,
                                                                nop,      nop,      home,
                                                                lpupo1l1, shiftL,   end,
// right hand ..... ......... ......... ......... ......... ......... .........
               dead_grave,    6,        7,        8,        9,        0,      dead_caret,
               bs,            k,        h,        g,        f,        q,      sz,
                              s,        n,        r,        t,        d,      y,
               space,         b,        m,        comma,    period,   j,      enter,
                                        lpupo2l2, guiR,     nop,      nop,    nop,
   altR,    ctrlR,
   pageU,      nop,      nop,
   pageD,    shiftR,    lpupo1l1  ),

// ............................................................................

    MATRIX_LAYER(  // layer TODO : symbols and function keys
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  btldr,       F1,         F2,         F3,          F4,        F5,        F6,
  transp,      nop,        undersc,    brktL,       brktR,     caret,     transp,
  transp,      bkslash,    slash,      braceL,      braceR,    asterisk,
  transp,      pound,      dollar,     pipe,        tilde,     grave,     transp,
  transp,      transp,     transp,     transp,      transp,
                                                                          transp,   transp,
                                                                transp,   transp,   transp,
                                                                transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               F7,       F8,           F9,          F10,        F11,      F12,         transp,
               transp,   exclam,       lessThan,    grtrThan,   equal,    amp,         transp,
                         question,     parenL,      parenR,     dash,     colon,       at,
               transp,   plus,         percent,     dblQuote,   quote,    semicol,     transp,
                                       transp,      transp,     transp,   transp,      transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer TODO : keyboard functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,       transp,      transp,      transp,      transp,      transp,      transp,
   transp,      pageU,       bs,          arrowU,      del,         pageD,       transp,
   transp,      home,        arrowL,      arrowD,      arrowR,      end,
   transp,      transp,      transp,      transp,      transp,      transp,      transp,
   transp,      transp,      transp,      transp,      transp,
                                                                                  transp,      transp,
                                                                     transp,      transp,      transp,
                                                                     transp,      transp,      transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               transp,      transp,      transp,      transp,      transp,      transp,     transp,
               transp,      transp,      kp7,         kp8,         kp9,         plus,       dash,
                            transp,      kp4,         kp5,         kp6,         comma,      period,
               transp,      transp,      kp1,         kp2,         kp3,         semicol,    transp,
                                         kp0,         transp,      transp,      transp,     transp,
     transp,      transp,
     transp,      transp,      transp,
     transp,      transp,      transp  ),

// ............................................................................
};

