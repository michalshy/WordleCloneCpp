//
// Created by Michin on 23.06.2022.
//

#ifndef PROJEKT_OUTPUTMANAGER_H
#define PROJEKT_OUTPUTMANAGER_H
#include "DateManager.h"
#include "Result.h"
#include "RandomWord.h"
#include "LivesCounter.h"
#include <fstream>
class OutputManager {
    Result* result = nullptr;
    RandomWord* keyword = nullptr;
    LivesCounter* lifes = nullptr;
public:
    OutputManager() = default;
    OutputManager(Result* r, RandomWord* k, LivesCounter* l);
    void Output();
    void checkHistory();

    std::fstream& operator<< (std::fstream &f)
    {
        std::string line;
        std::string word = keyword->get_word();
        int lifesLeft = lifes->get_lifes();
        f.open("historia.txt",std::ios::out|std::ios::app);
        if(result->get_win()->getState())
        {
            line = "Wygrales";
        }
        else if(result->get_lose()->getState())
        {
            line = "Przegrales";
        }
        std::string date = DateManager::getDateString();
        f<<std::endl<<"Data: "<<date<<
                    "Rezultat: "<<line<<
                    ", slowem klucz bylo: "<<word<<
                    ", i zostalo ci: "<<lifesLeft<<
                    " szans"<<std::endl;
        return f;
    }
    std::ostream & operator << (std::ostream &s)
    {
        std::string line;
        std::fstream f;
        f.open("historia.txt");
        while(std::getline(f,line))
        {
            s<<line;
        }
        return s;
    }
    ~OutputManager() = default;
};


#endif //PROJEKT_OUTPUTMANAGER_H
