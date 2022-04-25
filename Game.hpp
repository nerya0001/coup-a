#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

#ifndef _GAME_HPP_
#define _GAME_HPP_

namespace coup {
    class Game {
    private:
        std::vector<std::string> PlayersInGame;

        bool isGameActive();

    public:
        Game();
        std::string turn();
        std::vector<std::string> players();

        std::string winner();

    };
}
#endif 
