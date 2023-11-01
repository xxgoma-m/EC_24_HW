//
// Created by yixin on 2023/10/2.
//

#include "../Inc/robot.h"

RobotPos* moveRobot(RobotPos *pos, float dx, float dy){
    pos->x = pos->x + dx;
    pos->y = pos->y + dy;
    return pos;
}

RobotHP* reduceHP(RobotHP *hp, int harm){
    if (hp->hp > harm){
        hp->hp = hp->hp - harm;
    } else{
        hp->hp = 0;
    }
    return hp;
}

RobotHP* addHP(RobotHP *hp, int heal){
    if (hp->hp + heal < hp->max_hp){
        hp->hp = hp->hp + heal;
    } else{
        hp->hp = hp->max_hp;
    }
    return hp;
}

RobotShoot* shoot(RobotShoot *shoot, int init_speed, RobotHP *hp){
    if (shoot->pill > 0){
        shoot->pill -= 1;
        if (init_speed > shoot->max_init_speed){
            reduceHP(hp, 1);
        }
    }
    return shoot;
}

RobotExp* levelup(RobotExp *exp){
    exp->level += 1;
    exp->exp = 0;
    return exp;
}