//
// Created by petrk on 18.09.2021.
//
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>


#ifndef ANIMATION_ANIMATION_H
#define ANIMATION_ANIMATION_H


class Animation {
    Animation();
protected:

    std::string country_of_origin;

    unsigned int for_idiots_percentage;

    unsigned int year_of_vipusk;

public:


   virtual bool is_cringe();

   virtual bool would_you_watch_it();

};












#endif //ANIMATION_ANIMATION_H
