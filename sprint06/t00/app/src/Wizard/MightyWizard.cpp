//
// Created by Oleksandr Arnopolin on 9/8/20.
//

#include "MightyWizard.h"

MightyWizard::MightyWizard(std::string name)
    :AbstractWizard(name){}

FoodType MightyWizard::deductFoodType(FoodItem *item) {
    if (item == nullptr)
        return FoodType::Invalid;
    return item->getType();
}

void MightyWizard::checkFood(FoodItem* foodItem) {
    FoodType type = deductFoodType(foodItem);
    if (type == FoodType::Invalid)
        std::cout << "<unknown>" << ". Ugh, not again!" << std::endl;

    else if (type == FoodType::PoisonedFood || type == FoodType::ApplePie)
        std::cout << foodItem->getName() << ". Ugh, not again!" << std::endl;
    else
        std::cout << foodItem->getName() << ". Mmm, tasty!" << std::endl;
}
void MightyWizard::checkFood(FoodItem& foodItem) {
    FoodType type = deductFoodType(&foodItem);
    if (type == FoodType::Invalid)
        std::cout << "<unknown>" << ". Ugh, not again!" << std::endl;

    else if (type == FoodType::PoisonedFood || type == FoodType::ApplePie)
        std::cout << foodItem.getName() << ". Ugh, not again!" << std::endl;
    else
        std::cout << foodItem.getName() << ". Mmm, tasty!" << std::endl;
}