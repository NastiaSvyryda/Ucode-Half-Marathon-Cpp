#include "meadSong.h"

void mead_song(void) {
    for (int index = 99; index >= 0; index--) {
        if (index > 2) {
            std::cout << index << " bottles of mead on the wall, " << index << " bottles of mead." << std::endl;
            std::cout << TAKE_BOTTLE << index - 1 <<" bottles of mead on the wall.\n" << std::endl;
        }
        else if(index == 2) {
            std::cout << index << " bottles of mead on the wall, " << index << " bottles of mead." << std::endl;
            std::cout << TAKE_BOTTLE << index - 1 <<" bottle of mead on the wall.\n" << std::endl;
        }
        else if (index == 1) {
            std::cout << index << " bottle of mead on the wall, " << index << " bottle of mead." << std::endl;
            std::cout << ONE_BOTTLE << std::endl;
        }
        else
            std::cout << ZERO_BOTTLES << std::endl;
    }
}
