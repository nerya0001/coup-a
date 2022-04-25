#include <iostream>
#include <stdexcept>
#include <string>

#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_


namespace coup {
    class Player {
    private:

    public:
        void income();
        virtual void foreign_aid();
        void coup(Player player);
        Player();
        ~Player();

    };
};
#endif 
