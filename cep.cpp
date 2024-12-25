#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <ctime>
#include <iomanip>

using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
void printLogo() {
    system("COLOR A6");
    cout << CYAN;
    cout << R"(
        -------------------------------------
               SMART HOME AUTOMATION
        -------------------------------------
    )" << RESET << endl;
    system("COLOR F0");
}

void printMenu() {
    cout << CYAN << "\n--- Smart Home Automation Menu ---" << RESET << endl;
    cout << GREEN
         << "1. Turn ON Device\n"
         << "2. Turn OFF Device\n"
         << "3. Adjust Device Settings\n"
         << "4. Show Device Status\n"
         << "5. Show Logs\n"
         << "6. Exit\n" << RESET;
    cout << "Enter your choice: ";
}

void printDivider() {
    cout << CYAN << "-------------------------------------" << RESET << endl;
}

class Device {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual string getStatus() const = 0;
    virtual string getType() const = 0;
    virtual ~Device() = default;
};

class Light : public Device {
private:
    bool isOn = false;
    int brightness = 0;

public:
    void turnOn() override { isOn = true; brightness = 100; }
    void turnOff() override { isOn = false; brightness = 0; }

    void setBrightness(int level) {
        if (isOn && level >= 0 && level <= 100) brightness = level;
    }

    string getStatus() const override {
        return "Light - " + string(isOn ? GREEN "ON" : RED "OFF") + RESET +
               ", Brightness: " + to_string(brightness);
    }

    string getType() const override { return "Light"; }
};

class Thermostat : public Device {
private:
    bool isOn = false;
    int temperature = 20;

public:
    void turnOn() override { isOn = true; }
    void turnOff() override { isOn = false; }

    void setTemperature(int temp) {
        if (isOn && temp >= 15 && temp <= 30) temperature = temp;
    }

    string getStatus() const override {
        return "Thermostat - " + string(isOn ? GREEN "ON" : RED "OFF") + RESET +
               ", Temperature: " + to_string(temperature) + "°C";
    }

    string getType() const override { return "Thermostat"; }
};

class SecurityCamera : public Device {
private:
    bool isOn = false;

public:
    void turnOn() override { isOn = true; }
    void turnOff() override { isOn = false; }

    string getStatus() const override {
        return "Security Camera - " + string(isOn ? GREEN "ON" : RED "OFF") + RESET;
    }

    string getType() const override { return "Security Camera"; }
};

class SmartHome {
private:
    vector<unique_ptr<Device>> devices;
    vector<string> log;

    void logAction(const string& action) {
        time_t now = time(nullptr);
        stringstream ss;
        ss << put_time(localtime(&now), "%Y-%m-%d %H:%M:%S") << ": " << action;
        log.push_back(ss.str());
    }

public:
    SmartHome() {
        devices.emplace_back(make_unique<Light>());
        devices.emplace_back(make_unique<Thermostat>());
        devices.emplace_back(make_unique<SecurityCamera>());
    }

    void turnOnDevice(const string& type) {
        for (auto& device : devices) {
            if (device->getType() == type) {
                device->turnOn();
                logAction(type + " turned ON.");
                cout << GREEN << type << " is now ON." << RESET << endl;
                return;
            }
        }
        cout << RED << "Device not found!" << RESET << endl;
    }

    void turnOffDevice(const string& type) {
        for (auto& device : devices) {
            if (device->getType() == type) {
                device->turnOff();
                logAction(type + " turned OFF.");
                cout << RED << type << " is now OFF." << RESET << endl;
                return;
            }
        }
        cout << RED << "Device not found!" << RESET << endl;
    }

    void adjustDevice(const string& type, int value) {
        for (auto& device : devices) {
            if (type == "Light" && device->getType() == "Light") {
                dynamic_cast<Light&>(*device).setBrightness(value);
                logAction("Set Light brightness to " + to_string(value) + ".");
                cout << GREEN << "Light brightness set to " << value << "." << RESET << endl;
                return;
            } else if (type == "Thermostat" && device->getType() == "Thermostat") {
                dynamic_cast<Thermostat&>(*device).setTemperature(value);
                logAction("Set Thermostat temperature to " + to_string(value) + "°C.");
                cout << GREEN << "Thermostat temperature set to " << value << "°C." << RESET << endl;
                return;
            }
        }
        cout << RED << "Adjustment not supported or device not found!" << RESET << endl;
    }

    void showStatus() const {
        printDivider();
        for (const auto& device : devices) {
            cout << device->getStatus() << endl;
        }
        printDivider();
    }

    void showLog() const {
        cout << YELLOW << "--- Action Log ---" << RESET << endl;
        for (const auto& entry : log) {
            cout << entry << endl;
        }
    }
};

// Main Function
int main() {
    SmartHome home;
    int choice;
    string type;
    int value;

    printLogo();

    do {
        printMenu();
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter device type (Light, Thermostat, Security Camera): ";
            getline(cin, type);
            home.turnOnDevice(type);
            break;
        case 2:
            cout << "Enter device type (Light, Thermostat, Security Camera): ";
            getline(cin, type);
            home.turnOffDevice(type);
            break;
        case 3:
            cout << "Enter device type (Light, Thermostat): ";
            getline(cin, type);
            cout << "Enter value: ";
            cin >> value;
            home.adjustDevice(type, value);
            break;
        case 4:
            home.showStatus();
            break;
        case 5:
            home.showLog();
            break;
        case 6:
            cout << GREEN << "Exiting Smart Home System. Goodbye!" << RESET << endl;
            break;
        default:
            cout << RED << "Invalid choice. Please try again!" << RESET << endl;
            break;
        }
    } while (choice != 6);

    return 0;
}
