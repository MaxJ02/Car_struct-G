#ifndef CAR_H_
#define CAR_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum car_transmission 
{
    MANUELL,
    AUTOMAT
};

struct car
{
    char brand[20];
    char model[20];
    char color[20];
    unsigned int year_of_launch;
    enum car_transmission transmission;
};





#endif /* CAR_H_ */
