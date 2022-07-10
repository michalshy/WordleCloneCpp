cmake_minimum_required(VERSION 3.20)
project(projekt)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(projekt
        main.cpp
        RandomWord.cpp
        RandomWord.cpp
        InputWord.cpp
        InputWord.h
        List.cpp
        List.h
        ListElement.cpp
        ListElement.h
        Dictionary.h
        Dictionary.cpp
        LivesCounter.cpp
        LivesCounter.h
        LoadDictionary.cpp
        LoadDictionary.h
        RandomDefault.cpp
        RandomDefault.h
        RandomOld.cpp
        RandomOld.h
        RandomUniform.cpp
        RandomUniform.h
        GameState.cpp
        GameState.h
        SessionState.cpp
        SessionState.h
        Validation.cpp
        Validation.h
        Counter.cpp
        Counter.h
        Checker.cpp
        Checker.h
        Utilities.cpp
        Utilities.h
        Win.cpp
        Win.h
        Lose.cpp
        Lose.h
        Result.cpp
        Result.h
        OutputManager.cpp
        OutputManager.h
        DateManager.cpp
        DateManager.h DictionaryManager.cpp DictionaryManager.h SessionManager.cpp SessionManager.h WordsManager.cpp WordsManager.h Game.cpp Game.h)

