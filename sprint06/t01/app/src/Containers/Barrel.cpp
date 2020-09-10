#include "Barrel.h"

Barrel::Barrel() : Container(false, LockpickDifficulty::None) {}

std::string Barrel::name() const {
    return "Barrel";
}

LockpickDifficulty Barrel::lockDifficulty() {
    return Container::lockDifficulty();
}

bool Barrel::isLocked() {
    return Container::isLocked();
}
