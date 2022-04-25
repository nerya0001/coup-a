#include <iostream>
#include <stdexcept>
#include "Player.hpp"
#include "Game.hpp"
#include "Duke.hpp"

#ifndef _CAPTAIN_HPP_
#define _CAPTAIN_HPP_
namespace coup {
    class Captain : public Player {
    private:
    public:
        Captain(Game g,std::string name);
        void block(Duke d);
        void steal(Player roll);


    };
}

#endif 
