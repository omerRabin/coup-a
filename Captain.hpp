#pragma once
#include "Player.hpp"
#include <iostream>
using namespace std;

namespace coup{
    class Captain:public Player {

    public:
        Captain(){}
        using Player::Player;
        Captain(Game gameName, string playerName) : Player(gameName, playerName) {
        }
        void block(Player player); // can block only captain
        void steal(Player player);
    };
}
