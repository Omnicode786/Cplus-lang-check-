#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>
#include <algorithm>
#include <windows.h>

using namespace std;

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
void printLogo() {
    system("COLOR A6");
    Sleep(1000);
    cout << CYAN;
    cout << R"(
            WELCOME
    )" << '\n';
    cout << RESET;
}

void setConsoleEncoding() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}

void printMachine() {
    system("COLOR F0"); 

    cout << "------------------------------------------------------------" << endl;
    cout << "                Industrial Equipment Monitoring System      " << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "  ||======================================================||" << endl;
    cout << "  ||                                                      ||" << endl;
    cout << "  ||                 INDUSTRIAL CONTROL PANEL             ||" << endl;
    cout << "  ||                                                      ||" << endl;
    cout << "  ||      |===========================================|   ||" << endl;
    cout << "  ||      |  Machine Name:                            |   ||" << endl;
    cout << "  ||      |  Status: RUNNING / STOPPED                |   ||" << endl;
    cout << "  ||      |  Maintenance Required: YES / NO           |   ||" << endl;
    cout << "  ||      |===========================================|   ||" << endl;
    cout << "  ||                                                      ||" << endl;
    cout << "  ||     |=====|   |=====|   |=====|   |=====|   |=====|  ||" << endl;
    cout << "  ||     | BTN |   | BTN |   | BTN |   | BTN |   | BTN |  ||" << endl;
    cout << "  ||     |=====|   |=====|   |=====|   |=====|   |=====|  ||" << endl;
    cout << "  ||                                                      ||" << endl;
    cout << "  ||     =============================================    ||" << endl;
    cout << "  ||     |                CONTROL KNOB               |    ||" << endl;
    cout << "  ||     |                                           |    ||" << endl;
    cout << "  ||     |     MACHINE MANAGEMENT SYSTEM IDEALLY US   |    ||" << endl;
    cout << "  ||     |                                           |    ||" << endl;
    cout << "  ||     =============================================    ||" << endl;
    cout << "  ||======================================================||" << endl;
    cout << "------------------------------------------------------------" << endl;
}


struct Machine {
    int id;
    string name;
    string type;
    bool operationalStatus; 
    bool maintenanceStatus;
};

class MachineManagementSystem {
private:
    Machine machines[50];
    int machineCount = 0;
    const int MAX_MACHINES = 50;

public:
    void loadMachinesFromFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << RED << "Error opening file for loading machines." << RESET << endl;
            system("COLOR C7"); 
            Sleep(800);
            return;
        }

        Machine machine;
        machineCount = 0;

        while (file >> machine.id && machineCount < MAX_MACHINES) {
            file.ignore();
            getline(file, machine.name);
            getline(file, machine.type);
            file >> machine.operationalStatus >> machine.maintenanceStatus;
            machines[machineCount++] = machine;
        }
        file.close();
    }

    void saveMachinesToFile(const string& filename) {
        ofstream file(filename);
        if (!file.is_open()) {
            cerr << RED << "Error opening file for saving machines." << RESET << endl;
            system("COLOR C7"); 
            Sleep(800);
            return;
        }

        for (int i = 0; i < machineCount; i++) {
            file << machines[i].id << "\n" << machines[i].name << "\n" << machines[i].type << "\n"
                 << machines[i].operationalStatus << "\n" << machines[i].maintenanceStatus << "\n";
        }
        file.close();
    }

    void addingMachine() {
        if (machineCount >= MAX_MACHINES) {
            cout << RED << "Cannot add more machines. Maximum limit reached." << RESET << endl;
            system("COLOR C7"); 
            Sleep(800);
            return;
        }

        Machine machine;
        cout << "Enter Machine ID: ";
        cin >> machine.id;
        cin.ignore();
        cout << "Enter Machine Name: ";
        getline(cin, machine.name);
        cout << "Enter Machine Type: ";
        getline(cin, machine.type);
        machine.operationalStatus = false; 
        machine.maintenanceStatus = false;

        machines[machineCount++] = machine;
        cout << GREEN << "Machine added successfully." << RESET << endl;
    }

    void removingMachine() {
        int id;
        cout << "Enter Machine ID to remove: ";
        cin >> id;

        for (int i = 0; i < machineCount; i++) {
            if (machines[i].id == id) {
               
                for (int j = i; j < machineCount - 1; j++) {
                    machines[j] = machines[j + 1];
                }
                machineCount--;
                cout << GREEN << "Machine removed successfully." << RESET << endl;
                return;
            }
        }
        cout << RED << "Machine with ID " << id << " not found." << RESET << endl;
        system("COLOR C7"); 
        Sleep(800);
    }

    void updateOperationalStatus() {
        int id;
        cout << "Enter Machine ID to update operational status: ";
        cin >> id;

        for (int i = 0; i < machineCount; i++) {
            if (machines[i].id == id) {
                int status;
                cout << "Enter new operational status (1 for RUNNING, 0 for NOT RUNNING): ";
                cin >> status;
                machines[i].operationalStatus = (status == 1);
                cout << GREEN << "Operational status updated successfully." << RESET << endl;
                return;
            }
        }
        cout << RED << "Machine with ID " << id << " not found." << RESET << endl;
        system("COLOR C7"); 
        Sleep(800);
    }

    void displayAllMachines() const {
        if (machineCount == 0) {
            cout << RED << "No machines available." << RESET << endl;
            system("COLOR C7"); 
            Sleep(800);
            return;
        }

        cout << "\n" << CYAN << "--- Machines List ---" << RESET << "\n";
        printMachine();
        for (int i = 0; i < machineCount; i++) {
            cout << "----------------------------------------\n";
            cout << "ID: " << machines[i].id << "\n"
                 << "Name: " << machines[i].name << "\n"
                 << "Type: " << machines[i].type << "\n"
                 << "Operational: " << (machines[i].operationalStatus ? GREEN "RUNNING" : RED "NOT RUNNING") << RESET << "\n"
                 << "Maintenance Required: " << (machines[i].maintenanceStatus ? YELLOW "Yes" : GREEN "No") << RESET << "\n";
            cout << "----------------------------------------\n";
        }
    }

    void searchMachine() const {
        int id;
        cout << "Enter Machine ID to search: ";
        cin >> id;

        for (int i = 0; i < machineCount; i++) {
            if (machines[i].id == id) {
                cout << "\n" << CYAN << "--- Machine Found ---" << RESET << "\n"
                     << "ID: " << machines[i].id << "\n"
                     << "Name: " << machines[i].name << "\n"
                     << "Type: " << machines[i].type << "\n"
                     << "Operational: " << (machines[i].operationalStatus ? GREEN "RUNNING" : RED "NOT RUNNING") << RESET << "\n"
                     << "Maintenance Required: " << (machines[i].maintenanceStatus ? YELLOW "Yes" : GREEN "No") << RESET << "\n";
                return;
            }
        }
        cout << RED << "Machine with ID " << id << " not found." << RESET << endl;
        system("COLOR C7"); 
        Sleep(800);
    }

    void generatingMaintenanceReport() const {
        cout << "\n" << CYAN << "--- Machines Requiring Maintenance ---" << RESET << "\n";
        bool found = false;
        for (int i = 0; i < machineCount; i++) {
            if (machines[i].maintenanceStatus) {
                cout << "ID: " << machines[i].id << ", Name: " << machines[i].name << ", Type: " << machines[i].type << endl;
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
                    addingMachine();
                    break;
                case 2:
                    removingMachine();
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
                    generatingMaintenanceReport();
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
                    system("COLOR C7"); 
                    Sleep(800);
                    break;
            }
        } while (choice != 9);
    }
};

int main() {
    system("color F0");
    MachineManagementSystem system;
    system.displayMenu();
    setConsoleEncoding();
    return 0;
}
