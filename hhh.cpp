#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream> // Include for ostringstream
using namespace std;

class Device {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual string getStatus() const = 0;
    virtual string getType() const = 0;
};

class Light : public Device {
private:
    bool isOn;
    int brightness; // 0-100

public:
    Light() : isOn(false), brightness(0) {}

    void turnOn() override {
        isOn = true;
        brightness = 100; // Default brightness when turned on
    }

    void turnOff() override {
        isOn = false;
        brightness = 0; // Reset brightness
    }

    void setBrightness(int level) {
        if (isOn && level >= 0 && level <= 100) {
            brightness = level;
        }
    }

    string getStatus() const override {
        return "Light is " + string(isOn ? "ON" : "OFF") + ", Brightness: " + to_string(brightness);
    }

    string getType() const override {
        return "Light";
    }
};

class Thermostat : public Device {
private:
    bool isOn;
    int temperature; // in Celsius

public:
    Thermostat() : isOn(false), temperature(20) {}

    void turnOn() override {
        isOn = true;
    }

    void turnOff() override {
        isOn = false;
    }

    void setTemperature(int temp) {
        if (isOn && temp >= 15 && temp <= 30) {
            temperature = temp;
        }
    }

    string getStatus() const override {
        return "Thermostat is " + string(isOn ? "ON" : "OFF") + ", Temperature: " + to_string(temperature);
    }

    string getType() const override {
        return "Thermostat";
    }
};

class SecurityCamera : public Device {
private:
    bool isOn;

public:
    SecurityCamera() : isOn(false) {}

    void turnOn() override {
        isOn = true;
    }

    void turnOff() override {
        isOn = false;
    }

    string getStatus() const override {
        return "Security Camera is " + string(isOn ? "ON" : "OFF");
    }

    string getType() const override {
        return "Security Camera";
    }
};

class SmartHome {
private:
    map<string, Device*> devices;
    vector<string> log;

    void logAction(const string& action) {
        time_t now = time(nullptr);
        ostringstream oss; // Create an ostringstream for formatting
        oss << put_time(localtime(&now), "%Y-%m-%d %H:%M:%S");
        string timeStamp = oss.str(); // Convert to string
        log.push_back(timeStamp + ": " + action);
    }

public:
    SmartHome() {
        devices["light"] = new Light();
        devices["thermostat"] = new Thermostat();
        devices["camera"] = new SecurityCamera();
    }

    ~SmartHome() {
        for (auto& pair : devices) {
            delete pair.second;
        }
    }

    void turnOnDevice(const string& deviceName) {
        if (devices.find(deviceName) != devices.end()) {
            devices[deviceName]->turnOn();
            logAction(deviceName + " turned ON.");
        } else {
            cout << "Invalid device name." << endl;
        }
    }

    void turnOffDevice(const string& deviceName) {
        if (devices.find(deviceName) != devices.end()) {
            devices[deviceName]->turnOff();
            logAction(deviceName + " turned OFF.");
        } else {
            cout << "Invalid device name." << endl;
        }
    }

    void setDeviceBrightness(const string& deviceName, int brightness) {
        if (deviceName == "light" && devices[deviceName]->getStatus().find("ON") != string::npos) {
            static_cast<Light*>(devices[deviceName])->setBrightness(brightness);
            logAction("Set brightness of light to " + to_string(brightness) + ".");
        } else {
            cout << "Invalid action or device is OFF." << endl;
        }
    }

    void setDeviceTemperature(const string& deviceName, int temperature) {
        if (deviceName == "thermostat" && devices[deviceName]->getStatus().find("ON") != string::npos) {
            static_cast<Thermostat*>(devices[deviceName])->setTemperature(temperature);
            logAction("Set temperature of thermostat to " + to_string(temperature) + ".");
        } else {
            cout << "Invalid action or device is OFF." << endl;
        }
    }

    void showStatus() const {
        for (const auto& pair : devices) {
            cout << pair.second->getStatus() << endl;
        }
    }

    void showLog() const {
        cout << "Action Log:" << endl;
        for (const auto& entry : log) {
            cout << entry << endl;
        }
    }
};

int main() {
    SmartHome home;
    string command;

    cout << "Welcome to the Smart Home Automation System!" << endl;

    while (true) {
        cout << "\nEnter command (on, off, set_brightness, set_temperature, status, log, exit): ";
        cin >> command;

        if (command == "exit") {
            break;
        } else if (command == "on" || command == "off") {
            string deviceName;
            cout << "Enter device name (light, thermostat, camera): ";
            cin >> deviceName;
            if (command == "on") {
                home.turnOnDevice(deviceName);
            } else {
                home.turnOffDevice(deviceName);
            }
        } else if (command == "set_brightness") {
            string deviceName;
            int brightness;
            cout << "Enter device name (light): ";
            cin >> deviceName;
            cout << "Enter brightness level (0-100): ";
            cin >> brightness;
            home.setDeviceBrightness(deviceName, brightness);
        } else if (command == "set_temperature") {
            string deviceName;
            int temperature;
            cout << "Enter device name (thermostat): ";
            cin >> deviceName;
            cout << "Enter temperature (15-30): ";
            cin >> temperature;
            home.setDeviceTemperature(deviceName, temperature);
        } else if (command == "status") {
            home.showStatus();
        } else if (command == "log") {
            home.showLog();
        } else {
            cout << "Invalid command." << endl;
        }
    }

    return 0;
}
