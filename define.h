
typedef unsigned char uint8_t;



#define HID_NOEVENT 0x00                        //Reserved (no event indicated)
#define HID_ERR_RLL_OVER  0x01                          //Keyboard ErrorRollOver
#define HID_POST_FAIL  0x02                     //Keyboard POSTFail
#define HID_ERR_UNDEF  0x03                     //Keyboard ErrorUndefined
#define HID_A  0x04                             //Keyboard a and A
#define HID_B  0x05                             //Keyboard b and B
#define HID_C  0x06                             //Keyboard c and C
#define HID_D  0x07                             //Keyboard d and D
#define HID_E  0x08                             //Keyboard e and E
#define HID_F  0x09                             //Keyboard f and F
#define HID_G  0x0A                             //Keyboard g and G
#define HID_H  0x0B                             //Keyboard h and H
#define HID_I  0x0C                             //Keyboard i and I
#define HID_J  0x0D                             //Keyboard j and J
#define HID_K  0x0E                             //Keyboard k and K
#define HID_L  0x0F                             //Keyboard l and L
#define HID_M  0x10                             //Keyboard m and M
#define HID_N  0x11                             //Keyboard n and N
#define HID_O  0x12                             //Keyboard o and O
#define HID_P  0x13                             //Keyboard p and P
#define HID_Q  0x14                             //Keyboard q and Q
#define HID_R  0x15                             //Keyboard r and R
#define HID_S  0x16                             //Keyboard s and S
#define HID_T  0x17                             //Keyboard t and T
#define HID_U  0x18                             //Keyboard u and U
#define HID_V  0x19                             //Keyboard v and V
#define HID_W  0x1A                             //Keyboard w and W
#define HID_X  0x1B                             //Keyboard x and X
#define HID_Y  0x1C                             //Keyboard y and Y
#define HID_Z  0x1D                             //Keyboard z and Z
#define HID_1  0x1E                             //Keyboard 1 and !
#define HID_2  0x1F                             //Keyboard 2 and @
#define HID_3  0x20                             //Keyboard 3 and #
#define HID_4  0x21                             //Keyboard 4 and $
#define HID_5  0x22                             //Keyboard 5 and %
#define HID_6  0x23                             //Keyboard 6 and ^
#define HID_7  0x24                             //Keyboard 7 and &
#define HID_8  0x25                             //Keyboard 8 and *
#define HID_9  0x26                             //Keyboard 9 and (
#define HID_0  0x27                             //Keyboard 0 and )
#define HID_ENTER  0x28                         //Keyboard Return (ENTER)
#define HID_ESC  0x29                     //Keyboard ESCAPE
#define HID_BACK_SPACE  0x2A                      //Keyboard DELETE (Backspace)
#define HID_TAB  0x2B                           //Keyboard Tab
#define HID_SPACE  0x2C                         //Keyboard Spacebar
#define HID_HYPH  0x2D                          //Keyboard - and (underscore)
#define HID_EQUAL  0x2E                         //Keyboard = and +
#define HID_LEFT_BRACKET  0x2F                          //Keyboard [ and {
#define HID_RIGHT_BRACKET  0x30                         //Keyboard ] and }
#define HID_BACK_SLASH  0x31                      //Keyboard \ and |
#define HID_POUND  0x32                         //Keyboard Non-US # and ~
#define HID_SEMI_COLON  0x33                      //Keyboard ; and :
#define HID_APOSTROPHY  0x34                      //Keyboard ' and "
#define HID_ACCENT  0x35                        //Keyboard Grave Accent and Tilde
#define HID_COMMA  0x36                         //Keyboard, and <
#define HID_PERIOD  0x37                        //Keyboard . and >
#define HID_FWD_SLASH  0x38                     //Keyboard / and ?
#define HID_CAPS  0x39                          //Keyboard Caps Lock
#define HID_F1  0x3A                            //Keyboard F1
#define HID_F2  0x3B                            //Keyboard F2
#define HID_F3  0x3C                            //Keyboard F3
#define HID_F4  0x3D                            //Keyboard F4
#define HID_F5  0x3E                            //Keyboard F5
#define HID_F6  0x3F                            //Keyboard F6
#define HID_F7  0x40                            //Keyboard F7
#define HID_F8  0x41                            //Keyboard F8
#define HID_F9  0x42                            //Keyboard F9
#define HID_F10  0x43                           //Keyboard F10
#define HID_F11  0x44                           //Keyboard F11
#define HID_F12  0x45                           //Keyboard F12
#define HID_PRNT_SRN  0x46                      //Keyboard PrintScreen
#define HID_SCR_LCK  0x47                       //Keyboard Scroll Lock
#define HID_PAUSE  0x48                         //Keyboard Pause
#define HID_INSERT  0x49                        //Keyboard Insert
#define HID_HOME  0x4A                          //Keyboard Home
#define HID_PG_UP  0x4B                         //Keyboard PageUp
#define HID_DEL  0x4C                           //Keyboard Delete Forward
#define HID_END  0x4D                           //Keyboard End
#define HID_PG_DWN  0x4E                        //Keyboard PageDown
#define HID_RIGHT_ARROW  0x4F                     //Keyboard RightArrow
#define HID_LEFT_ARROW  0x50                      //Keyboard LeftArrow
#define HID_DOWN_ARROW  0x51                      //Keyboard DownArrow
#define HID_UP_ARROW  0x52                      //Keyboard UpArrow
#define HID_NUM_LCK  0x53                       //Keypad Num Lock and Clear
#define HID_KP_FWD_SLASH  0x54                          //Keypad /
#define HID_KP_STAR  0x55                       //Keypad *
#define HID_KP_HYPH  0x56                       //Keypad -
#define HID_KP_PLUS  0x57                       //Keypad +
#define HID_KP_ENTER  0x58                      //Keypad ENTER
#define HID_KP_1  0x59                          //Keypad 1 and End
#define HID_KP_2  0x5A                          //Keypad 2 and Down Arrow
#define HID_KP_3 0x5B                           //Keypad 3 and PageDn
#define HID_KP_4  0x5C                          //Keypad 4 and Left Arrow
#define HID_KP_5  0x5D                          //Keypad 5
#define HID_KP_6  0x5E                          //Keypad 6 and Right Arrow
#define HID_KP_7  0x5F                          //Keypad 7 and Home
#define HID_KP_8  0x60                          //Keypad 8 and Up Arrow
#define HID_KP_9  0x61                          //Keypad 9 and PageUp
#define HID_KP_0  0x62                          //Keypad 0 and Insert
#define HID_KP_PERIOD  0x63                     //Keypad . and Delete
#define HID_BACK_SLASH_NON_US  0x64               //Keyboard Non-US \ and |
#define HID_APPLICATION  0x65                     //Keyboard Application
#define HID_POWER  0x66                         //Keyboard Power
#define HID_KP_EQUAL  0x67                      //Keypad =
#define HID_F13  0x68                           //Keyboard F13
#define HID_F14  0x69                           //Keyboard F14
#define HID_F15  0x6A                           //Keyboard F15
#define HID_F16  0x6B                           //Keyboard F16
#define HID_F17  0x6C                           //Keyboard F17
#define HID_F18  0x6D                           //Keyboard F18
#define HID_F19  0x6E                           //Keyboard F19
#define HID_F20  0x6F                           //Keyboard F20
#define HID_F21  0x70                           //Keyboard F21
#define HID_F22  0x71                           //Keyboard F22
#define HID_F23  0x72                           //Keyboard F23
#define HID_F24  0x73                           //Keyboard F24
#define HID_EXECUTE  0x74                       //Keyboard Execute
#define HID_HELP  0x75                          //Keyboard Help
#define HID_MENU  0x76                          //Keyboard Menu
#define HID_SELECT  0x77                        //Keyboard Select
#define HID_STOP  0x78                          //Keyboard Stop
#define HID_AGAIN  0x79                         //Keyboard Again
#define HID_UNDO  0x7A                          //Keyboard Undo
#define HID_CUT  0x7B                           //Keyboard Cut
#define HID_COPY  0x7C                          //Keyboard Copy
#define HID_PASTE  0x7D                         //Keyboard Paste
#define HID_FIND  0x7E                          //Keyboard Find
#define HID_MUTE  0x7F                          //Keyboard Mute
#define HID_VOL_UP  0x80                        //Keyboard Volume Up
#define HID_VOL_DWN  0x81                       //Keyboard Volume Down
#define HID_LCKING_CAPS  0x82                     //Keyboard Locking Caps Lock
#define HID_LCKING_NUM  0x83                      //Keyboard Locking Num Lock
#define HID_LCKING_SCR  0x84                      //Keyboard Locking Scroll Lock
#define HID_KP_COMMA  0x85                      //Keypad Comma
#define HID_KP_EQUAL_SIGN  0x86                         //Keypad Equal Sign
#define HID_INTR_1  0x87                        //Keyboard International1
#define HID_INTR_2  0x88                        //Keyboard International2
#define HID_INTR_3  0x89                        //Keyboard International3
#define HID_INTR_4  0x8A                        //Keyboard International4
#define HID_INTR_5  0x8B                        //Keyboard International5
#define HID_INTR_6  0x8C                        //Keyboard International6
#define HID_INTR_7  0x8D                        //Keyboard International7
#define HID_INTR_8  0x8E                        //Keyboard International8
#define HID_INTR_9  0x8F                        //Keyboard International9
#define HID_LANG_1  0x90                        //Keyboard LANG1
#define HID_LANG_2  0x91                        //Keyboard LANG2
#define HID_LANG_3  0x92                        //Keyboard LANG3
#define HID_LANG_4  0x93                        //Keyboard LANG4
#define HID_LANG_5  0x94                        //Keyboard LANG5
#define HID_LANG_6  0x95                        //Keyboard LANG6
#define HID_LANG_7  0x96                        //Keyboard LANG7
#define HID_LANG_8  0x97                        //Keyboard LANG8
#define HID_LANG_9  0x98                        //Keyboard LANG9
#define HID_ALT_ERASE  0x99                     //Keyboard Alternate Erase
#define HID_SYS_REQ  0x9A                       //Keyboard SysReq/Attention
#define HID_CANCEL  0x9B                        //Keyboard Cancel
#define HID_CLEAR  0x9C                         //Keyboard Clear
#define HID_PRIOR  0x9D                         //Keyboard Prior
#define HID_RETURN  0x9E                        //Keyboard Return
#define HID_SEPERATOR  0x9F                     //Keyboard Separator
#define HID_OUT  0xA0                           //Keyboard Out
#define HID_OPER  0xA1                          //Keyboard Oper
#define HID_CLEAR_AGAIN  0xA2                     //Keyboard Clear/Again
#define HID_CR_SEL  0xA3                        //Keyboard CrSel/Props
#define HID_ EX_SEL 0xA4                        //Keyboard ExSel
#define HID_LEFT_CTRL  0xE0                     //Keyboard LeftControl
#define HID_LEFT_SHIFT  0xE1                      //Keyboard LeftShift
#define HID_LEFT_ALT  0xE2                      //Keyboard LeftAlt
#define HID_LEFT_GUI  0xE3                      //Keyboard Left GUI
#define HID_RIGHT_CTRL  0xE4                      //Keyboard RightControl
#define HID_RIGHT_SHIFT  0xE5                     //Keyboard RightShift
#define HID_RIGHT_ALT  0xE6                     //Keyboard RightAlt
#define HID_RIGHT_GUI  0xE7                     //Keyboard Right GUI





#define PS2_A                 0x1C
#define PS2_B                 0x32
#define PS2_C                 0x21
#define PS2_D                 0x23
#define PS2_E                 0x24
#define PS2_F                 0x2B
#define PS2_G                 0x34
#define PS2_H                 0x33
#define PS2_I                 0x43
#define PS2_J                 0x3B
#define PS2_K                 0x42
#define PS2_L                 0x4B
#define PS2_M                 0x3A
#define PS2_N                 0x31
#define PS2_O                 0x44
#define PS2_P                 0x4D
#define PS2_Q                 0x15
#define PS2_R                 0x2D
#define PS2_S                 0x1B
#define PS2_T                 0x2C
#define PS2_U                   0x3C
#define PS2_V                   0x2A
#define PS2_W                   0x1D
#define PS2_X                   0x22
#define PS2_Y                   0x35
#define PS2_Z                   0x1A
#define PS2_0                   0x45
#define PS2_1                   0x16
#define PS2_2                   0x1E
#define PS2_3                   0x26
#define PS2_4                   0x25
#define PS2_5                 0x2E
#define PS2_6                   0x36
#define PS2_7                 0x3D
#define PS2_8                   0x3E
#define PS2_9                   0x46
#define PS2_ACCENT            0x0E
#define PS2_HYPH        0x4E
#define PS2_EQUAL       0x55
#define PS2_BACK_SLASH        0x5D
#define PS2_BACK_SPACE        0x66
#define PS2_SPACE       0x29
#define PS2_TAB                 0x0D
#define PS2_CAPS        0x58
#define PS2_LEFT_SHIFT        0x12
#define PS2_LEFT_CTRL         0x14
#define PS2_LEFT_GUI          0xE01F
#define PS2_LEFT_ALT          0x11
#define PS2_RIGHT_SHIFT       0x59
#define PS2_RIGHT_CTRL        0xE014
#define PS2_RIGHT_GUI         0xE027
#define PS2_RIGHT_ALT         0xE011
#define PS2_APPLICATION       0xE02F
#define PS2_ENTER       0x5A
#define PS2_ESC                 0x76
#define PS2_F1                  0x05
#define PS2_F2                  0x06
#define PS2_F3                  0x04
#define PS2_F4                0x0C
#define PS2_F5                0x03
#define PS2_F6                0x0B
#define PS2_F7                      0x83
#define PS2_F8                0x0A
#define PS2_F9                0x01
#define PS2_F10               0x09
#define PS2_F11                 0x78
#define PS2_F12                 0x07
#define PS2_PRNT_SCR          0xE012E07C
#define PS2_SCROLL            0x7E
#define PS2_PAUSE       0xE11477E1F014F077
#define PS2_LEFT_BRACKET      0x54
#define PS2_INSERT            0xE070
#define PS2_HOME        0xE06C
#define PS2_PG_UP       0xE07D
#define PS2_DELETE            0xE071
#define PS2_END                 0xE069
#define PS2_PG_DWN            0xE07A
#define PS2_UP_ARROW          0xE075
#define PS2_LEFT_ARROW        0xE06B
#define PS2_DOWN_ARROW        0xE072
#define PS2_RIGHT_ARROW       0xE074
#define PS2_NUM                 0x77
#define PS2_KP_FWD_SLASH      0xE04A
#define PS2_KP_STAR           0x7C
#define PS2_KP_HYPH           0x7B
#define PS2_KP_PLUS           0x79
#define PS2_KP_ENTER       0xE05A
#define PS2_KP_PERIOD         0x71
#define PS2_KP_0        0x70
#define PS2_KP_1        0x69
#define PS2_KP_2        0x72
#define PS2_KP_3        0x7A
#define PS2_KP_4        0x6B
#define PS2_KP_5        0x73
#define PS2_KP_6        0x74
#define PS2_KP_7        0x6C
#define PS2_KP_8        0x75
#define PS2_KP_9        0x7D
#define PS2_RIGHT_BRACKET     0x5B
#define PS2_SEMI_COLON        0x4C
#define PS2_APOSTROPHY        0x52
#define PS2_COMMA       0x41
#define PS2_PERIOD            0x49
#define PS2_FWD_SLASH         0x4A
#define PS2_PLAY_PAUSE  0xE034
#define PS2_STOP  0xE03B
#define PS2_VOL_UP  0xE032
#define PS2_REV_TRACK  0xE015
#define PS2_FWD_TRACK  0xE04D
#define PS2_VOL_DWN  0xE021
#define PS2_MUTE  0xE023





uint8_t PS2_to_HID_keymap[] = {
  0, HID_F9, 0, HID_F5, HID_F3, HID_F1, HID_F2, HID_F12,
  0, HID_F10, HID_F8, HID_F6, HID_F4, HID_TAB, HID_ACCENT, 0,
  0, HID_LEFT_ALT, HID_LEFT_SHIFT, 0, HID_LEFT_CTRL, HID_Q, HID_1, 0,
  0, 0, HID_Z, HID_S, HID_A, HID_W, HID_2, 0,
  0, HID_C, HID_X, HID_D, HID_E, HID_4, HID_3, 0,
  0, HID_SPACE, HID_V, HID_F, HID_T, HID_R, HID_5, 0,
  0, HID_N, HID_B, HID_H, HID_G, HID_Y, HID_6, 0,
  0, 0, HID_M, HID_J, HID_U, HID_7, HID_8, 0,
  0, HID_COMMA, HID_K, HID_I, HID_O, HID_0, HID_9, 0,
  0, HID_PERIOD, HID_FWD_SLASH, HID_L, HID_SEMI_COLON, HID_P, HID_HYPH, 0,
  0, 0, HID_APOSTROPHY, 0, HID_LEFT_BRACKET, HID_EQUAL, 0, 0,
  HID_CAPS, HID_RIGHT_SHIFT, HID_ENTER, HID_RIGHT_BRACKET, 0, HID_BACK_SLASH, 0, 0,
  0, 0, 0, 0, 0, 0, HID_BACK_SPACE, 0,
  0, HID_KP_1, 0, HID_KP_4, HID_KP_7, 0, 0, 0,
  HID_KP_0, HID_KP_PERIOD, HID_KP_2, HID_KP_5, HID_KP_6, HID_KP_8, HID_ESC, HID_NUM_LCK,
  HID_F11, HID_KP_PLUS, HID_KP_3, HID_KP_HYPH, HID_KP_STAR, HID_KP_9, HID_SCR_LCK, 0,
  0, 0, 0, HID_F7

};




uint8_t PS2Long_to_HID_keymap[] = {
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, HID_RIGHT_ALT, HID_PRNT_SRN, 0, HID_RIGHT_CTRL, 0x00, 0, 0,
  0, 0, 0, 0, 0, 0, 0, HID_LEFT_GUI,
  0, HID_VOL_DWN, 0, 0, 0, 0, 0, HID_RIGHT_GUI,
  0, 0, 0, 0, 0, 0, 0, HID_APPLICATION,
  0, 0, HID_VOL_UP, 0, 0x00, 0, 0, 0,
  0, 0, 0, 0x00, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, HID_KP_FWD_SLASH, 0, 0, 0x00, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, HID_KP_ENTER, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, HID_END, 0, HID_LEFT_ARROW, HID_HOME, HID_PAUSE, 0, 0,
  HID_INSERT, HID_DEL, HID_DOWN_ARROW, 0, HID_RIGHT_ARROW, HID_UP_ARROW, 0, 0,
  0, 0, HID_PG_DWN, 0, 0, HID_PG_UP
};

