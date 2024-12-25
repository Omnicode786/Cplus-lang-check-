#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Structure for Machine
struct Machine {
    int id;
    string name;
    string type;
    bool operationalStatus;
    bool maintenanceStatus;
};

// Function prototypes
void addMachine(vector<Machine>& machines);
void removeMachine(vector<Machine>& machines, int id);
void updateMachineStatus(vector<Machine>& machines, int id);
void viewMachines(const vector<Machine>& machines);
void saveToFile(const vector<Machine>& machines);
void loadFromFile(vector<Machine>& machines);
void displayMenu();

int main() {
    vector<Machine> machines;
    loadFromFile(machines);
    
    int choice, id;
    while (true) {
        displayMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                addMachine(machines);
                break;
            case 2:
                cout << "Enter Machine ID to remove: ";
                cin >> id;
                removeMachine(machines, id);
                break;
            case 3:
                cout << "Enter Machine ID to update: ";
                cin >> id;
                updateMachineStatus(machines, id);
                break;
            case 4:
                viewMachines(machines);
                break;
            case 5:
                saveToFile(machines);
                cout << "Data saved to file." << endl;
                break;
            case 6:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
    return 0;
}

// Function definitions

void addMachine(vector<Machine>& machines) {
    if (machines.size() >= 50) {
        cout << "Machine limit reached." << endl;
        return;
    }
    Machine newMachine;
    cout << "Enter Machine ID: ";
    cin >> newMachine.id;
    cin.ignore();
    cout << "Enter Machine Name: ";
    getline(cin, newMachine.name);
    cout << "Enter Machine Type (e.g., Conveyor, Lathe, Drill): ";
    getline(cin, newMachine.type);
    cout << "Is the machine operational? (1 for Yes, 0 for No): ";
    cin >> newMachine.operationalStatus;
    cout << "Does the machine require maintenance? (1 for Yes, 0 for No): ";
    cin >> newMachine.maintenanceStatus;
    
    machines.push_back(newMachine);
    cout << "Machine added successfully!" << endl;
}

void removeMachine(vector<Machine>& machines, int id) {
    auto it = find_if(machines.begin(), machines.end(), [id](const Machine& m) { return m.id == id; });
    if (it != machines.end()) {
        machines.erase(it);
        cout << "Machine removed successfully!" << endl;
    } else {
        cout << "Machine with ID " << id << " not found." << endl;
    }
}

void updateMachineStatus(vector<Machine>& machines, int id) {
    for (auto& m : machines) {
        if (m.id == id) {
            cout << "Enter new operational status (1 for RUNNING, 0 for NOT RUNNING): ";
            cin >> m.operationalStatus;
            cout << "Enter new maintenance status (1 for Yes, 0 for No): ";
            cin >> m.maintenanceStatus;
            cout << "Machine status updated!" << endl;
            return;
        }
    }
    cout << "Machine with ID " << id << " not found." << endl;
}

void viewMachines(const vector<Machine>& machines) {
    cout << "Machine List:" << endl;
    for (const auto& m : machines) {
        cout << "ID: " << m.id << ", Name: " << m.name 
             << ", Type: " << m.type 
             << ", Operational: " << (m.operationalStatus ? "RUNNING" : "NOT RUNNING")
             << ", Maintenance: " << (m.maintenanceStatus ? "Yes" : "No") << endl;
    }
}

void saveToFile(const vector<Machine>& machines) {
    ofstream outFile("machines.dat");
    if (outFile.is_open()) {
        for (const auto& m : machines) {
            outFile << m.id << " " << m.name << " " << m.type << " "
                    << m.operationalStatus << " " << m.maintenanceStatus << "\n";
        }
        outFile.close();
    } else {
        cout << "Error saving to file." << endl;
    }
}

void loadFromFile(vector<Machine>& machines) {
    ifstream inFile("machines.dat");
    if (inFile.is_open()) {
        Machine m;
        while (inFile >> m.id >> m.name >> m.type >> m.operationalStatus >> m.maintenanceStatus) {
            machines.push_back(m);
        }
        inFile.close();
    } else {
        cout << "No data file found. Starting with an empty list." << endl;
    }
}

void displayMenu() {
    cout << "\n--- Industrial Equipment Monitoring System ---\n";
    cout << "1. Add a new machine\n";
    cout << "2. Remove a machine\n";
    cout << "3. Update machine status\n";
    cout << "4. View all machines\n";
    cout << "5. Save data to file\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}
