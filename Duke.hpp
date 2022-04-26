#pragma once
#include "Player.hpp"
#include <iostream>
using namespace std;
namespace coup{
    class Duke:public Player {

    public:
        Duke(){}
        using Player::Player;
        Duke(Game gameName, string playerName) : Player(gameName, playerName) {
        }
        void block(Player player);
        void tax();
    };
}
