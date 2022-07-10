//
// Created by Michin on 21.06.2022.
//

#include "RandomUniform.h"
RandomUniform::RandomUniform(Dictionary *d, Counter *c)
{
    set_pointer(d);
    set_Counter(c);
}
void RandomUniform::generateWord()
{
    Dictionary* dict = this->get_pointer();
    Counter* q = this->getCounter();
    int size = q->get_counter();
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, size);
    int number = distrib(gen);
    std::string word = dict->search_word(number);
    this->set_word(word);
}