//
// Created by Michin on 23.06.2022.
//

#include "WordsManager.h"

void WordsManager::Initialization()
{
    keyWord.set_pointer(dMan->get_dict());
    keyWord.set_Counter(dMan->get_counter());
    valid.set_counter(dMan->get_counter());
    valid.set_dict(dMan->get_dict());
    valid.set_input(&usersWord);
    checker.set_key(&keyWord);
    checker.set_user(&usersWord);
    checker.set_lifes(sMan->get_lifes());
}

WordsManager::WordsManager(DictionaryManager *_dMan, SessionManager *_sMan)
{
    dMan = _dMan;
    sMan = _sMan;
}
