//
// Created by Michin on 24.04.2022.
//

#ifndef PROJEKT_INPUTWORD_H
#define PROJEKT_INPUTWORD_H
#include <string>
#include <iostream>

class InputWord{
    std::string word = " ";
public:
    InputWord() = default;
    std::string get_word(){ return word; }
    void set_word(const std::string &ex);
    void change_word();
    ~InputWord()=default;
};


#endif //PROJEKT_INPUTWORD_H
