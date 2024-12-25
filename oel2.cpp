#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>
#include <algorithm>
#include <windows.h>

using namespace std;
// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

// ASCII Art Functions
void printLogo() {
    cout << CYAN;
    cout << R"(
    ___           _           _        _       _
   |_ | __   _| |   _ __| | _ _() __ _| |
    | || '_ \ / ` | | | / __| __| '_| |/ _` | |
    | || | | | (| | || \__ \ || |  | | (| | |
   ||| ||\,|\,|/\||  ||\,||
    )" << '\n';
    cout << RESET;
}

void printMachine() {
    cout << RED;
    cout << R"(
                  ___________            ____
                 /           \          |    |
   _____        /   ______    \     ___|    |___
  |     |      /   /      \    \   |    |    |    |
 |     |    /   /        \    \  |    |    |    |
|  \_/  |  /   /  ____    \    \ |    |    |    |
|/   \|/|  |    |    ||||||
   |   |  /        |    |    |          |    |
   |   | /     ___|||_        |    |
  / \_/ \     |               | \       |    |
 /||\    |    _______    |  \    __||_
|  _____  |   |   |       |   |   \  |          |
| |     | |   |   | START |   |    \ ||
| | === | |   |   |       |   |     \
| |  =  | |   |   |_|   |  (O) \   ___________
| | === | |   |               |       \ |           |
| || |   ||     :: \|  CONTROL  |
|_|                        :::: |   ROOM    |
                                  ::::::|_|  )" << '\n'<< '\n';
    cout << RESET;
}

struct Machine {
    int id;
    string name;
    string type;
    bool operationalStatus; // true for RUNNING, false for NOT RUNNING
    bool maintenanceStatus;  // true if maintenance is required
};

class MachineManagementSystem {
private:
    vector<Machine> machines;
    const int MAX_MACHINES = 50;

public:
    void loadMachinesFromFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << RED << "Error opening file for loading machines." << RESET << endl;
            return;
        }

        Machine machine;
        while (file >> machine.id) {
            file.ignore(); // Ignore the newline character
            getline(file, machine.name);
            getline(file, machine.type);
            file >> machine.operationalStatus >> machine.maintenanceStatus;
            machines.push_back(machine);
        }
        file.close();
    }

    void saveMachinesToFile(const string& filename) {
        ofstream file(filename);
        if (!file.is_open()) {
            cerr << RED << "Error opening file for saving machines." << RESET << endl;
            return;
        }

        for (const auto& machine : machines) {
            file << machine.id << "\n" << machine.name << "\n" << machine.type << "\n"
                 << machine.operationalStatus << "\n" << machine.maintenanceStatus << "\n";
        }
        file.close();
    }

    void addMachine() {
        if (machines.size() >= MAX_MACHINES) {
            cout << RED << "Cannot add more machines. Maximum limit reached." << RESET << endl;
            return;
        }

        Machine machine;
        cout << "Enter Machine ID: ";
        cin >> machine.id;
        cin.ignore(); // Ignore the newline character
        cout << "Enter Machine Name: ";
        getline(cin, machine.name);
        cout << "Enter Machine Type: ";
        getline(cin, machine.type);
        machine.operationalStatus = false; // Default to NOT RUNNING
        machine.maintenanceStatus = false;  // Default to no maintenance required

        machines.push_back(machine);
        cout << GREEN << "Machine added successfully." << RESET << endl;
    }

    void removeMachine() {
        int id;
        cout << "Enter Machine ID to remove: ";
        cin >> id;

        for (auto it = machines.begin(); it != machines.end(); ++it) {
            if (it->id == id) {
                machines.erase(it);
                cout << GREEN << "Machine removed successfully." << RESET << endl;
                return;
            }
        }
        cout << RED << "Machine with ID " << id << " not found." << RESET << endl;
    }

    void updateOperationalStatus() {
        int id;
        cout << "Enter Machine ID to update operational status: ";
        cin >> id;

        for (auto& machine : machines) {
            if (machine.id == id) {
                int status;
                               cout << "Enter new operational status (1 for RUNNING, 0 for NOT RUNNING): ";
                cin >> status;
                machine.operationalStatus = (status == 1);
                cout << GREEN << "Operational status updated successfully." << RESET << endl;
                return;
            }
        }
        cout << RED << "Machine with ID " << id << " not found." << RESET << endl;
    }

    void displayAllMachines() const {
        if (machines.empty()) {
            cout << RED << "No machines available." << RESET << endl;
            return;
        }

        cout << "\n" << CYAN << "--- Machines List ---" << RESET << "\n";
        printMachine();
        for (const auto& machine : machines) {
            cout << "----------------------------------------\n";
            cout << "ID: " << machine.id << "\n"
                      << "Name: " << machine.name << "\n"
                      << "Type: " << machine.type << "\n"
                      << "Operational: " << (machine.operationalStatus ? GREEN "RUNNING" : RED "NOT RUNNING") << RESET << "\n"
                      << "Maintenance Required: " << (machine.maintenanceStatus ? YELLOW "Yes" : GREEN "No") << RESET << "\n";
            cout << "----------------------------------------\n";
        }
    }

    void searchMachine() const {
        int id;
        cout << "Enter Machine ID to search: ";
        cin >> id;

        for (const auto& machine : machines) {
            if (machine.id == id) {
                cout << "\n" << CYAN << "--- Machine Found ---" << RESET << "\n"
                          << "ID: " << machine.id << "\n"
                          << "Name: " << machine.name << "\n"
                          << "Type: " << machine.type << "\n"
                          << "Operational: " << (machine.operationalStatus ? GREEN "RUNNING" : RED "NOT RUNNING") << RESET << "\n"
                          << "Maintenance Required: " << (machine.maintenanceStatus ? YELLOW "Yes" : GREEN "No") << RESET << "\n";
                return;
            }
        }
        cout << RED << "Machine with ID " << id << " not found." << RESET << endl;
    }

    void generateMaintenanceReport() const {
        cout << "\n" << CYAN << "--- Machines Requiring Maintenance ---" << RESET << "\n";
        bool found = false;
        for (const auto& machine : machines) {
            if (machine.maintenanceStatus) {
                cout << "ID: " << machine.id << ", Name: " << machine.name << ", Type: " << machine.type << endl;
                found = true;
            }
        }
        if (!found) {
            cout << GREEN << "No machines require maintenance." << RESET << endl;
        }
    }

    void displayMenu() {
        int choice;
        do {
            printLogo();
            cout << "\n" << MAGENTA << "--- Industrial Equipment Monitoring System ---" << RESET << "\n";
            printMachine();
            cout << "1. Add Machine\n";
            cout << "2. Remove Machine\n";
            cout << "3. Update Operational Status\n";
            cout << "4. Display All Machines\n";
            cout << "5. Search Machine\n";
            cout << "6. Generate Maintenance Report\n";
            cout << "7. Save Machines to File\n";
            cout << "8. Load Machines from File\n";
            cout << "9. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    addMachine();
                    break;
                case 2:
                    removeMachine();
                    break;
                case 3:
                    updateOperationalStatus();
                    break;
                case 4:
                    displayAllMachines();
                    break;
                case 5:
                    searchMachine();
                    break;
                case 6:
                    generateMaintenanceReport();
                    break;
                case 7: {
                    string filename;
                    cout << "Enter filename to save machines: ";
                    cin >> filename;
                    saveMachinesToFile(filename);
                    break;
                }
                case 8: {
                    string filename;
                    cout << "Enter filename to load machines: ";
                    cin >> filename;
                    loadMachinesFromFile(filename);
                    break;
                }
                case 9:
                    cout << GREEN << "Exiting the program. Goodbye!" << RESET << endl;
                    break;
                default:
                    cout << RED << "Invalid choice. Please try again." << RESET << endl;
                    break;
            }
        } while (choice != 9);
    }
};

int main() {
    MachineManagementSystem system;
    system.displayMenu();
    return 0;
}