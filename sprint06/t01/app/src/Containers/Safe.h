#pragma once
#include "Container.h"

class Safe : public Container{
public:
    Safe(bool isLocked, const LockpickDifficulty difficulty);
    std::string name() const override;
    LockpickDifficulty lockDifficulty() override;
    bool isLocked() override;
};