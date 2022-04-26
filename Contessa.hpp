#pragma once
#include "Player.hpp"
#include <iostream>
using namespace std;

namespace coup{
    class Contessa:public Player {

    public:
        Contessa(){}
        using Player::Player;
        Contessa(Game gameName, string playerName) : Player(gameName, playerName) {
        }
        void block(Player player); // can block only Assassin
    };
}
