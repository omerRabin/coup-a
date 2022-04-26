#pragma once
#include <iostream>
using namespace std;
#include "Player.hpp"

namespace coup{
    class Assassin : public Player {

    public:
        Assassin(){}
        using Player::Player;
        void coup(Player player) override;
        Assassin(Game gameName, string playerName) : Player(gameName, playerName) {
        }
    };
}
