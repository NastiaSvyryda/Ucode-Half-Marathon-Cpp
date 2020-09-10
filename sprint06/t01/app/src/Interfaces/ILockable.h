#pragma once
#include "Containers/LockpickDifficulty.h"

class ILockable {
    public:
        virtual LockpickDifficulty lockDifficulty() = 0;
        virtual bool isLocked() = 0;
};


