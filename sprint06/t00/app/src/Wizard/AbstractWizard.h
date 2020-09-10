#ifndef MIGHTYWIZARD_ABSTRACTWIZARD_H
#define MIGHTYWIZARD_ABSTRACTWIZARD_H
#include <string>
#include "../Food/FoodItem.h"

class AbstractWizard {
    protected:
        AbstractWizard(const std::string& name);
        virtual FoodType deductFoodType(FoodItem *item) = 0;
    private:
        std::string m_name;
};


#endif //MIGHTYWIZARD_ABSTRACTWIZARD_H
