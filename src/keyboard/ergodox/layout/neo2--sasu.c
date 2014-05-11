/* ----------------------------------------------------------------------------
* ergoDOX layout : Neo2 (Version: SaSu)
* -----------------------------------------------------------------------------
* Copyright (c) 2014 Samuel Suther <info@suther.de>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/xstable/ergodox-firmware/>
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release
#define  ktog     &kbfun_toggle
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpush5   &kbfun_layer_push_5
#define  lpush6   &kbfun_layer_push_6
#define  lpush7   &kbfun_layer_push_7
#define  lpush8   &kbfun_layer_push_8
#define  lpush9   &kbfun_layer_push_9
#define  lpush10  &kbfun_layer_push_10
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  lpop5    &kbfun_layer_pop_5
#define  lpop6    &kbfun_layer_pop_6
#define  lpop7    &kbfun_layer_pop_7
#define  lpop8    &kbfun_layer_pop_8
#define  lpop9    &kbfun_layer_pop_9
#define  lpop10   &kbfun_layer_pop_10
#define  dbtldr   &kbfun_jump_to_bootloader
#define  sshprre  &kbfun_shift_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
#define  slpunum  &kbfun_layer_push_numpad
#define  slponum  &kbfun_layer_pop_numpad
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------

//  mod3 = _capsLock &&
//  mod4 = _bracketL
//  Fn	 = _select

const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	_esc,		_1,			_2,			_3,			_4,			_5,		0,
	0,			_X,			_V,			_L,			_C,			_W,		_tab,
	0,			_U,			_I,			_A,			_E,			_O,
	_shiftL,	_bracketL,	_semicolon,	_quote,		_P,			_Y,		_del,
	_cut,		_copy,		_paste,		_find,		_backslash,
													2,		_select,
											0,		0,		_ctrlL,
											_bs,	_altL, 	_capsLock,
	// right hand
	0,			_6,		_7,		_8,		_9,			_0,			0,
	_home,		_K,		_H,		_G,		_F,			_Q,			0,
				_S,		_N,		_R,		_T,			_D,			_Z,
	_end,		_B,		_M,		_comma,	_period,	_J,			_shiftR,
	_altR,		_print,	_menu,	_pageU,	_pageD,
													0,		0,
										_ctrlR,		0,		0,
										_capsLock,	_shiftR,_space
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	3,	0,	0,	0,	0,	0,	0,
	0,	KEY_q_Q,	KEY_Dash_Underscore,	KEY_LeftBracket_LeftBrace,	KEY_RightBracket_RightBrace,	KEY_6_Caret,	0,
	0,	0,	KEY_Slash_Question,	KEY_LeftBracket_LeftBrace,	KEY_RightBracket_RightBrace,	KEY_8_Asterisk,
	0,	0,	KEY_3_Pound,	KEY_4_Dollar,	KEY_Backslash_Pipe,	KEY_GraveAccent_Tilde,	0,
	KEY_LeftShift,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	1,
	KEY_Slash_Question,	KEY_Comma_LessThan,	KEY_Period_GreaterThan,	KEY_Equal_Plus,	KEY_7_Ampersand,	KEY_LeftBracket_LeftBrace,	0,
	KEY_9_LeftParenthesis,	KEY_0_RightParenthesis,	KEY_Dash_Underscore,	KEY_Semicolon_Colon,	0,	0,
	0,	KEY_GraveAccent_Tilde,	KEY_SingleQuote_DoubleQuote,	KEY_SingleQuote_DoubleQuote,	KEY_SingleQuote_DoubleQuote,	KEY_Semicolon_Colon,	0,
	0,	0,	KEYPAD_Period_Delete,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	KEY_PageUp,	KEY_DeleteBackspace,	KEY_UpArrow,	KEY_DeleteForward,	KEY_PageDown,	0,
	0,	KEY_Home,	KEY_LeftArrow,	KEY_DownArrow,	KEY_RightArrow,	KEY_End,
	0,	KEY_Escape,	KEY_Tab,	KEY_Insert,	KEY_ReturnEnter,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	KEYPAD_Slash,	KEYPAD_Asterisk,	KEYPAD_Percent,	0,	2,
	0,	KEYPAD_7_Home,	KEYPAD_8_UpArrow,	KEYPAD_9_PageUp,	KEY_Dash_Underscore,	0,	0,
	KEYPAD_4_LeftArrow,	KEYPAD_5,	KEYPAD_6_RightArrow,	KEYPAD_Plus,	0,	0,
	0,	KEYPAD_1_End,	KEYPAD_2_DownArrow,	KEYPAD_3_PageDown,	KEYPAD_ENTER,	0,	0,
	KEYPAD_0_Insert,	KEYPAD_00,	KEYPAD_Period_Delete,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	188,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	0,
	// left hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0,
	// right hand
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,
	0,	0,
	0,	0,	0,
	0,	0,	0
),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	lpush2,	kprrel,
	NULL,	NULL,	kprrel,
	kprrel,	kprrel,	kprrel,
	// right hand
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	NULL,	kprrel,	kprrel,	kprrel,
	NULL,	NULL,
	kprrel,	NULL,	NULL,
	kprrel,	kprrel,	kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	lpush3,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	lpop1,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	NULL,	kprrel,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	NULL,	lpop2,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	lpop2,	kprrel,
	NULL,	NULL,	kprrel,
	kprrel,	kprrel,	kprrel,
	// right hand
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	kprrel,	NULL,	kprrel,	kprrel,	kprrel,
	NULL,	NULL,
	kprrel,	NULL,	NULL,
	kprrel,	kprrel,	kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	lpop3,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	NULL,	kprrel,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 2
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	kprrel,	kprrel,	kprrel,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 3
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 4
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 5
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 6
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 7
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 8
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
// LAYER 9
KB_MATRIX_LAYER(
	// unused
	NULL,
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL,	NULL,	NULL,
	NULL,	NULL,
	NULL,	NULL,	NULL,
	NULL,	NULL,	NULL
),
};
// ----------------------------------------------------------------------------
