//
// Created by jamal on 01/08/2024.
//

#ifndef TECHNION_234124_WARRIOR_H
#define TECHNION_234124_WARRIOR_H

#include <memory>

#include "Player.h"

class Warrior final : public Player
{
public:
    Warrior(std::unique_ptr<Strategy>&);

    void postCombat(bool battelWon) override;

    int getCombatPower() const override;
};


#endif //TECHNION_234124_WARRIOR_H
