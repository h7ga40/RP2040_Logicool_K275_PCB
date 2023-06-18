#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

#define KC_RO   KC_INT1
#define KC_KANA KC_INT2
#define KC_JYEN KC_INT3
#define KC_HENK KC_INT4
#define KC_MHEN KC_INT5
#define KC_ZKHK KC_GRV

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = {
		{ KC_MPLY,_______,_______,KC_MHEN,_______,KC_2   ,_______,KC_PSLS,KC_PAST,_______,KC_LGUI,_______ },
		{ KC_LCTL,_______,KC_MUTE,KC_VOLD,KC_VOLU,KC_PENT,KC_PMNS,KC_0   ,KC_NUM ,_______,_______,KC_RCTL },
		{ KC_PWR ,KC_RALT,KC_LALT,_______,KC_HOME,KC_PDOT,KC_CAPS,_______,KC_END ,_______,_______,KC_CALC },
		{ KC_MAIL,_______,_______,KC_LSFT,KC_RSFT,KC_P9  ,KC_BSLS,_______,KC_DEL ,_______,_______,_______ },
		{ KC_ESC ,KC_U   ,KC_P7  ,KC_INS ,KC_R   ,KC_P6  ,KC_LBRC,KC_7   ,KC_LEFT,KC_S   ,KC_F4  ,KC_BSPC },
		{ _______,_______,_______,_______,_______,KC_P0  ,KC_PPLS,KC_5   ,KC_APP ,_______,_______,_______ },
		{ KC_6   ,KC_DOT ,KC_3   ,KC_M   ,KC_C   ,_______,KC_W   ,KC_DOWN,KC_P2  ,KC_COMM,KC_K   ,KC_Y    },
		{ KC_8   ,KC_QUOT,KC_1   ,KC_H   ,KC_N   ,KC_I   ,KC_P4  ,KC_D   ,KC_F8  ,KC_F6  ,KC_9   ,KC_T    },
		{ KC_F2  ,KC_F12 ,KC_G   ,KC_4   ,KC_V   ,KC_A   ,KC_J   ,KC_F5  ,KC_O   ,KC_SLSH,KC_P1  ,KC_B    },
		{ KC_Z   ,KC_F10 ,KC_X   ,KC_RBRC,KC_L   ,KC_MINS,KC_UP  ,KC_P3  ,KC_JYEN,KC_F7  ,KC_E   ,KC_Q    },
		{ KC_F3  ,KC_F9  ,KC_PGUP,KC_PGDN,KC_PSCR,KC_RGHT,KC_F11 ,KC_RO  ,KC_F   ,KC_P5  ,KC_PAUS,KC_F1   },
		{ KC_SPC ,KC_P8  ,KC_ENT ,KC_ZKHK,KC_HOME,KC_SCRL,KC_EQL ,KC_HENK,KC_KANA,KC_P   ,KC_SCLN,KC_TAB  },
	}
};
