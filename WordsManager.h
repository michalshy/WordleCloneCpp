//
// Created by Michin on 23.06.2022.
//

#ifndef PROJEKT_WORDSMANAGER_H
#define PROJEKT_WORDSMANAGER_H
#include "Checker.h"
#include "Validation.h"
#include "RandomOld.h"
#include "RandomDefault.h"
#include "RandomUniform.h"
#include "InputWord.h"
#include "SessionManager.h"
#include "DictionaryManager.h"

class WordsManager {
    InputWord usersWord;
    RandomUniform keyWord;
    //RandomDefault keyWord;
    //RandomOld keyWord;
    Validation valid;
    Checker checker;
    DictionaryManager * dMan = nullptr;
    SessionManager * sMan = nullptr;
public:
    WordsManager() = default;
    WordsManager(DictionaryManager* _dMan, SessionManager * _sMan);
    void Initialization();
    InputWord * get_input(){ return &usersWord; }
    RandomUniform* get_keyword(){ return &keyWord; }
    Validation * get_valid(){ return &valid; }
    Checker * get_checker(){ return &checker; }
    ~WordsManager() = default;
};


#endif //PROJEKT_WORDSMANAGER_H
