//
// Created by Michin on 23.06.2022.
//

#include "DateManager.h"

std::string DateManager::getDateString()
{
    auto start = std::chrono::system_clock::now();
    auto legacyStart = std::chrono::system_clock::to_time_t(start);
    return std::ctime(&legacyStart);
}