#include "pizza_hub_manager.hpp"
#include <bits/stdc++.h>

std::vector<std::string> getPizzaTypes() {
    return {
        "1. Margherita",
        "2. Pepperoni",
        "3. Hawaiian",
        "4. BBQ Chicken",
        "5. Supreme",
        "6. Meat Lovers",
        "7. Vegetarian",
        "8. Buffalo Chicken",
        "9. Four Cheese",
        "10.Mushroom",
        "11.Sausage",
        "12.Bacon",
        "13.Spinach and Feta",
        "14.White Pizza",
        "15.Seafood Pizza"
    };
}

void
displayMenu(const std::string& pizzaType) {
    std::cout<< pizzaType << std::endl;
}







