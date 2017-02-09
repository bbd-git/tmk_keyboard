/* 
 * HHKB JP Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
   /* Layer 0: Default Layer */
    [0] = \
    KEYMAP_JP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,    MINS, EQL, GRV,BSPC, \
              TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN, LBRC, RBRC, \
              LGUI,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,    QUOT, BSLS,ENT, \
              LSFT,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH, RSFT, UP,  FN8, \
              LCTL,ZKHK,LCTL,LALT,FN2,     SPC,       FN9 ,RCTL,RALT, FN1,  LEFT,DOWN,RGHT),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |------------------------------------------------------`    |
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|   |    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |  +|  -|End|PgD|Dow|   |   |   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
     * `-----------------------------------------------------------'
     */
    [1] = \
    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, \
              TRNS,VOLD,VOLU,TRNS,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,TRNS,PENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),

    [2] = \
    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,F21,F22,F23,F24,TRNS, TRNS, \
              TRNS,TRNS,TRNS,FN4,FN5,TRNS,LEFT,DOWN,UP,RIGHT,DEL,TRNS,TRNS,ENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSPC,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     FN9,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    [3] = \
    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              TRNS,TRNS,KP_9,F14,TRNS,TRNS,TRNS,KP_1,KP_2,KP_3,KP_4,TRNS, TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,F13,F16,F19,F17,F18,TRNS,TRNS,ENT, \
              TRNS,KP_0,TRNS,TRNS,TRNS,KP_5,KP_6,KP_7, KP_8,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,FN9,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    [4] = \
    KEYMAP_JP(PWR, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  7,  8,  9,  TRNS, TRNS, TRNS, TRNS, TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,4,5,6,TRNS,TRNS, TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,0,1,2,3,TRNS,TRNS,TRNS,ENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,FN2,     TRNS,     FN9,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    [5] = \
    KEYMAP_JP(PWR, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, TRNS, TRNS, TRNS, TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN6,FN7,TRNS, TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,KP_ASTERISK,KP_PLUS,MINUS,SLASH,TRNS,TRNS,TRNS,ENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,EQL, FN10,TRNS,TRNS,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,FN2,     TRNS,     FN9,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    [6] = \
    KEYMAP_JP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, JYEN,BSPC, \
              TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC, \
              LGUI,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,BSLS,ENT, \
              LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RO,  UP,  FN8, \
              FN1, ZKHK,LCTL,LALT,FN2,     SPC,      FN3,KANA,RALT,FN1, LEFT,DOWN,RGHT),
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_DEFAULT_LAYER_SET(0),
    [1] = ACTION_LAYER_MOMENTARY(1),
    [2] = ACTION_LAYER_MOMENTARY(2),
    [3] = ACTION_LAYER_MOMENTARY(3),
    [4] = ACTION_LAYER_MOMENTARY(4),
    [5] = ACTION_LAYER_MOMENTARY(5),
    [6] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [7] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [8] = ACTION_LAYER_TOGGLE(6),
    [9] = ACTION_FUNCTION(2),
    [10]= ACTION_MODS_KEY(MOD_LSFT, KC_DOT),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case 2:
            // Shift parentheses example: LShft + tap '('
            // http://stevelosh.com/blog/2012/10/a-modern-space-cadet/#shift-parentheses
            // http://geekhack.org/index.php?topic=41989.msg1304899#msg1304899

        if (record->event.pressed){
          // ACTION_MODS(MOD_LALT | MOD_LSFT | MOD_LCTL | MOD_LGUI);
          add_weak_mods(MOD_BIT(KC_LSHIFT));
          add_weak_mods(MOD_BIT(KC_LALT));
          // add_weak_mods(MOD_BIT(KC_LGUI));
          add_weak_mods(MOD_BIT(KC_LCTL));
          send_keyboard_report();
        }else{
          del_weak_mods(MOD_BIT(KC_LSHIFT));
          del_weak_mods(MOD_BIT(KC_LALT));
          // del_weak_mods(MOD_BIT(KC_LGUI));
          del_weak_mods(MOD_BIT(KC_LCTL));
          send_keyboard_report();
        }

        // add_weak_mods(MOD_BIT(KC_LSHIFT));
        // send_keyboard_report();
        // register_code(record);
        // unregister_code(KC_9);
        // del_weak_mods(MOD_BIT(KC_LSHIFT));
        // send_keyboard_report();

        // uint8_t keycode = keymap_key_to_keycode(0, record->event.key);
        // keycode_to_action(keycode);
            //register_mods(MOD_BIT(KC_LSHIFT | KC_LALT | KC_LGUI | KC_LCTL));

            break;
    }
}

