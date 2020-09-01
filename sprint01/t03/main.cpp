#include "src/vampireRabbits.h"

int main() {
    std::list<Rabbit> rabbits;
    Amount amount;
    int children = 10;

    amount.male = 0;
    amount.female = 0;
    amount.vampires = 0;
    amount.male_n = 0;
    amount.female_n = 0;

    srand (time(NULL));
    while(rabbits.size() <= 1000) { //rabbits.size() != 0 &&
        for (int i = 0; i < children; i++) {
            randome_rabbit(rabbits);
        }
        main_step(rabbits, amount);
//        std::cout << "Males: "<< amount.male << std::endl;
//        std::cout << "Females: "<< amount.female << std::endl;
//        std::cout << "Vampire: "<< amount.vampires << std::endl;
//        std::cout << "Malesnnn: "<< amount.male_n << std::endl;
//        std::cout << "Femalesnnn: "<< amount.female_n << std::endl;
//        std::cout << "size: "<< rabbits.size() << std::endl;
        children = count_childrens(amount);
        print_rabbits(amount);
        if (rabbits.size() == 0)
            break;
        sleep(1);
    }
}
