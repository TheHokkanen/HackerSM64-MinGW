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
#include "levels/hmc/header.h"


static const LevelScript script_hmc_macro_objects[] = {
    // Macro objects
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/ -6060,  2048,  5960, /*angle*/ 0, 315, 0, /*behParam*/ (DIALOG_089 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/ -6770,  1845,  4577, /*angle*/ 0,   0, 0, /*behParam*/ (DIALOG_050 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_SWOOP,                     /*pos*/  -439,   220, -2540, /*angle*/ 0,   0, 0, /*behParam*/ (SWOOP_BP_1 << 16), /*beh*/ bhvSwoop),
    OBJECT(/*model*/ MODEL_SWOOP,                     /*pos*/    80,   140, -4660, /*angle*/ 0,   0, 0, /*behParam*/ (SWOOP_BP_0 << 16), /*beh*/ bhvSwoop),
    OBJECT(/*model*/ MODEL_SWOOP,                     /*pos*/   800,    60, -7500, /*angle*/ 0,   0, 0, /*behParam*/ (SWOOP_BP_0 << 16), /*beh*/ bhvSwoop),
    OBJECT(/*model*/ MODEL_SWOOP,                     /*pos*/  1880,   100, -7620, /*angle*/ 0,   0, 0, /*behParam*/ (SWOOP_BP_1 << 16), /*beh*/ bhvSwoop),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/  2500,   217,    50, /*angle*/ 0,   0, 0, /*behParam*/ (DIALOG_071 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/  2900,   217,    50, /*angle*/ 0,   0, 0, /*behParam*/ (DIALOG_062 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/   838,  2052,  3580, /*angle*/ 0, 270, 0, /*behParam*/ (DIALOG_088 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_SCUTTLEBUG,                /*pos*/ -6320,  2048,  6740, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvScuttlebug),
    OBJECT(/*model*/ MODEL_SCUTTLEBUG,                /*pos*/ -5455,  1536,   521, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvScuttlebug),
    OBJECT(/*model*/ MODEL_RED_COIN,                  /*pos*/  2140,  2048,  6540, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,                  /*pos*/  2900,  2048,  6500, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,                  /*pos*/  6400,  2090,  5320, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,                  /*pos*/  6820,  1024,  3300, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,                  /*pos*/  6260,  1124,  4960, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,                  /*pos*/  4080,  1124,  5760, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,                  /*pos*/  4640,  2250,  3980, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_RED_COIN,                  /*pos*/  2960,  1124,  5140, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRedCoin),
    OBJECT(/*model*/ MODEL_EXCLAMATION_BOX,           /*pos*/ -6924,  2440,  7364, /*angle*/ 0,  45, 0, /*behParam*/ (EXCLAMATION_BOX_BP_METAL_CAP   << 16), /*beh*/ bhvExclamationBox),
    OBJECT(/*model*/ MODEL_SCUTTLEBUG,                /*pos*/  4160,    28,  6308, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvScuttlebug),
    OBJECT(/*model*/ MODEL_SCUTTLEBUG,                /*pos*/  5392,    28,  3587, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvScuttlebug),
    OBJECT(/*model*/ MODEL_SNUFIT,                    /*pos*/  2260,  -627, -1660, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSnufit),
    OBJECT(/*model*/ MODEL_SNUFIT,                    /*pos*/  5760,  -623, -1600, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSnufit),
    OBJECT(/*model*/ MODEL_SNUFIT,                    /*pos*/  4560,  -620, -1499, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSnufit),
    OBJECT(/*model*/ MODEL_EXCLAMATION_BOX,           /*pos*/  5860,  -550,  -739, /*angle*/ 0,   0, 0, /*behParam*/ (EXCLAMATION_BOX_BP_METAL_CAP << 16), /*beh*/ bhvExclamationBox),
    OBJECT(/*model*/ MODEL_EXCLAMATION_BOX,           /*pos*/  1939,  -600, -2920, /*angle*/ 0,   0, 0, /*behParam*/ (EXCLAMATION_BOX_BP_METAL_CAP << 16), /*beh*/ bhvExclamationBox),
    OBJECT(/*model*/ MODEL_EXCLAMATION_BOX,           /*pos*/  5100,  -600, -4500, /*angle*/ 0,   0, 0, /*behParam*/ (EXCLAMATION_BOX_BP_METAL_CAP << 16), /*beh*/ bhvExclamationBox),
    OBJECT(/*model*/ MODEL_NONE,                      /*pos*/ -6580,  1680, -5780, /*angle*/ 0,   0, 0, /*behParam*/ ((COIN_FORMATION_FLAG_NONE) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX,             /*pos*/  1022,  1848,  5120, /*angle*/ 0,   0, 0, /*behParam*/ (BREAKABLE_BOX_BP_NO_COINS << 16), /*beh*/ bhvBreakableBox),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX,             /*pos*/  3500,  2150,  3000, /*angle*/ 0,   0, 0, /*behParam*/ (BREAKABLE_BOX_BP_NO_COINS << 16), /*beh*/ bhvBreakableBox),
    OBJECT(/*model*/ MODEL_NONE,                      /*pos*/  3240, -4720,  2360, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvScuttlebugSpawn),
    OBJECT(/*model*/ MODEL_NONE,                      /*pos*/ -3600, -4240,  3600, /*angle*/ 0,   0, 0, /*behParam*/ ((COIN_FORMATION_FLAG_RING) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_EXCLAMATION_BOX,           /*pos*/ -3000, -2250, -6400, /*angle*/ 0,   0, 0, /*behParam*/ (EXCLAMATION_BOX_BP_METAL_CAP << 16), /*beh*/ bhvExclamationBox),
    OBJECT(/*model*/ MODEL_NONE,                      /*pos*/ -3420,  1800,  5960, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvScuttlebugSpawn),
    OBJECT(/*model*/ MODEL_SWOOP,                     /*pos*/  6080,  3060,  4660, /*angle*/ 0,   0, 0, /*behParam*/ (SWOOP_BP_0 << 16), /*beh*/ bhvSwoop),
    OBJECT(/*model*/ MODEL_SWOOP,                     /*pos*/  5480,  3000,  7120, /*angle*/ 0,   0, 0, /*behParam*/ (SWOOP_BP_0 << 16), /*beh*/ bhvSwoop),
    OBJECT(/*model*/ MODEL_NONE,                      /*pos*/ -2700,  2060, -6400, /*angle*/ 0,   0, 0, /*behParam*/ ((COIN_FORMATION_FLAG_RING) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_SWOOP,                     /*pos*/ -5440,  1720,  -320, /*angle*/ 0,   0, 0, /*behParam*/ (SWOOP_BP_1 << 16), /*beh*/ bhvSwoop),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,               /*pos*/ -2220,  2048,  4440, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_HEART,                     /*pos*/ -7511,  1420,  -666, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRecoveryHeart),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/ -3359,  1536,   298, /*angle*/ 0, 270, 0, /*behParam*/ (DIALOG_122 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/ -3092,  2033, -7685, /*angle*/ 0,   0, 0, /*behParam*/ (DIALOG_138 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/  5439,     0,  2785, /*angle*/ 0,   0, 0, /*behParam*/ (DIALOG_125 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/ -3184,     0,   699, /*angle*/ 0,   0, 0, /*behParam*/ (DIALOG_126 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/   500, -4300,  3644, /*angle*/ 0, 270, 0, /*behParam*/ (DIALOG_127 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_EXCLAMATION_BOX,           /*pos*/ -4960,  2700,    80, /*angle*/ 0,   0, 0, /*behParam*/ (EXCLAMATION_BOX_BP_1UP_WALKING << 16), /*beh*/ bhvExclamationBox),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/  2006,     0,  6713, /*angle*/ 0, 180, 0, /*behParam*/ (DIALOG_124 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/  2510,     0,  2800, /*angle*/ 0,   0, 0, /*behParam*/ (DIALOG_140 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/   510,     0,  5380, /*angle*/ 0,  90, 0, /*behParam*/ (DIALOG_139 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,               /*pos*/ -2340,  2040,  4560, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,               /*pos*/ -2460,  2040,  4660, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,               /*pos*/ -2060,  2040,  4380, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_YELLOW_COIN,               /*pos*/ -1920,  2040,  4320, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvOneCoin),
    OBJECT(/*model*/ MODEL_BLUE_COIN_SWITCH,          /*pos*/  5145,  -767, -2954, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBlueCoinSwitch),
    OBJECT(/*model*/ MODEL_BLUE_COIN,                 /*pos*/  3945, -1023, -2918, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenBlueCoin),
    OBJECT(/*model*/ MODEL_BLUE_COIN,                 /*pos*/  3800, -1023, -4009, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenBlueCoin),
    OBJECT(/*model*/ MODEL_BLUE_COIN,                 /*pos*/  3036,  -858, -4118, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenBlueCoin),
    OBJECT(/*model*/ MODEL_BLUE_COIN,                 /*pos*/  2018,  -921, -4154, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenBlueCoin),
    OBJECT(/*model*/ MODEL_BLUE_COIN,                 /*pos*/  1836,  -921, -4700, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenBlueCoin),
    OBJECT(/*model*/ MODEL_BLUE_COIN,                 /*pos*/  1836,  -721, -4700, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenBlueCoin),
    OBJECT(/*model*/ MODEL_BLUE_COIN,                 /*pos*/  1836,  -521, -4700, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenBlueCoin),
    OBJECT(/*model*/ MODEL_NONE,                      /*pos*/  2800,   205,   463, /*angle*/ 0,  90, 0, /*behParam*/ ((COIN_FORMATION_FLAG_NONE  ) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_NONE,                      /*pos*/  1800,  -409, -7390, /*angle*/ 0,  90, 0, /*behParam*/ ((COIN_FORMATION_FLAG_NONE  ) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_NONE,                      /*pos*/ -5342,  2809, -1790, /*angle*/ 0, 144, 0, /*behParam*/ ((COIN_FORMATION_FLAG_FLYING) << 16), /*beh*/ bhvCoinFormation),
    OBJECT(/*model*/ MODEL_SWOOP,                     /*pos*/  5632,  -563, -4454, /*angle*/ 0,   0, 0, /*behParam*/ (SWOOP_BP_1 << 16), /*beh*/ bhvSwoop),
    OBJECT(/*model*/ MODEL_SWOOP,                     /*pos*/  4915,  -665, -5274, /*angle*/ 0,   0, 0, /*behParam*/ (SWOOP_BP_1 << 16), /*beh*/ bhvSwoop),
    OBJECT(/*model*/ MODEL_SWOOP,                     /*pos*/  5120,  -665, -4660, /*angle*/ 0,   0, 0, /*behParam*/ (SWOOP_BP_0 << 16), /*beh*/ bhvSwoop),
    OBJECT(/*model*/ MODEL_SWOOP,                     /*pos*/  5427,  -665, -5070, /*angle*/ 0,   0, 0, /*behParam*/ (SWOOP_BP_0 << 16), /*beh*/ bhvSwoop),
    OBJECT(/*model*/ MODEL_SNUFIT,                    /*pos*/  2439,  -722, -5499, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSnufit),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE,        /*pos*/  2714,  -768, -4096, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE,        /*pos*/  3011,  -768, -1272, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE,        /*pos*/  3324,  -768, -1475, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_MONTY_MOLE,                /*pos*/  3940,  -768, -2880, /*angle*/ 0,   0, 0, /*behParam*/ (MONTY_MOLE_BP_ROCK << 16), /*beh*/ bhvMontyMole),
    OBJECT(/*model*/ MODEL_NONE,                      /*pos*/  4740,  1060,  4680, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMrI),
    OBJECT(/*model*/ MODEL_NONE,                      /*pos*/  6700,  1020,  6820, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMrI),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX,             /*pos*/  2960,  1024,  5140, /*angle*/ 0,   0, 0, /*behParam*/ (BREAKABLE_BOX_BP_NO_COINS << 16), /*beh*/ bhvBreakableBox),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX,             /*pos*/  4080,  1024,  5760, /*angle*/ 0,   0, 0, /*behParam*/ (BREAKABLE_BOX_BP_NO_COINS << 16), /*beh*/ bhvBreakableBox),
    OBJECT(/*model*/ MODEL_BREAKABLE_BOX,             /*pos*/  6260,  1024,  4960, /*angle*/ 0,   0, 0, /*behParam*/ (BREAKABLE_BOX_BP_NO_COINS << 16), /*beh*/ bhvBreakableBox),
    OBJECT(/*model*/ MODEL_WOODEN_SIGNPOST,           /*pos*/ -4370,  2860, -2243, /*angle*/ 0, 135, 0, /*behParam*/ (DIALOG_043 << 16), /*beh*/ bhvMessagePanel),
    OBJECT(/*model*/ MODEL_NONE,                      /*pos*/ -2900,  1620,  4640, /*angle*/ 0,   0, 0, /*behParam*/ (FLAMETHROWER_BP_UPWARDS << 16), /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_BOWLING_BALL,              /*pos*/  1420,  -380, -7040, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFireSpitter),
    OBJECT(/*model*/ MODEL_BOWLING_BALL,              /*pos*/  2500,  -380, -7740, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFireSpitter),
    OBJECT(/*model*/ MODEL_EXCLAMATION_BOX,           /*pos*/ -2700,  2100, -6400, /*angle*/ 0,   0, 0, /*behParam*/ (EXCLAMATION_BOX_BP_1UP_RUNNING_AWAY << 16), /*beh*/ bhvExclamationBox),
    // Special objects
    OBJECT(/*model*/ MODEL_CASTLE_WOODEN_DOOR_UNUSED, /*pos*/   922, -4689,  2330, /*angle*/ 0, 270, 0, /*behParam*/ (0 << 24), /*beh*/ bhvDoor),
    OBJECT(/*model*/ MODEL_CASTLE_WOODEN_DOOR_UNUSED, /*pos*/ -3586,  1536,   647, /*angle*/ 0,  26, 0, /*behParam*/ (0 << 24), /*beh*/ bhvDoor),
    OBJECT(/*model*/ MODEL_CASTLE_WOODEN_DOOR_UNUSED, /*pos*/  5911,  -204,   870, /*angle*/ 0,   0, 0, /*behParam*/ (0 << 24), /*beh*/ bhvDoor),
    OBJECT(/*model*/ MODEL_CASTLE_WOODEN_DOOR_UNUSED, /*pos*/  3817,   205,   870, /*angle*/ 0,   0, 0, /*behParam*/ (0 << 24), /*beh*/ bhvDoor),
    OBJECT(/*model*/ MODEL_HMC_METAL_DOOR,            /*pos*/  1127,  -409, -4709, /*angle*/ 0,  90, 0, /*behParam*/ (0 << 24), /*beh*/ bhvDoor),
    OBJECT(/*model*/ MODEL_HMC_METAL_DOOR,            /*pos*/  -468, -4279,  6711, /*angle*/ 0,  45, 0, /*behParam*/ (0 << 24), /*beh*/ bhvDoor),
    OBJECT(/*model*/ MODEL_HMC_METAL_DOOR,            /*pos*/  -359, -4279,  6602, /*angle*/ 0, 225, 0, /*behParam*/ (0 << 24), /*beh*/ bhvDoor),
    OBJECT(/*model*/ MODEL_HMC_METAL_DOOR,            /*pos*/ -3634,  2355, -2764, /*angle*/ 0,  90, 0, /*behParam*/ (0 << 24), /*beh*/ bhvDoor),
    OBJECT(/*model*/ MODEL_HMC_METAL_DOOR,            /*pos*/ -4863,  1843, -7551, /*angle*/ 0, 270, 0, /*behParam*/ (0 << 24), /*beh*/ bhvDoor),
    OBJECT(/*model*/ MODEL_HMC_METAL_DOOR,            /*pos*/  3328,  -409, -6911, /*angle*/ 0,   0, 0, /*behParam*/ (0 << 24), /*beh*/ bhvDoor),
    OBJECT(/*model*/ MODEL_HMC_HAZY_MAZE_DOOR,        /*pos*/   358,  2048,  3661, /*angle*/ 0, 270, 0, /*behParam*/ (0 << 24), /*beh*/ bhvDoor),
    OBJECT(/*model*/ MODEL_HMC_HAZY_MAZE_DOOR,        /*pos*/ -6553,  1536,  1459, /*angle*/ 0,   0, 0, /*behParam*/ (0 << 24), /*beh*/ bhvDoor),
    RETURN(),
};

static const LevelScript script_hmc_objects_1[] = {
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 4936, -357, -4146, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 5018, -460, -5559, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1997,  666,  -235, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1762, -460, -2610, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 4178, -255, -3737, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 2233, -460,   256, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 5510, -255, -3429, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 4690, -357,  -767, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 3462, -255, -1125, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1762,  666,     0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1762, -460,   256, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6482,  461,  3226, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 1075,  461,  6543, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6912,  461,  6543, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6912,  461,  3697, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 6482,  461,  7014, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME, /*pos*/ 3817,  717,  1034, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
    OBJECT(/*model*/ MODEL_NONE,      /*pos*/  799, 1024,  4434, /*angle*/ 0, 0, 0, /*behParam*/ 0x00B80000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,      /*pos*/  889, 1024,  3277, /*angle*/ 0, 0, 0, /*behParam*/ 0x00B80000, /*beh*/ bhvPoleGrabbing),
    RETURN(),
};

static const LevelScript script_hmc_objects_2[] = {
    OBJECT(/*model*/ MODEL_HMC_METAL_PLATFORM,    /*pos*/  1100,   950,  6350, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvControllablePlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/ -3243,  1434,  1392, /*angle*/ 0,  27, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/ -2816,  2253, -2509, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/  -973,  1741, -7347, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_HMC_ELEVATOR_PLATFORM, /*pos*/ -3533,  1741, -7040, /*angle*/ 0,   0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvHmcElevatorPlatform),
    OBJECT(/*model*/ MODEL_NONE,                  /*pos*/   614, -4690,  2330, /*angle*/ 0, 270, 0, /*behParam*/ 0x00010000, /*beh*/ bhvOpenableGrill),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,         /*pos*/  -307, -4997,  2483, /*angle*/ 0, 270, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchGrills),
    OBJECT(/*model*/ MODEL_CHECKERBOARD_PLATFORM, /*pos*/  1270,  2000,  4000, /*angle*/ 0, 270, 0, /*behParam*/ 0x09A40000, /*beh*/ bhvPlatformOnTrack),
    RETURN(),
};

static const LevelScript script_hmc_objects_3[] = {
    OBJECT(/*model*/ MODEL_DORRIE, /*pos*/ -3533, -4969,  3558, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDorrie),
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/ -6093,  3075, -7807, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBigBoulderGenerator),
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/  -500,  1600,  3500, /*angle*/ 0, 0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,   /*pos*/  -500,  1600,  3800, /*angle*/ 0, 0, 0, /*behParam*/ 0x00040000, /*beh*/ bhvFlamethrower),
    RETURN(),
};

static const LevelScript script_hmc_objects_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -3600, -4000,  3600, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/  4000,   300,  5000, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/  6200, -4400,  2300, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -2100,  2100, -7550, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -6500,  2700, -1600, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -5000,  3050, -6700, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_hmc_entry[] = {
    INIT_LEVEL(),
#include "levels/hmc/areas/script_vanilla_load.inc.c"
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
#include "levels/hmc/areas/script_vanilla.inc.c"

    AREA(/*index*/ 1, hmc_geo_000B90),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -7152,  3161, 7181, /*angle*/ 0, 135, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvSpinAirborneWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/  3351, -4690, 4773, /*angle*/ 0,   0, 0, /*behParam*/ 0x340B0000, /*beh*/ bhvWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_HMC, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0B, /*destLevel*/ LEVEL_COTMC, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_hmc_objects_1),
        JUMP_LINK(script_hmc_objects_2),
        JUMP_LINK(script_hmc_objects_3),
        JUMP_LINK(script_hmc_objects_4),
        TERRAIN(/*terrainData*/ hmc_seg7_collision_level),
        JUMP_LINK(script_hmc_macro_objects),
        ROOMS(/*surfaceRooms*/ hmc_seg7_rooms),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 135, /*pos*/ -7152, 2161, 7181),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
