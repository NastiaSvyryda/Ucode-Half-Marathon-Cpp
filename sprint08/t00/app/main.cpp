#include <iostream>
#include <string>
#include "Player.h"
#include "Map.h"
#include "MoveManager.h"

static size_t validation(std::string arg) {
    size_t idx;
    size_t map = 0;

    map = std::stoi(arg, &idx);
    if (!(map >= 5 && map <= 20)) {
        throw 1;
    }
    if (arg[idx] != '\0') throw std::exception();
    return map;
}

int main(int argc, char** argv) {
    try {
        if (argc != 3) throw std::exception();
        std::string input;
        std::shared_ptr<Player>player(new Player);
        std::shared_ptr<Map>map(new Map(validation(std::string(argv[1])),
                                           validation(std::string(argv[1])), player));
        MoveManager move(player, map);
        while (1) {
            map->outputMap();
            std::cout << ":> ";
            std::getline(std::cin, input, '\n');
            if (!input.empty()) {
                move.processInputAndMove(input);
                input.clear();
            }
        }
    }
    catch (int a) {
        std::cerr << "Invalid map size" << std::endl;
        exit(1);
    }
    catch (...) {
        std::cerr << "usage: ./smartPointers [width] [height]"
                  << std::endl;
        exit(1);
    }
    return 0;
}