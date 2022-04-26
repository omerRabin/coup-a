#pragma once
#include <iostream>
using namespace std;
#include "Game.hpp" // check if to return this include

namespace coup{
    class Player {

    public:
        Game myGame;
        string myName;
        Player(){}
        Player(Game gameName, string playerName){
            myGame = gameName;
            myName = playerName;
        }
        void income();
        void foreign_aid();
        virtual void coup(Player player);
        int coins();
        string role();
    };
}
