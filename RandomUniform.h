//
// Created by Michin on 21.06.2022.
//

#ifndef PROJEKT_RANDOMUNIFORM_H
#define PROJEKT_RANDOMUNIFORM_H

#include <random>
#include "RandomWord.h"

class RandomUniform : public RandomWord{
public:
    RandomUniform() = default;
    RandomUniform(Dictionary* d, Counter* c);
    void generateWord() override;
};


#endif //PROJEKT_RANDOMUNIFORM_H
