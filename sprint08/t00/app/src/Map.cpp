#include "Map.h"
#include "Player.h"
#include <iostream>

Map::Map(size_t width, size_t height, std::shared_ptr<Player>& player)
: m_width(width), m_height(height), m_player(player) {
    generateMap();
}

void Map::outputMap() const {
    for (auto y= 0ul; y < m_height; y++) {
        for (auto i = 0ul; i < m_width; i++) {
            if (i == m_player->posX() && y == m_player->posY())
                std::cout << m_player->getIdentifier();
            else
                std::cout << m_map[y+i];
            if (i + 1 != m_width)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}

size_t Map::width() const {
    return m_width;
}

size_t Map::height() const {
    return m_height;
}

void Map::generateMap() {
    double val = 0;
    m_map = std::make_unique<char[]>(m_height * m_width);

    srand(time(NULL));
    for (auto i = 0ul; i < m_height * m_width; i++) {
        val = (double) rand() / RAND_MAX;
        if (val < 0.32)   //  32% T
            m_map[i] = 'T';
        else if (val >= 0.32 && val < 0.48) //  16% @
            m_map[i] = '@';
        else //  52% .
            m_map[i] = '.';
    }
}

