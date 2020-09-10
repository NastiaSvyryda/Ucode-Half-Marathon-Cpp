#include "Safe.h"

Safe::Safe(bool isLocked, const LockpickDifficulty difficulty) : Container(isLocked, difficulty) {}

std::string Safe::name() const {
    return "Safe";
}

LockpickDifficulty Safe::lockDifficulty() {
    return Container::lockDifficulty();
}

bool Safe::isLocked() {
    return Container::isLocked();
}