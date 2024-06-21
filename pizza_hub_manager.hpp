#ifndef PIZZAHUB_HPP
#define PIZZAHUB_HPP

#include <bits/stdc++.h>

struct CustomerStack {
    int customerId;
    std::string customerName;
    double customerContact;
};

struct MenuManagement {
    std::string pizzaType;
    int quantity;
    double price;
};

struct OrderPlacement {
    int orderId;
    bool isOrderPlaced;
    bool customizePizza;
    double totalCost;
};

std::map<std::string, double> getPizzaMenu();

void 
displayMenu(const std::string& pizzaType, double cost);

std::vector<int>getOrderId();

double
calculateCost(double totalCost);

bool customizePizza(bool extraCheesse, bool extraToppings);

#endif //PIZZAHUB_HPP

