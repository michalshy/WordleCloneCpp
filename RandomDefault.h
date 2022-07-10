//
// Created by Michin on 21.06.2022.
//

#ifndef PROJEKT_RANDOMDEFAULT_H
#define PROJEKT_RANDOMDEFAULT_H

#include "RandomWord.h"
#include <random>

class RandomDefault : public RandomWord{
public:
    RandomDefault() = default;
    RandomDefault(Dictionary* d, Counter* c);
    void generateWord() override;
};


#endif //PROJEKT_RANDOMDEFAULT_H
