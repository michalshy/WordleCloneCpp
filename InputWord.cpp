//
// Created by Michin on 24.04.2022.
//

#include "InputWord.h"

void InputWord::change_word()
{
    std::cout<<"Wprowdz poprawnie gramatycznie slowo!"<<std::endl;
    std::string newWord;
    std::cin>>newWord;
    set_word(newWord);
}
void InputWord::set_word(const std::string &ex)
{
    word = ex;
}