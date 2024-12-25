#include <iostream>
#include <string>
using namespace std;

class InptComaprator {
private:
    string prvousInput;
    string curentInput;

public:
    void takInpt() {
        if (!curentInput.empty()) {
            prvousInput = curentInput;
        }
        cout << "Enter your input: ";
        cin >> curentInput;
    }

    void cmparInputs() {
        if (prvousInput.empty()) {
            cout << "No prvious input to compare." << endl;
        } else if (curentInput == prvousInput) {
            cout << "The curent input is the same as the prvious input." << endl;
        } else {
            cout << "The curent input is diferent from the prvious input." << endl;
        }
    }

    void displyInpts() {
        cout << "Prvious Input: " << (prvousInput.empty() ? "None" : prvousInput) << endl;
        cout << "Curent Input: " << curentInput << endl;
    }
};

int main() {
    InptComaprator comparator;
    for (int i = 0; i < 3; i++) {
        comparator.takInpt();
        comparator.cmparInputs();
        comparator.displyInpts();
    }
    return 0;
}