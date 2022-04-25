#include <iostream>
#include <stdexcept>
#include "Player.hpp"
#include "Game.hpp"
#include "Assassin.hpp"

#ifndef _CONTESSA_HPP_
#define _CONTESSA_HPP_

namespace coup {
    class Contessa : public Player {
    private:
    public:
        Contessa(Game g,std::string name);
        void block(Assassin assassin);

    };
}
#endif 
