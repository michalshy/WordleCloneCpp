//
// Created by Michin on 21.06.2022.
//

#ifndef PROJEKT_RESULT_H
#define PROJEKT_RESULT_H
#include "Win.h"
#include "Lose.h"
#include "RandomWord.h"

class Result {
    RandomWord* keyWord = nullptr;
    Win* w = nullptr;
    Lose* l = nullptr;
public:
    Result() = default;
    Result(RandomWord*, Win*, Lose*);
    Win* get_win(){return w;}
    Lose* get_lose(){ return l; }
    void check_result();
    void check_life(LivesCounter*);
    ~Result() = default;
};


#endif //PROJEKT_RESULT_H
