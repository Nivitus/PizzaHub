#include "pizza_hub_manager.hpp"
#include <bits/stdc++.h>

std::map<std::string, double> getPizzaMenu() {
    return {
        {"Margherita", 10.99},
        {"Pepperoni", 12.99},
        {"Hawaiian", 13.99},
        {"BBQ Chicken", 14.99},
        {"Supreme", 15.99},
        {"Meat Lovers", 16.99},
        {"Vegetarian", 13.99},
        {"Buffalo Chicken", 14.99},
        {"Four Cheese", 13.99},
        {"Mushroom", 12.99},
        {"Sausage", 13.99},
        {"Bacon", 13.99},
        {"Spinach and Feta", 14.99},
        {"White Pizza", 13.99},
        {"Seafood Pizza", 17.99}
    };
}

void
displayMenu(const std::string& pizzaType, double cost) {
    std::cout << pizzaType << " - $" << cost << std::endl;
}

std::vector<int>getOrderId() {
    static int orderId = 0;
    return {orderId++};
}

double calculateCost(double totalCost) {
    return totalCost;
}

bool customizePizza(bool extraCheese, bool extraToppings) {
    return extraCheese || extraToppings;
}