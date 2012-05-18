#ifndef _DEVO8_TARGET_H_
#define _DEVO8_TARGET_H_

#define NUM_TX_INPUTS 4
#define NUM_INPUTS (NUM_TX_INPUTS + 3)
#define NUM_CHANNELS 12

//MAX = 10000
//MIN = -10000
#define CHAN_MULTIPLIER 100
#define PCT_TO_RANGE(x) ((s16)x * CHAN_MULTIPLIER)
#define RANGE_TO_PCT(x) ((s16)x / CHAN_MULTIPLIER)
#define CHAN_MAX_VALUE (100 * CHAN_MULTIPLIER)
#define CHAN_MIN_VALUE (-100 * CHAN_MULTIPLIER)

#define NUM_TRIMS 4
#define MAX_POINTS 13
#define NUM_MIXERS 16

#define INP_NONE     0
#define INP_THROTTLE 1
#define INP_RUDDER   2
#define INP_ELEVATOR 3
#define INP_AILERON  4

#define INP_HAS_CALIBRATION 4

#endif //_DEVO8_TARGET_H_