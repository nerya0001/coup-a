#include <iostream>
#include <stdexcept>
#include "Player.hpp"
#include "Game.hpp"

#ifndef _DUKE_HPP_
#define _DUKE_HPP_

namespace coup {
    class Duke : public Player {
    private:
    public:
        Duke(Game g,std::string name);
        void tax();
        void block(Player player);
        std::string coins();
    };
}
#endif 
