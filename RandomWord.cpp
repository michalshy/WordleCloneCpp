//
// Created by Michin on 23.04.2022.
//

#include "RandomWord.h"

void RandomWord::set_Counter(Counter * p)
{
    counter = p;
}
void RandomWord::set_pointer(Dictionary* p)
{
    base = p;
}
void RandomWord::set_word(const std::string &ex)
{
    word = ex;
}
