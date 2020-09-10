#pragma once
#include "Container.h"

class Barrel : public Container{
    public:
        Barrel();
        std::string name() const override;
        LockpickDifficulty lockDifficulty() override;
        bool isLocked() override;
};

