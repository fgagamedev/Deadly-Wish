#ifndef UTIL_H
#define UTIL_H

#define X_ADJUSTMENT 38.0
#define Y_ADJUSTMENT 20.0
#define BASE_X_ADJUSTMENT 16.0
#define BASE_Y_ADJUSTMENT 20.0

namespace util
{
    typedef enum { IDLE_STATE, MOVING_STATE, DEATH_STATE, LIGHT_ATTACK_STATE, HEAVY_ATTACK_STATE, SPECIAL_STATE,
        DEFENSE_STATE, NUMBER_OF_STATES} State;

    typedef enum { PLAYER_1, PLAYER_2, PLAYER_3, PLAYER_4
    } Players;

    typedef enum { BALLS_8, BALLS_7, BALLS_6, BALLS_5, BALLS_4, BALLS_3, BALLS_2, BALLS_1, DESTROYED
    } BaseStatus;

}

#endif