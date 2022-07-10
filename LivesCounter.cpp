//
// Created by Michin on 16.06.2022.
//

#include "LivesCounter.h"
void LivesCounter::restoreLifes()
{
    lifes = 6;
}
void LivesCounter::minusLife()
{
    lifes--;
}
void LivesCounter::showLifes()
{
    std::cout<<"Zostało "<<lifes<<" szans!";
}