//
// Created by Michin on 23.04.2022.
//
#include "Result.h"
#include "OutputManager.h"
#include "DictionaryManager.h"
#include "SessionManager.h"
#include "WordsManager.h"
#include "Game.h"
int main()
{
    DictionaryManager dManager;
    dManager.Initialize();
    SessionManager sManager;
    sManager.Initialization();
    WordsManager wManager(&dManager,&sManager);
    wManager.Initialization();
    Result result(wManager.get_keyword(), sManager.get_win(), sManager.get_lose());
    OutputManager output(&result,wManager.get_keyword(),sManager.get_lifes());
    Game game(&sManager, &wManager, &output, &dManager, &result);
    while(game.GameState())
    {
        //pregame loading
        game.preGame();
        //wchodzenie w gre
        while(game.midGameCondition())
        {
            game.midGame();
        }
        //post game komunikaty
        game.endGame();

    }
    system("PAUSE");
    return 0;
}
