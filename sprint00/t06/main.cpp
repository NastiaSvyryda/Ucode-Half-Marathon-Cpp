#include "meadSong.h"

static void validation(int argc) {
    if (argc != 1)
        exit(1);
}

int main(int argc, char **argv) {
    validation(argc);
    mead_song();
    return 0;
}
