//
// Created by Michin on 21.06.2022.
//

#include "RandomDefault.h"
RandomDefault::RandomDefault(Dictionary *d, Counter *c)
{
    set_pointer(d);
    set_Counter(c);
}
void RandomDefault::generateWord()
{
    Dictionary* dict = this->get_pointer();
    Counter* q = this->getCounter();
    int size = q->get_counter();
    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_int_distribution<int> distribution(1, size);
    int dice_roll = distribution(generator);
    std::string randomWord = dict->search_word(dice_roll);
    set_word(randomWord);
}