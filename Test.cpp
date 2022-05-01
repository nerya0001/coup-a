#include "doctest.h"
#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include <iostream>
#include <sstream>

using namespace coup;
using namespace std;


TEST_CASE ("hello") {

    SUBCASE("game 1"){
        coup::Game game_1{};
        Duke duke{game_1, "Moshe"};
        Assassin assassin{game_1, "Yossi"};
        Ambassador ambassador{game_1, "Meirav"};
        Captain captain{game_1, "Reut"};
        Contessa contessa{game_1, "Gilad"};

        
        CHECK_EQ(duke.role(), "Duke");
        CHECK_EQ(ambassador.role(), "Ambassador");
        CHECK_EQ(assassin.role(), "Assassin");
        CHECK_EQ(captain.role(), "Captain");
        CHECK_EQ(contessa.role(), "Contessa");
        

    
        SUBCASE("Testing the order of turns"){
            CHECK_NOTHROW(duke.foreign_aid());
            CHECK_NOTHROW(assassin.foreign_aid());
            CHECK_NOTHROW(ambassador.foreign_aid());
            CHECK_NOTHROW(captain.foreign_aid());
            CHECK_NOTHROW(contessa.foreign_aid());

            CHECK_THROWS(assassin.foreign_aid());
            CHECK_THROWS(ambassador.foreign_aid());
            CHECK_THROWS(captain.foreign_aid());
            CHECK_THROWS(contessa.foreign_aid());
        }
    }
    SUBCASE("game 2"){

        coup::Game game_2{};
        Ambassador ambassador{game_2, "Meirav"};
        Captain captain{game_2, "Reut"};
        Contessa contessa{game_2, "Gilad"};
        Duke duke{game_2, "Moshe"};
        Assassin assassin{game_2, "Yossi"};


        CHECK_NOTHROW(ambassador.income());
        CHECK_NOTHROW(captain.income());
        CHECK_NOTHROW(contessa.income());
        CHECK_NOTHROW(duke.income());
        CHECK_NOTHROW(assassin.income());

        CHECK_THROWS(captain.income());
        CHECK_THROWS(contessa.income());
        CHECK_THROWS(assassin.income());
        CHECK_THROWS(duke.income());
    }
    

}