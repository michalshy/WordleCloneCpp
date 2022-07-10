//
// Created by Michin on 21.06.2022.
//

#ifndef PROJEKT_COUNTER_H
#define PROJEKT_COUNTER_H


class Counter {
    int counter = 0;
public:
    //domyslny konstruktor bezargumentowy
    Counter() = default;
    //zwraca wartosc countera
    int get_counter(){ return counter; }

    void increase();
    void decrease();
    Counter operator++()
    {
        counter++;
        return *this;
    }
    Counter operator--()
    {
        counter--;
        return *this;
    }
    ~Counter() = default;
};


#endif //PROJEKT_COUNTER_H
