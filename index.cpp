#include <iostream>

void displayMenu() {
    std::cout << "Menu:\n";
    std::cout << "1. Option 1\n";
    std::cout << "2. Option 2\n";
    std::cout << "3. Option 3\n";
    std::cout << "4. Exit\n";
}

int main() {
    int choice = 0;

    do {
        displayMenu();

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "You selected Option 1.\n";
                break;
            case 2:
                std::cout << "You selected Option 2.\n";
                break;
            case 3:
                std::cout << "You selected Option 3.\n";
                break;
            case 4:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
