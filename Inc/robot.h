//
// Created by yixin on 2023/10/2.
//

#ifndef HW1_ROBOT_H
#define HW1_ROBOT_H

/* field
--------
|  R   |     // red base
|      |
|      |
|      |
|      |
|  B   |    // blue base
--------
*/


struct RobotPos{
    float x;     // m   set down left as (0,0)
    float y;     // m
    float yaw;   // deg
    float pitch; // deg
};

RobotPos* moveRobot(RobotPos *pos, float dx, float dy);

struct RobotHP{
    int hp;
    int max_hp;
};

RobotHP* reduceHP(RobotHP *hp, int harm);
RobotHP* addHP(RobotHP *hp, int heal);

struct RobotPower{
    int chassis_power;
};

struct RobotShoot{
    int max_init_speed;
    int pill;
    int total_pill;
};

RobotShoot* shoot(RobotShoot *shoot, int init_speed);

struct RobotHeat{
    int heat;
    int cooling;
};

struct RobotExp{
    int level;
    int exp;
    int exp_value;
};

RobotExp* levelup(RobotExp *exp);

struct RobotBuff{
    int defence;    //%  0 ~ 100
    int damage;     //%  0 ~ 100
    int exp;
};

struct Robot{
    enum RobotType{infantry, hero, engineer, sentry};
};



#endif //HW1_ROBOT_H
