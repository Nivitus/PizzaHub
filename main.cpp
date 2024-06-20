#include "pizza_hub_manager.hpp"
#include <bits/stdc++.h>

int main() {
    
    std::cout << "-----------------------------------------------------------" <<std::endl;
    std::cout << "------------------------- Welcome! to ------------------------" <<std::endl;
    std::cout << "-----------------------------------------------------------" <<std::endl;
    std::cout << "-------------------------- PizzaHub ------------------------" <<std::endl;   
    std::cout << "-----------------------------------------------------------" <<std::endl;
    char choice;
    do {
        std::cout<<"--------------------- Please select the options -----------" << std::endl;
        std::cout<<"--------------1. Select your Pizza ------------------------"  << std::endl;
        std::cout<< "-------------2. Payment Method  --------------------------" <<std::endl;
        std::cout<<"Enter your choice: ";
        std::cin>>choice;
        
        switch (choice) {
        case '1': {
            std::vector<std::string>pizzaTypes = getPizzaTypes();
            std::cout << "Select your Pizza:\n";
            for(const auto &type : pizzaTypes) {
                displayMenu(type);
            }
            break;
        }
        case '2': {
            std::cout << "Payment Method selected." << std::endl;
            break;
        }
        default: {
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }
    
    } while (true);

    return 0;
    
}