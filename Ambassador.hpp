#pragma once
#include <iostream>
using namespace std;
#include "Player.hpp"
namespace coup{
    class Ambassador : public Player {

    public:
        Ambassador(){}
        // using Player::Player;
        Ambassador(Game gameName, string playerName) : Player(gameName, playerName) {
        }
        void transfer(Player player1, Player player2);
        void block(Player player); // can block only Captain
    };
}
