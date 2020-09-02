#include "src/vampireRabbits.h"

int main() {
    std::list<Rabbit> rabbits;
    std::list<int> is_kus;
    Amount amount;
    int children = 10;

    amount.male = 0;
    amount.female = 0;
    amount.vampires = 0;
    amount.male_n = 0;
    amount.female_n = 0;
    amount.vampires_k = 0;

    srand (time(NULL));
    while(1) {
        for (int i = 0; i < children; i++)
            randome_rabbit(rabbits, amount);
        vamp_create(amount, rabbits);
        children = count_childrens(amount);
        main_step(rabbits, amount);
        if (rabbits.size() == 0 || rabbits.size() > 1000)
            break;
        print_rabbits(amount);
        sleep(1);
    }
}
