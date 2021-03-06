#pragma once

#include <map>
#include <vector>
#include <string>

#include "Game.h"
#include "State.h"

#include "Player.h"
#include "Bear.h"
#include "Sprite.h"
#include "Kid.h"

namespace bears
{
    class GameState : public State
    {
        public:
            GameState(Game* game);
            ~GameState();

            void Update(const unsigned int deltaMS, Input& input);
            void Draw(Graphics& graphics);

        private:
            Game* game;

            Player* player;
            std::vector<Bear*> bears;

            std::vector<Kid*> kids;

            Sprite* tileSprite;

            void gameOver(bool win);
    };
}
