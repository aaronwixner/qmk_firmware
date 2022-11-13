#include "5x6_5.h"


#ifdef RGB_MATRIX_ENABLE

// LED Layout
// Columns
// 0   1   2   3   4   5   6   7   8   9   10  11
// Physical (Center: 133)
// 20  41  61  81  102 122 143 163 183 204 224 244
//
//                                                  				Rows  Physical (Center: 54)
// 	01 	02	03  04	05          			50  51  52  53  54   	0     21
// 	10 	09  08  07 	06          			49  48  47  46  45   	1     43
// 	11 	12 	13	14  15          			40  41  42  43  44   	2     64
//	20	19	18	17	16						39	38	37	36	35		3
//  21	22	23	24	25  					30  31  32	33	34      4   85
//				27	26						29	28					5

led_config_t g_led_config = { {
    // Key matrix to LED index
    // Left 1-27
            {0, 1, 2,  3,  4, NO_LED},
            {9, 8, 7,  6,  5, NO_LED},
            {10, 11,  12,  13,  14, NO_LED},
			{19, 18,  17,  16,  15, NO_LED},
			{NO_LED, 20,  21,  22,  23, 24},
			{NO_LED, NO_LED,  NO_LED,  NO_LED,  26, 25},
													// Key matrix to LED index
													// Right 28-54
													{NO_LED, 49, 50, 51,  52,  53},
													{NO_LED, 49, 47, 46,  45,  44},
													{NO_LED, 39, 40,  41,  42,  43},
													{NO_LED, 38, 37,  36,  35,  34},
													{29,  30,  31,  32, 33, NO_LED},
													{28,  27,  NO_LED,  NO_LED, NO_LED, NO_LED}
}, {
    // LED index to physical position
    // Left 1-27
	// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgb_matrix.md
	// x = 224 / (NUMBER_OF_COLS - 1) * COL_POSITION
	// y =  64 / (NUMBER_OF_ROWS - 1) * ROW_POSITION
    {0,0},		{25,0},		{50,0},		{75,0},		{100,0}, 
    {100,13},	{75,13},	{50,13},	{25,13},	{0,13}, 
    {0,26},		{25,26},	{50,26},	{75,26},	{100,26}, 
    {100,39},		{75,39},	{50,39},	{25,39},	{0,39}, 
	// this row is the jank row of L hand for col spacing
				{25,42},	{50,42},	{85,42},	{108,42},	{125,48}, 
													{100,48},	{112,55},

    // Right 28-54
																										{150,0},	{175,0},	{200,0},	{225,0},	{250,0},
																									 	{250,13},	{225,13},	{200,13},	{175,13},	{150,13},
																										{150,26},	{175,26},	{200,26},	{225,26},	{250,26},
																										{225,39},	{200,39},	{175,39},	{150,39},	{250,39},
																				{225,48},	{200,42},	{175,42},	{150,42},	{125,42},
																				{137,48},	{158,55}

}, {
    // LED index to flag
    // Left 1-27
    4,4,4,4,4,
    4,4,4,4,4,
    4,4,4,4,4,
	4,4,4,4,4,
	4,4,4,4,4,
	      4,4,

    // Right 28-54
    4,4,4,4,4,
    4,4,4,4,4,
    4,4,4,4,4,
	4,4,4,4,4,
	4,4,4,4,4,	
    4,4
} };


void suspend_power_down_kb(void) {
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}


#endif