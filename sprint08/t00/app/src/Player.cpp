#include "Player.h"
#include "MoveManager.h"

void Player::movePlayer(MoveManager::Direction dir) {
    if (dir == MoveManager::Direction::Up)
        m_posY--;
    if (dir == MoveManager::Direction::Down)
        m_posY++;
    if (dir == MoveManager::Direction::Left)
        m_posX--;
    if (dir == MoveManager::Direction::Right)
        m_posX++;
}

char Player::getIdentifier() const {
    return 'P';
}

size_t Player::posX() const {
    return m_posX;
}
size_t Player::posY() const {
    return m_posY;
}

