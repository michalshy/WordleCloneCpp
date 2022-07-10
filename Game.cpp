//
// Created by Michin on 24.06.2022.
//

#include "Game.h"

Game::Game(SessionManager *s, WordsManager *w, OutputManager *o, DictionaryManager *d, Result *r)
{
    sMan = s;
    wMan = w;
    oMan = o;
    dMan = d;
    result = r;
}

bool Game::GameState()
{
    return sMan->get_state()->getState();
}

void Game::preGame()
{
    sMan->get_win()->change_GameState(false);
    sMan->get_lose()->change_GameState(false);
    sMan->get_lifes()->restoreLifes();
    wMan->get_keyword()->generateWord();
}

bool Game::midGameCondition()
{
    if(sMan->get_lifes()->get_lifes()>0 && !sMan->get_win()->getState())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Game::midGame()
{
    wMan->get_valid()->Validator();
    wMan->get_checker()->check(sMan->get_win());
}

void Game::endGame()
{
    result->check_life(sMan->get_lifes());
    result->check_result();
    oMan->Output();
    dMan->get_list()->remove_element(wMan->get_keyword()->get_word());
    sMan->get_state()->changeState();
}
