//
// Created by Michin on 21.06.2022.
//

#ifndef PROJEKT_VALIDATION_H
#define PROJEKT_VALIDATION_H
#include "Dictionary.h"
#include "InputWord.h"
#include "Counter.h"

class Validation {
    Dictionary * base = nullptr;
    InputWord * comp = nullptr;
    Counter* counter = nullptr;
public:
    Validation() = default;
    Validation(Dictionary*, InputWord*, Counter*);
    void set_dict(Dictionary* d);
    void set_input(InputWord* i);
    void set_counter(Counter* c);
    bool Validator();
    ~Validation() = default;
};


#endif //PROJEKT_VALIDATION_H
