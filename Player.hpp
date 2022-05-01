#include <iostream>
#include <stdexcept>
#include <string>

#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_


namespace coup {
    class Player {
    private:

    public:
        void foreign_aid();
      
        void income();

        void coup(Player player);
        virtual std::string role();
        Player();
        ~Player();

    };
};
#endif 
