//
// Created by Michin on 23.06.2022.
//

#include "OutputManager.h"
OutputManager::OutputManager(Result *r, RandomWord *k, LivesCounter *l)
{
    result = r;
    keyword = k;
    lifes = l;
}
void OutputManager::Output()
{
    std::fstream f;
    operator<<(f);
}
void OutputManager::checkHistory()
{
    operator<<(std::cout);
}