#pragma once
#include "Container.h"

class Chest : public Container{
public:
    Chest(bool isLocked, const LockpickDifficulty difficulty);
    std::string name() const override;
    LockpickDifficulty lockDifficulty() override;
    bool isLocked() override;
};