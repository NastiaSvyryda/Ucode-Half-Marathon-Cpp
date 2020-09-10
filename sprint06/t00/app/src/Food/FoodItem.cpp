//
// Created by Oleksandr Arnopolin on 9/8/20.
//

#include "FoodItem.h"

FoodItem::FoodItem(): m_type(FoodType::Invalid){
    m_fruit_name = "<unknown>";
}

FoodItem::FoodItem(FoodType type) : m_type(type) {
    if (type == FoodType::ApplePie)
        m_fruit_name = "ApplePie";
    else if (type == FoodType::SweetRoll)
        m_fruit_name = "SweetRoll";
    else if (type == FoodType::PoisonedFood)
        m_fruit_name = "Poison";
    else if (type == FoodType::HoneyNut)
        m_fruit_name = "Honey nut";
    else if (type == FoodType::Invalid)
        m_fruit_name = "<unknown>";
}

FoodType FoodItem::getType() {
    return m_type;
}

std::string FoodItem::getName() {
    return m_fruit_name;
}