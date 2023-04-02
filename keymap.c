#include QMK_KEYBOARD_H
#include "keymap_italian.h"
#include "keymap_italian_mac.h"

#define _QWERTY 0
#define _FUNPAD 1
#define _LOWER 2
#define _RAISE 3
#define _CTRLL 4
#define _MDEF 5
#define _MFUNPAD 6
#define _MLOWER 7
#define _MRAISE 8


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* 0) Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  \   |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   '	|Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   -  |RShift|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |FUNPAD| CMD  | Alt  |Lower |    Space    |Raise | Left |  Up  | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_preonic_1x2uC( \
  KC_ESC,  IT_1,    IT_2,    IT_3,    IT_4,    IT_5,    IT_6,    IT_7,    IT_8,    IT_9,    IT_0,    KC_BSPC, \
  KC_TAB,  IT_Q,    IT_W,    IT_E,    IT_R,    IT_T,    IT_Y,    IT_U,    IT_I,    IT_O,    IT_P,    KC_DEL,  \
  IT_BKSL, IT_A,    IT_S,    IT_D,    IT_F,    IT_G,    IT_H,    IT_J,    IT_K,    IT_L,    IT_APOS, KC_ENT,  \
  KC_LSFT, IT_Z,    IT_X,    IT_C,    IT_V,    IT_B,    IT_N,    IT_M,    IT_COMM, IT_DOT,  IT_MINS, KC_RSFT, \
  KC_LCTL, MO(1),   KC_LCMD, KC_LALT, MO(2),      KC_SPC,        MO(3),   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT  \
),

/* 1) Functions + Numpad
 * ,-----------------------------------------------------------------------------------.
 * |CTRLL |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |MACDEF|  F11 |  F12 | N/O  | N/O  |  N/O | Calc | Pad7 | Pad8 | Pad9 | Pad* | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | N/O  |  N/O |BrigDw|BrigUp| N/O  |  N/O |  N/O | Pad4 | Pad5 | Pad6 | Pad/ |PadENT|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |CAPSLK| Mute | Vol- | Vol+ | N/O  |  N/O |NUM LK| Pad1 | Pad2 | Pad3 | Pad- | Pad, |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  N/O |      | N/O  | N/O  |      | PrintScreen |      | Pad0 | Pad. | Pad+ | Pad= |
 * `-----------------------------------------------------------------------------------'
 */
[_FUNPAD] = LAYOUT_preonic_1x2uC( \
  TO(4),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_BSPC, \
  TO(5),   KC_F11,  KC_F12,  KC_NO,   KC_NO,   KC_NO,    KC_CALC, KC_P7,   KC_P8,   KC_P9,   KC_PAST, KC_DEL,  \
  KC_NO,   KC_NO,   KC_BRID, KC_BRIU, KC_NO,   KC_NO,    KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PSLS, KC_PENT, \
  KC_CAPS, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,   KC_NO,    KC_NUM, KC_P1,   KC_P2,   KC_P3,   KC_PMNS, KC_PCMM, \
  KC_NO,   _______, KC_NO,   KC_NO,   _______,     KC_PSCR,       _______, KC_P0,   KC_PDOT, KC_PPLS, KC_PEQL  \
),

/* 2) Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |   !  |   @  |   #  |   $  |   %  |  N/O |  N/O |  {   |   }  |  N/O |  N/O |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  N/O |  N/O |  N/O |   è  |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   /  |   à  |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |   `  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |LShift|   <  |   >  |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |RShift|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |      |   ~  |Alt-Gr|      |             |      | HOME | PGUP | PGDN | END  |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_1x2uC( \
  _______, IT_EXLM, IT_AT, 	 IT_HASH, IT_DLR,  IT_PERC, KC_NO,   KC_NO,	  IT_LCBR, IT_RCBR, KC_NO,   KC_NO,   \
  KC_NO,   KC_NO,   KC_NO,   IT_EACC, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   \
  IT_SLSH, IT_AACC, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   IT_GRV,  KC_ENT,  \
  KC_LSFT, IT_LESS, IT_MORE, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RSFT, \
  KC_RCTL, _______, IT_TILD, KC_ALGR, _______,     _______,      _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END   \
),


/* 3) Raise 
 * ,-----------------------------------------------------------------------------------.
 * |      |  N/O |  N/O |  N/O |   €  |  N/O |   ^  |   &  |   [  |   ]  |   ?  |  N/O |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  N/O |  N/O |  N/O |   é  |  N/O |  N/O |  N/O |   ù  |   ì  |   ò  |   *  |  Ins |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   ¦  |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |   "  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |LShift|  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |   <  |   >  |   +  |RShift|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |      |  N/O |Alt-Gr|      |    Ctrl     |      | HOME | PGUP | PGDN | END  |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_1x2uC( \
  _______, KC_NO,   KC_NO, KC_NO,   IT_EURO, KC_NO,   IT_CIRC, IT_AMPR, IT_LBRC, IT_RBRC, IT_QST,  KC_NO,   \
  KC_NO,   KC_NO,   KC_NO, IT_EACA, KC_NO,   KC_NO,   KC_NO,   IT_UACC, IT_IACC, IT_OACC, IT_ASTR, KC_INS,  \
  IT_BBAR, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   IT_DQOT, KC_ENT,  \
  KC_LSFT, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   IT_LESS, IT_MORE, IT_PLUS, KC_RSFT, \
  KC_RCTL, _______, KC_NO, KC_ALGR, _______,     KC_RCTL,      _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END   \
),

/* 4) CTRLL
 * ,-----------------------------------------------------------------------------------.
 * |Qwerty|  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Qwerty|  N/O |  N/O |  N/O |Reset |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  N/O |  N/O |  N/O |Debug |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  N/O |      |  N/O |  N/O |      |     N/O     |      |  N/O |  N/O |  N/O |  N/O |
 * `-----------------------------------------------------------------------------------'
 */

[_CTRLL] = LAYOUT_preonic_1x2uC( \
  TO(0),   KC_NO,   KC_NO,  KC_NO,  KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,  \
  DF(0),   KC_NO,   KC_NO,  KC_NO,  RESET,   KC_NO,  KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,  \
  KC_NO,   KC_NO,   KC_NO,  DEBUG,  KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,  \
  KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,  \
  KC_NO,   _______, KC_NO,  KC_NO,  _______,     KC_NO,       _______, KC_NO, KC_NO, KC_NO, KC_NO   \
),

/* --------------- MAC LEVELS --------------- */

/* 5) MacDef
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  \   |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   '	|Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   -  |RShift|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CMD  |FUNPAD| Ctrl | Alt  |Lower |    Space    |Raise | Left |  Up  | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_MDEF] = LAYOUT_preonic_1x2uC( \
  KC_ESC,   IT_1,    IT_2,    IT_3,    IT_4,    IT_5,    IT_6,    IT_7,    IT_8,    IT_9,    IT_0,    KC_BSPC, \
  KC_TAB,   IT_Q,    IT_W,    IT_E,    IT_R,    IT_T,    IT_Y,    IT_U,    IT_I,    IT_O,    IT_P,    KC_DEL,  \
  MI_BKSL,  IT_A,    IT_S,    IT_D,    IT_F,    IT_G,    IT_H,    IT_J,    IT_K,    IT_L,    IT_APOS, KC_ENT,  \
  KC_LSFT,  IT_Z,    IT_X,    IT_C,    IT_V,    IT_B,    IT_N,    IT_M,    IT_COMM, IT_DOT,  IT_MINS, KC_RSFT, \
  KC_LCMD,  MO(6),   KC_LCTL, KC_LALT, MO(7),      KC_SPC,        MO(8),   KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT  \
),

/* 6) MAC Functions + Numpad
 * ,-----------------------------------------------------------------------------------.
 * |CTRLL |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |MACDEF|  F11 |  F12 | N/O  | N/O  |  N/O | Calc | Pad7 | Pad8 | Pad9 | Pad* | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | N/O  |  N/O |BrigDw|BrigUp| N/O  |  N/O |  N/O | Pad4 | Pad5 | Pad6 | Pad/ |PadENT|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |CAPSLK| Mute | Vol- | Vol+ | N/O  |  N/O |NUM LK| Pad1 | Pad2 | Pad3 | Pad- | Pad, |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  N/O |      | N/O  | N/O  |      | PrintScreen |      | Pad0 | Pad. | Pad+ | Pad= |
 * `-----------------------------------------------------------------------------------'
 */
[_MFUNPAD] = LAYOUT_preonic_1x2uC( \
  TO(4),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_BSPC, \
  TO(0),   KC_F11,  KC_F12,  KC_NO,   KC_NO,   KC_NO,    KC_CALC, KC_P7,   KC_P8,   KC_P9,   KC_PAST, KC_DEL,  \
  KC_NO,   KC_NO,   KC_BRID, KC_BRIU, KC_NO,   KC_NO,    KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PSLS, KC_PENT, \
  KC_CAPS, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,   KC_NO,    KC_NUM,  KC_P1,   KC_P2,   KC_P3,   KC_PMNS, KC_PCMM, \
  KC_NO,   _______, KC_NO,   KC_NO,   _______,     KC_PSCR,       _______, KC_P0,   KC_PDOT, KC_PPLS, KC_PEQL  \
),

/* 7) MAC Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |   !  |   @  |   #  |   $  |   %  |  N/O |  N/O |  {   |   }  |  N/O |  N/O |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  N/O |  N/O |  N/O |   è  |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   /  |   à  |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |   `  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |LShift|   <  |   >  |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |RShift|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CMD  |      |   ~  |Alt-Gr|      |             |      | HOME | PGUP | PGDN | END  |
 * `-----------------------------------------------------------------------------------'
 */
[_MLOWER] = LAYOUT_preonic_1x2uC( \
  _______, IT_EXLM, IT_AT, 	 IT_HASH, IT_DLR,  IT_PERC, KC_NO,   KC_NO,	  IT_LCBR, IT_RCBR, KC_NO,   KC_NO,   \
  KC_NO,   KC_NO,   KC_NO,   IT_EACC, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   \
  MI_PIPE, IT_AACC, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   IT_GRV,  KC_ENT,  \
  KC_LSFT, IT_LESS, IT_MORE, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RSFT, \
  KC_LCMD, _______, IT_TILD, KC_ALGR, _______,     _______,      _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END   \
),


/* 8) MAC Raise 
 * ,-----------------------------------------------------------------------------------.
 * |      |  N/O |  N/O |  N/O |   €  |  N/O |   ^  |   &  |   [  |   ]  |   ?  |  N/O |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  N/O |  N/O |  N/O |   é  |  N/O |  N/O |  N/O |   ù  |   ì  |   ò  |   *  |  Ins |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   ¦  |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |   "  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |LShift|  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |  N/O |   <  |   >  |   +  |RShift|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CMD  |      |  N/O |Alt-Gr|      |    Ctrl     |      | HOME | PGUP | PGDN | END  |
 * `-----------------------------------------------------------------------------------'
 */
[_MRAISE] = LAYOUT_preonic_1x2uC( \
  KC_NO,   KC_NO,   KC_NO, KC_NO,   IT_EURO, KC_NO,   IT_CIRC, IT_AMPR, IT_LBRC, IT_RBRC, IT_QST,  KC_NO,   \
  KC_NO,   KC_NO,   KC_NO, IT_EACA, KC_NO,   KC_NO,   KC_NO,   IT_UACC, IT_IACC, IT_OACC, IT_ASTR, KC_INS,  \
  KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   IT_DQOT, KC_ENT,  \
  KC_LSFT, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   MI_LESS, MI_MORE, IT_PLUS, KC_RSFT, \
  KC_LCMD, _______, KC_NO, KC_ALGR, _______,     KC_RCTL,      _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END   \
)

};


/*
MAC LAYOUT NOTE:


*/