//
// Created by Michin on 21.06.2022.
//

#include "RandomOld.h"
RandomOld::RandomOld(Dictionary *d, Counter *c)
{
    set_pointer(d);
    set_Counter(c);
}
void RandomOld::generateWord()
{
    Dictionary * pDict = this->get_pointer();
    Counter* q = this->getCounter();
    int dictSize = q->get_counter();
    srand(time(nullptr));
    int number = rand() % dictSize;
    std::string key = pDict->search_word(number);
    this->set_word(key);
}