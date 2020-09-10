#include "Chest.h"

Chest::Chest(bool isLocked, const LockpickDifficulty difficulty) : Container(isLocked, difficulty) {}

std::string Chest::name() const {
    return "Chest";
}

LockpickDifficulty Chest::lockDifficulty() {
    return Container::lockDifficulty();
}

bool Chest::isLocked() {
    return Container::isLocked();
}