#include <iostream>
#include <stdexcept>
#include "Player.hpp"
#include "Game.hpp"

#ifndef _AMBASSADOR_HPP_
#define _AMBASSADOR_HPP_

namespace coup {
    class Ambassador : public Player {
    private:
    public:
        Ambassador(Game g,std::string name);
        void transfer(Player player1,Player player2);


    };
}

#endif 
