//
// Created by Michin on 24.06.2022.
//

#ifndef PROJEKT_GAME_H
#define PROJEKT_GAME_H
#include "SessionManager.h"
#include "WordsManager.h"
#include "OutputManager.h"
#include "DictionaryManager.h"
#include "Result.h"

class Game {
    SessionManager * sMan = nullptr;
    WordsManager * wMan = nullptr;
    OutputManager * oMan = nullptr;
    DictionaryManager * dMan = nullptr;
    Result * result = nullptr;
public:
    Game() = default;
    Game(SessionManager* s, WordsManager * w, OutputManager * o, DictionaryManager * d, Result * r);
    bool GameState();
    void preGame();
    bool midGameCondition();
    void midGame();
    void endGame();
};


#endif //PROJEKT_GAME_H
