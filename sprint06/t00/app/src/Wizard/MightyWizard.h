#ifndef MIGHTYWIZARD_MIGHTYWIZARD_H
#define MIGHTYWIZARD_MIGHTYWIZARD_H
#include "AbstractWizard.h"
#include <iostream>
#include <string>

class MightyWizard : public AbstractWizard {
    public:
        MightyWizard(std::string name);
        void checkFood(FoodItem* foodItem);
        void checkFood(FoodItem& foodItem);
private:
        FoodType deductFoodType(FoodItem *item) override ;
};


#endif //MIGHTYWIZARD_MIGHTYWIZARD_H
