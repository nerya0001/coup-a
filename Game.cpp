#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "Game.hpp"

namespace coup {
    Game::Game() {}

    std::string Game::turn() {return "";}

    std::vector<std::string> Game::players(){std::vector<std::string> baba; return baba;}

    std::string Game::winner(){return "";}
}