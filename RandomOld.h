//
// Created by Michin on 21.06.2022.
//

#ifndef PROJEKT_RANDOMOLD_H
#define PROJEKT_RANDOMOLD_H

#include "RandomWord.h"
#include <cstdlib>
#include <ctime>

class RandomOld : public RandomWord{
public:
    RandomOld() = default;
    RandomOld(Dictionary* d, Counter* c);
    void generateWord() override;
};


#endif //PROJEKT_RANDOMOLD_H
