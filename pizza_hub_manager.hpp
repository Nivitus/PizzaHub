#ifndef PIZZAHUB_HPP
#define PIZZAHUB_HPP

#include <bits/stdc++.h>

struct Menu_Management {
    int cust_id;
    std::string pizzaType;
    int quantity;
    bool withExtraCheese;
    double price;
};

std::vector<std::string> getPizzaTypes();
void displayMenu(const std::string& pizzaType);

#endif //PIZZAHUB_HPP

