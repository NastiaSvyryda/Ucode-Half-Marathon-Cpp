#ifndef MIGHTYWIZARD_FOODITEM_H
#define MIGHTYWIZARD_FOODITEM_H
#include "FoodType.h"
#include <string>

class FoodItem {
    public:
        FoodItem();
        FoodItem(FoodType type);
        FoodType getType();
        std::string getName();
//        virtual ~FoodItem();
    private:
        std::string m_fruit_name;
        FoodType m_type;
};


#endif //MIGHTYWIZARD_FOODITEM_H
