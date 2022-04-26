#pragma once
#include <iostream>
using namespace std;
#include <vector>

namespace coup{
    class Game {
        vector<string> playerNames;
    public:
        Game(){}
        string turn();
        vector<string> players();
        string winner();
    };
}
