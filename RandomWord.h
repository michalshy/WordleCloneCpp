//
// Created by Michin on 23.04.2022.
//

#ifndef PROJEKT_RANDOMWORD_H
#define PROJEKT_RANDOMWORD_H
#include "Dictionary.h"
#include "Counter.h"
#include <string>
#include <iostream>

class RandomWord{
    Dictionary* base = nullptr;
    Counter* counter = nullptr;
    std::string word = " ";
public:
    Counter* getCounter(){ return counter; }
    void set_Counter(Counter*);
    Dictionary* get_pointer() { return base; }
    void set_pointer(Dictionary* p);
    std::string get_word(){ return word; }
    void set_word(const std::string &ex);
    virtual void generateWord() = 0;
    virtual ~RandomWord()=default;
};


#endif //PROJEKT_RANDOMWORD_H
