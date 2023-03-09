#include <iostream>
#include <string>

using namespace std;

// Takes input from std::cin and converts it to an integer
// Returns -1 if input is not an integer
int getIntInput() {
    string input;
    getline(cin, input);
    try {
        return stoi(input);
    } catch (exception e) {
        return -1;
    }
}

// Displays the plant selection menu
void selectPlant() {
    cout << "\n\n";
    string menuText = "\n"
        "Please select an option\n"
        "1 - Return to main menu\n"
        "2 - Print \"Plant!\"\n"
        "Selection: ";
    while (true) {
        cout << menuText;

        int choice = getIntInput();
        switch(choice) {
        case 1:
            cout << "\n\n";
            return;
        case 2:
            cout << "Plant!\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }
    }
}

// Displays the main options menu
void mainMenu() {
    string mainMenuText =
        "Please select an option\n"
        "1 - Select Plant\n"
        "2 - Quit\n"
        "Selection: ";
    while (true) {
        cout << mainMenuText;

        int choice = getIntInput();
        switch(choice) {
        case 1:
            selectPlant();
            break;
        case 2:
            cout << "\nGoodbye!\n";
            return;

        default:
            cout << "Invalid choice.\n";
        }
    }
}

int main(int argc, char *argv[])
{
    cout << "Project Team Green: Jack Margeson, MJ Schnee, Hunter Kniflley, and Nick Bryant\n";
    mainMenu();
    return EXIT_SUCCESS;
}