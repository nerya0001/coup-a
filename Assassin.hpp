#include <iostream>
#include <stdexcept>
#include <string>
#include "Player.hpp"
#include "Game.hpp"


#ifndef _ASSASSIN_HPP_
#define _ASSASSIN_HPP_

namespace coup {
    class Assassin : public Player {
    private:
    public:
        Assassin(Game g, std::string name);
        std::string coins();

    };
}
#endif 
