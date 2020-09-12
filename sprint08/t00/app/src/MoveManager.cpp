#include "MoveManager.h"
#include "Player.h"
#include "Map.h"
#include <iostream>

MoveManager::MoveManager(std::shared_ptr<Player>& player, std::shared_ptr<Map>& map)
: m_map(map), m_player(player) {}

void MoveManager::processInputAndMove(const std::string& inputStr) {
    try {
        if (inputStr == "u" && checkMove(Direction::Up))
            m_player->movePlayer(Direction::Up);
        else if (inputStr == "d" && checkMove(Direction::Down))
            m_player->movePlayer(Direction::Down);
        else if (inputStr == "l" && checkMove(Direction::Left))
            m_player->movePlayer(Direction::Left);
        else if (inputStr == "r" && checkMove(Direction::Right))
            m_player->movePlayer(Direction::Right);
        else if (inputStr == "e")
            exit(0);
        else
            std::cerr << "Invalid input" << std::endl;
    }
    catch(...) {
        std::cerr << "Invalid direction" << std::endl;
    }
}

bool MoveManager::checkMove(Direction dir) const {
    if (dir == Direction::Up && m_player->posY() == 0)
        throw std::exception();
    else if (dir == Direction::Down && m_player->posY() + 1 >= m_map->height())
        throw std::exception();
    else if (dir == Direction::Left && m_player->posX() == 0)
        throw std::exception();
    else if (dir == Direction::Right && m_player->posX() + 1 >= m_map->width())
        throw std::exception();
    return true;
}