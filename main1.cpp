/********************************
*ELET 2300 Summer 23
* Extra Credit
* <Your Name> <Your PSID>
*********************************/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// a function to determine the length of each word in the sentence and print the output
void printWordLengths() {
    const char sentence[] = "These classes are really, really easy!";
    const char delimiters[] = " ";
    char *token = strtok(const_cast<char *>(sentence), delimiters);

    cout << "Word Lengths:These classes are really, really easy!" << endl;
    while (token!=NULL){
        cout << "Word: " << token << ", Length: " << strlen(token) << endl;
        token = strtok(NULL, delimiters);
    }
}

// A function to print neighbors of letters between 'e' and 'j'
void printNeighbors(int count) {
    if (count <= 0) {
        cout << "Invalid count." << endl;
        return;
    }

    for (char letter = 'e'; letter <= 'j'; ++letter) {
        cout << "Letter: " << letter << endl;
        for (int i = 1; i <= count; ++i) {
            cout << static_cast<char>(letter - i) << " ";
        }
        cout << "[" << letter << "] ";
        for (int i = 1; i <= count; ++i) {
            cout << static_cast<char>(letter + i) << " ";
        }
        cout << endl;
    }
}

int main() {
    char choice;
    
    do {
        cout << "Menu:" << endl;
        cout << "  W - Print Word Lengths" << endl;
        cout << "  N - Print Neighbors" << endl;
        cout << "  Q - Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        choice = tolower(choice); // Convert to lowercase
        
        switch (choice) {
            case 'w':
                printWordLengths();
                break;
            case 'n': {
                int count;
                cout << "Enter the number of neighbors to print: ";
                cin >> count;
                printNeighbors(count);
                break;
            }
            case 'q':
                cout << "Exit the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        
    } while (choice != 'q');

    return 0;
}


