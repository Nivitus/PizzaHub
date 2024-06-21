#include "pizza_hub_manager.hpp"
#include <bits/stdc++.h>

int main() {
    
    std::cout << "-----------------------------------------------------------" <<std::endl;
    std::cout << "------------------------- Welcome! to ------------------------" <<std::endl;
    std::cout << "-----------------------------------------------------------" <<std::endl;
    std::cout << "-------------------------- PizzaHub ------------------------" <<std::endl;   
    std::cout << "-----------------------------------------------------------" <<std::endl;
    
    char choice;
    std::stack<MenuManagement> order;
    
    do {
        std::cout<<"--------------------- Please select the options -----------" << std::endl;
        std::cout<<"--------------1. Select your Pizza ------------------------"  << std::endl;
        std::cout<< "-------------2. Payment Method  --------------------------" <<std::endl;
        std::cout<<"--------------3. Exit -------------------------------------" <<std::endl;
        std::cout<<"Enter your choice: ";
        std::cin>>choice;
        
        switch (choice) {
        case '1': {
            std::map<std::string, double>pizzaMenu = getPizzaMenu();
            std::cout << "Select your Pizza:\n";
            for(const auto &type : pizzaMenu) {
                displayMenu(type.first, type.second);
            }
            std::string selectPizza;
            std::cout<<"------------- Select you Pizza ----------------- " << std::endl;
            std::cin>>selectPizza;

            auto it = pizzaMenu.find(selectPizza);
            if(it != pizzaMenu.end()) {
                int quantity;
                std::cout<<"How many Pizza you want? " << std::endl;
                std::cin>>quantity;
                bool extraCheese, extraToppings;
                std::cout<<"Do you want Extra Cheese? (Extra $2.00 will charge) (press 1 if you want or press 0)" << std::endl;
                std::cin>>extraCheese;
                std::cout<<"Do you want Extra Toppings? (Extra $3.00 will charge) (press 1 if you want or press 0)" << std::endl;
                std::cin>>extraToppings;

                bool customized = customizePizza(extraCheese, extraToppings);
                double price = it->second * quantity;
                if(customized) {
                    price += (extraCheese ? 2.00 : 0) + (extraToppings ? 3.00 : 0);
                }

                order.push({selectPizza, quantity, price});
                std::cout << selectPizza << " added to your order. Quantity: " << quantity << ". Price: $" << price << "\n";
            }
            else {
                std::cout<<"Pizza type not found. Please select from the list. \n";
            }
            break;
        }
        case '2': {
            double totalCost = 0.0;
            while(! order.empty()) {
                totalCost += order.top().price;
                order.pop();
            }
            std::cout << "Total cost of your order: $" << calculateCost(totalCost) << std::endl;
            break;
        }
        case '3': {
            std::cout<< "Exiting the menu. Thank you for visiting PizzaHub!" <<std::endl;
            return 0;
        }
        default: {
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }
    } while (true);

    return 0;
}
