#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ttm/header.h"


static const LevelScript script_ttm_area_1_macro_objects[] = {
    // Macro objects
    OBJECT(/*model*/ MODEL_BOBOMB_BUDDY,      /*pos*/   799, -2668,  3320, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBobombBuddyOpensCannon),
    OBJECT(/*model*/ MODEL_DL_CANNON_LID,     /*pos*/  5035, -3994, -3445, /*angle*/ 0,  45, 0, /*behParam*/ (0xC0 << 16), /*beh*/ bhvCannonClosed),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,   /*pos*/  3644, -1304,  1422, /*angle*/ 0,  90, 0, /*behParam*/ (DIALOG_072 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,   /*pos*/   622, -4331,  5466, /*angle*/ 0,   0, 0, /*behParam*/ (DIALOG_094 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_RED_COIN,          /*pos*/  1450, -2750, -4250, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,          /*pos*/  2550, -2750, -3400, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,          /*pos*/  4150, -2700, -2800, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,          /*pos*/ -1600, -1650, -2500, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,          /*pos*/ -1200, -1600, -3250, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,          /*pos*/ -1850,   100, -2850, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,          /*pos*/ -1500,  -800, -2750, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,   /*pos*/ -1126, -3448, -4400, /*angle*/ 0, 180, 0, /*behParam*/ (DIALOG_091 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_NONE,              /*pos*/  1740, -4236,  5320, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvGoombaTripletSpawner),
    OBJECT(/*model*/ MODEL_NONE,              /*pos*/  4540, -4607,  1060, /*angle*/ 0,   0, 0, /*behParam*/ ((COIN_FORMATION_FLAG_RING  ) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_1UP,               /*pos*/ -3713, -4130,  3530, /*angle*/ 0,   0, 0, /*behParam*/ (MUSHROOM_BP_REQUIRES_NONE << 16), /*beh*/ bhv1Up),
    OBJECT(/*model*/ MODEL_BLACK_BOBOMB,      /*pos*/ -3507, -2480, -1046, /*angle*/ 0,   0, 0, /*behParam*/ (BOBOMB_BP_STYPE_GENERIC << 16), /*beh*/ bhvBobomb),
    OBJECT(/*model*/ MODEL_BLACK_BOBOMB,      /*pos*/ -3538, -2409,   -61, /*angle*/ 0,   0, 0, /*behParam*/ (BOBOMB_BP_STYPE_GENERIC << 16), /*beh*/ bhvBobomb),
    OBJECT(/*model*/ MODEL_BLACK_BOBOMB,      /*pos*/ -3538, -2330,  1046, /*angle*/ 0,   0, 0, /*behParam*/ (BOBOMB_BP_STYPE_GENERIC << 16), /*beh*/ bhvBobomb),
    OBJECT(/*model*/ MODEL_NONE,              /*pos*/  -521, -2047,  3568, /*angle*/ 0,  82, 0, /*behParam*/ ((COIN_FORMATION_FLAG_NONE  ) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_BLACK_BOBOMB,      /*pos*/  2369, -1451, -3876, /*angle*/ 0,   0, 0, /*behParam*/ (BOBOMB_BP_STYPE_GENERIC << 16), /*beh*/ bhvBobomb),
    OBJECT(/*model*/ MODEL_BLACK_BOBOMB,      /*pos*/   707, -1223, -3846, /*angle*/ 0,   0, 0, /*behParam*/ (BOBOMB_BP_STYPE_GENERIC << 16), /*beh*/ bhvBobomb),
    OBJECT(/*model*/ MODEL_1UP,               /*pos*/ -1010,  -705, -3385, /*angle*/ 0,   0, 0, /*behParam*/ (MUSHROOM_BP_REQUIRES_NONE << 16), /*beh*/ bhv1Up),
    OBJECT(/*model*/ MODEL_NONE,              /*pos*/  -584,   195,  1476, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvGoombaTripletSpawner),
    OBJECT(/*model*/ MODEL_1UP,               /*pos*/  1530,   620,  1670, /*angle*/ 0,   0, 0, /*behParam*/ (MUSHROOM_BP_REQUIRES_NONE << 16), /*beh*/ bhv1Up),
    OBJECT(/*model*/ MODEL_NONE,              /*pos*/  3476,   708,  -896, /*angle*/ 0,   0, 0, /*behParam*/ ((COIN_FORMATION_FLAG_NONE  ) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_NONE,              /*pos*/  2461,  1461,  1960, /*angle*/ 0, 125, 0, /*behParam*/ ((COIN_FORMATION_FLAG_NONE  ) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_EXCLAMATION_BOX,   /*pos*/  3261, -2553, -4092, /*angle*/ 0,   0, 0, /*behParam*/ (EXCLAMATION_BOX_BP_1UP_WALKING << 16), /*beh*/ bhvExclamationBox),
    OBJECT(/*model*/ MODEL_NONE,              /*pos*/ -1907,  -861, -3138, /*angle*/ 0, 330, 0, /*behParam*/ ((COIN_FORMATION_FLAG_FLYING) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX,     /*pos*/  1950,   880,  1321, /*angle*/ 0,  30, 0, /*behParam*/ (BREAKABLE_BOX_BP_NO_COINS << 16), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,     /*pos*/ -1200,  1543,   460, /*angle*/ 0,  50, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchHiddenObjects),
    OBJECT(/*model*/ MODEL_NONE,              /*pos*/  -600,  1177, -1340, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvGoombaTripletSpawner),
    OBJECT(/*model*/ MODEL_NONE,              /*pos*/  -780, -4580,  4440, /*angle*/ 0,   0, 0, /*behParam*/ (FISH_SPAWNER_BP_FEW_BLUE << 16), /*beh*/ bhvFishSpawner),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX,     /*pos*/  -900,  1540,   580, /*angle*/ 0,  55, 0, /*behParam*/ (BREAKABLE_BOX_BP_NO_COINS << 16), /*beh*/ bhvHiddenObject),
    OBJECT(/*model*/ MODEL_CHUCKYA,           /*pos*/ -2676, -2145,  2923, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChuckya),
    OBJECT(/*model*/ MODEL_RED_COIN,          /*pos*/  1840, -2880, -3600, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_NONE,              /*pos*/  -880,  1750,   580, /*angle*/ 0,   0, 0, /*behParam*/ ((COIN_FORMATION_FLAG_FLYING | COIN_FORMATION_FLAG_VERTICAL) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_FLYGUY,            /*pos*/  2300, -1384,  3753, /*angle*/ 0,   0, 0, /*behParam*/ (FLY_GUY_BP_SHOOTS_FIRE << 16), /*beh*/ bhvFlyGuy),
    OBJECT(/*model*/ MODEL_BUTTERFLY,         /*pos*/  -606,  1186, -1290, /*angle*/ 0,   0, 0, /*behParam*/ (TRIPLET_BUTTERFLY_BP_0 << 16), /*beh*/ bhvTripletButterfly),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX,     /*pos*/  4980, -4607,  2680, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJumpingBox),
    // Special objects
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_03, /*pos*/ -3276, -4423, -3685, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_03, /*pos*/  7293, -5056,  1429, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_03, /*pos*/  4938, -5568,  5115, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_04, /*pos*/  4198, -4508, -2866, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_04, /*pos*/  1470, -4507, -4298, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_04, /*pos*/  3277, -4508, -4095, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_05, /*pos*/  3891, -4489, -3532, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_05, /*pos*/  3277, -4489, -3071, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_05, /*pos*/  2509, -4489, -3378, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_05, /*pos*/   534, -4490, -4176, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_06, /*pos*/  2358, -4594, -4386, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_06, /*pos*/  1843, -4515, -3583, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_06, /*pos*/  2317, -4635, -3838, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_07, /*pos*/   102, -4363,  5734, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_08, /*pos*/  4710, -4656,  -101, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_09, /*pos*/  5018, -4249, -3481, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0A, /*pos*/  -306, -3356,  3584, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0B, /*pos*/  1434, -2279,  3277, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0C, /*pos*/  2970, -1854,  4301, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0D, /*pos*/  4608, -1854,  2560, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_0F, /*pos*/  2355,  1309,  1229, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_10, /*pos*/  1843,  1295,  1024, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_11, /*pos*/   819,  2349,  -101, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_12, /*pos*/ -1945,  -918, -3071, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_13, /*pos*/ -1842, -1791, -2866, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_14, /*pos*/ -1228,  -613, -3071, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_15, /*pos*/ -1740,  -204, -2354, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_LEVEL_GEOMETRY_16, /*pos*/ -2764, -2661,  3789, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    RETURN(),
};

static const LevelScript script_ttm_area_2_macro_objects[] = {
    // Macro objects
    OBJECT(/*model*/ MODEL_NONE,        /*pos*/  6100,  4836,  6981, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHidden1upTrigger),
    OBJECT(/*model*/ MODEL_NONE,        /*pos*/  6645,  4800,  7563, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHidden1upTrigger),
    OBJECT(/*model*/ MODEL_NONE,        /*pos*/  7845,  4836,  6327, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHidden1upTrigger),
    OBJECT(/*model*/ MODEL_NONE,        /*pos*/  7263,  4836,  5745, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHidden1upTrigger),
    OBJECT(/*model*/ MODEL_1UP,         /*pos*/  6936,  4800,  6654, /*angle*/ 0,   0, 0, /*behParam*/ (4 << 16), /*beh*/ bhvHidden1up),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  6281,  4836,  6472, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_1UP,         /*pos*/  6754,  4800,  5963, /*angle*/ 0,   0, 0, /*behParam*/ (MUSHROOM_BP_REQUIRES_NONE << 16), /*beh*/ bhv1Up),
    OBJECT(/*model*/ MODEL_1UP,         /*pos*/  1764,  2943,  1480, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhv1upSliding),
    OBJECT(/*model*/ MODEL_NONE,        /*pos*/  2972,  3963,  2690, /*angle*/ 0,  45, 0, /*behParam*/ ((COIN_FORMATION_FLAG_NONE) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_NONE,        /*pos*/    27,  2145,  -290, /*angle*/ 0,  45, 0, /*behParam*/ ((COIN_FORMATION_FLAG_NONE) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -2763,   -37, -2981, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    RETURN(),
};

static const LevelScript script_ttm_area_3_macro_objects[] = {
    // Macro objects
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -5414,  3830,  6571, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -6328,  3349,  5771, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -6842,  2616,  4400, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_1UP,         /*pos*/ -7128,  1807,  2285, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhv1upSliding),
    OBJECT(/*model*/ MODEL_NONE,        /*pos*/ -1471, -3848,  1198, /*angle*/ 0,   0, 0, /*behParam*/ ((COIN_FORMATION_FLAG_NONE) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -2839,  -618, -6855, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -1242, -1448, -4400, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -2444,  -618, -6666, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -2044,  -680, -6400, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -1556,  -850, -6044, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_BLUE_COIN,   /*pos*/ -7066,  1199,   -44, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMovingBlueCoin),
    OBJECT(/*model*/ MODEL_BLUE_COIN,   /*pos*/ -7054,  2372,  3854, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMovingBlueCoin),
    OBJECT(/*model*/ MODEL_BLUE_COIN,   /*pos*/ -1709,  5054,  7054, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMovingBlueCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  -618, -5826,  5745, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/   -72, -5923,  6254, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/   690, -6027,  6618, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  3490, -6511,  6727, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  4327, -6849,  5963, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  4036, -6695,  6400, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  4690, -7155,  3200, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -3309,  -541, -6981, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -1300, -2672, -1550, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    RETURN(),
};

static const LevelScript script_ttm_area_4_macro_objects[] = {
    // Macro objects
    OBJECT(/*model*/ MODEL_NONE,        /*pos*/  2128,  1085, -4800, /*angle*/ 0,  90, 0, /*behParam*/ ((COIN_FORMATION_FLAG_NONE) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  5878,  2583,  2430, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  6620,  2348,  1621, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  6642,  1995,  -666, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/ -2000,  4551,  2678, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/   847,  3575,  2621, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  3631,  2914,  2819, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  6472,  1613, -2945, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN, /*pos*/  5272,  1342, -4254, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    RETURN(),
};

static const LevelScript script_ttm_area_1_objects_1[] = {
    OBJECT(/*model*/ MODEL_TTM_ROLLING_LOG,    /*pos*/  4360, -1722,  4001, /*angle*/ 0,  48, 0, /*behParam*/ 0x00000000, /*beh*/ bhvTtmRollingLog),
    RETURN(),
};

static const LevelScript script_ttm_area_1_objects_2[] = {
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/ -1639,  1146, -1742, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvTtmBowlingBallSpawner),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  3295, -3692,  2928, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterfallSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  2004, -1580,  1283, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterfallSoundLoop),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2077, -1023, -1969, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2500, -1023, -2157, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2048, -1023, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2351, -1023, -2416, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2400, -2559, -2185, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -1435, -2559, -3118, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -1677, -2559, -3507, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -1869, -2559, -2704, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2525, -2559, -2626, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_MONTY_MOLE,         /*pos*/     0,     0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMole),
    OBJECT(/*model*/ MODEL_MONTY_MOLE,         /*pos*/     0,     0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvMontyMole),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  3625,   560,   165, /*angle*/ 0, 330, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCloud),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UKIKI,              /*pos*/   729,  2307,   335, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvUkiki,       /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UKIKI,              /*pos*/  1992, -1548,  2944, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvUkiki,       /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_ttm_area_1_objects_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,           /*pos*/  1200,  2600,   150, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,              /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_TTM_STAR_CAGE,  /*pos*/  2496,  1670,  1492, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvUkikiCage,         /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,           /*pos*/ -3250, -2500, -3700, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,           /*pos*/ -2900, -2700,  3650, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,              /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,           /*pos*/  1800,  1200,  1050, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,              /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,           /*pos*/  7300, -3100,  1300, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,              /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_ttm_area_2_objects_1[] = {
    OBJECT(/*model*/ MODEL_TTM_BLUE_SMILEY,   /*pos*/  4389,  3620,   624, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_YELLOW_SMILEY, /*pos*/ -1251,  2493,  2224, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_STAR_SMILEY,   /*pos*/ -2547,  1365,  -520, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_MOON_SMILEY,   /*pos*/  -324,   989, -4090, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    RETURN(),
};

static const LevelScript script_ttm_area_3_objects_1[] = {
    OBJECT(/*model*/ MODEL_TTM_BLUE_SMILEY,   /*pos*/  7867,  -959, -6085, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_BLUE_SMILEY,   /*pos*/ -5241,  5329,  9466, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_YELLOW_SMILEY, /*pos*/ -1869, -5311,  7358, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_STAR_SMILEY,   /*pos*/ -9095,  4262,  5348, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_MOON_SMILEY,   /*pos*/ -8477,   730, -7122, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_MOON_SMILEY,   /*pos*/  6160, -6076,  7861, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    RETURN(),
};

static const LevelScript script_ttm_area_4_objects_1[] = {
    OBJECT(/*model*/ MODEL_TTM_YELLOW_SMILEY, /*pos*/  5157,  1974, -8292, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_STAR_SMILEY,   /*pos*/ 11106,  2588,   381, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_MOON_SMILEY,   /*pos*/    37,  1974, -1124, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    RETURN(),
};

const LevelScript level_ttm_entry[] = {
    INIT_LEVEL(),
#include "levels/ttm/areas/script_vanilla_load.inc.c"
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
#include "levels/ttm/areas/script_vanilla.inc.c"

    AREA(/*index*/ 1, ttm_geo_000A70),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/   102, -3332,  5734, /*angle*/ 0,   45, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvSpinAirborneWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2447, -2457,  3952, /*angle*/ 0, -105, 0, /*behParam*/ 0x00140000, /*beh*/ bhvAirborneWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/  2267, -3006, -3788, /*angle*/ 0,  148, 0, /*behParam*/ 0x00150000, /*beh*/ bhvFadingWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/  -557, -3448, -4146, /*angle*/ 0, -168, 0, /*behParam*/ 0x00160000, /*beh*/ bhvFadingWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x14, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x01, /*destNode*/ 0x14, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x15, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x01, /*destNode*/ 0x16, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x16, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x01, /*destNode*/ 0x15, /*flags*/ WARP_NO_CHECKPOINT),
        PAINTING_WARP_NODE(/*id*/ 0x00, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_CHECKPOINT),
        PAINTING_WARP_NODE(/*id*/ 0x01, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_CHECKPOINT),
        PAINTING_WARP_NODE(/*id*/ 0x02, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_ttm_area_1_objects_1),
        JUMP_LINK(script_ttm_area_1_objects_2),
        JUMP_LINK(script_ttm_area_1_objects_3),
        TERRAIN(/*terrainData*/ ttm_seg7_area_1_collision),
        JUMP_LINK(script_ttm_area_1_macro_objects),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, ttm_geo_000B5C),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 7000, 5381, 6750, /*angle*/ 0, 225, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_ttm_area_2_objects_1),
        TERRAIN(/*terrainData*/ ttm_seg7_area_2_collision),
        JUMP_LINK(script_ttm_area_2_macro_objects),
        INSTANT_WARP(/*index*/ 2, /*destArea*/ 3, /*displace*/ 10240, 7168, 10240),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    AREA(/*index*/ 3, ttm_geo_000BEC),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_ttm_area_3_objects_1),
        TERRAIN(/*terrainData*/ ttm_seg7_area_3_collision),
        JUMP_LINK(script_ttm_area_3_macro_objects),
        INSTANT_WARP(/*index*/ 3, /*destArea*/ 4, /*displace*/ -11264, 13312, 3072),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    AREA(/*index*/ 4, ttm_geo_000C84),
        OBJECT(/*model*/ MODEL_TTM_SLIDE_EXIT_PODIUM, /*pos*/ -7285, -1866, -4812, /*angle*/ 0, 0, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvExitPodiumWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x01, /*destNode*/ 0x14, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_ttm_area_4_objects_1),
        TERRAIN(/*terrainData*/ ttm_seg7_area_4_collision),
        JUMP_LINK(script_ttm_area_4_macro_objects),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 45, /*pos*/ 102, -4332, 5734),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
