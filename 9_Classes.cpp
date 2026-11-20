#include <iostream>
using namespace std;

class Car {
    private:
        string licensePlate;
        string ownerFName;
        string infoAccessPin;
    
    public: // Access specifier- public makes inner contents global. 
        int year;
        int gasEfficiency;
        int maxCapacity;
        double gasLevel;
        string brand;
        string model;
        string color;
        bool isOn;

        Car(int year, int gasEfficiency, int maxCapacity, double gasLevel, string brand, string model,
            string color, bool isOn, string ownerName, string licensePlate){
        
            year = year;
            gasEfficiency = gasEfficiency;
            maxCapacity = maxCapacity;
            gasLevel = gasLevel;
            brand = brand;
            model = model;
            color = color;
            isOn = isOn;

            ownerName = ownerName;
            licensePlate = licensePlate;
            
            for (int i = 0; i < 4; i++){
                infoAccessPin += to_string(rand() % 10);
            }

            cout << "Nice car!\n";
            cout << "You access private information, enter this PIN: " << infoAccessPin;
        }  // A constructor - automatically called when an object is created

        void on_off(){ // A method of the class
            if (isOn) {isOn = false;}
            else {isOn = true;}
        }

        int distanceCanDrive(){
            return gasLevel * gasEfficiency;
        }
        
        int calcGasRemainder(double distance){
            return (((maxCapacity * gasLevel) * gasEfficiency) - distance) / maxCapacity;
        }

        void drive(double distance){
            if (distance > distanceCanDrive()) {
                cout << "Too far - you don't have enough gas. Try splitting up travel into chunks.";
            }

            else if (0.1 > distanceCanDrive() - distance >= 0){
                cout << "You have arrived at your destination!\n";
                gasLevel = calcGasRemainder(distance);

                cout << "Low gas - you have only " << maxCapacity * gasLevel << " gallons remaining - " << distanceCanDrive() << " miles.";
            }

            else {cout << "You have arrived at your destination!";}

            cout << endl;
        }

        void gasRefill(){
            gasLevel = 1.0;
            cout << "Gas refilled.\n";
        }

        bool getPin(string userInput){
            if (userInput == infoAccessPin){
                return true;
            }
            return false;
        }

        void getLicensePlate(){ // Using get/set methods like these make sure private info stays safe.
            string userInput;

            cout << "Enter PIN: ";
            cin >> userInput;

            if (getPin(userInput)){
                cout << "Owner Name: " << ownerFName << endl;
                cout << "License Plate: " << licensePlate << endl;
            }
        }

        friend void displayGasStats(Car c); // friend functions can access values of the class, but are not actual members.
};
/*
    You can make a method of a class outside of the class:
     
        void MyClass::myMethod() {
            ...
        }
*/

void displayGasStats(Car c){
    cout << "Car gas tank max capacity: " << c.maxCapacity << " gallons" << endl;
    cout << "Car current gas level: " << c.gasLevel * 100 << "% - " << c.maxCapacity * c.gasLevel << " gallons" << endl;
    cout << "Car gas efficiency: " << c. gasEfficiency << " miles per gallon" << endl;
}

int main() {
    Car civic(2012, 10, 26, 0.95, "Honda", "Civic", "Gray", false, "Thangakumar", "AQD1705"); // calls constructor and sets values to args
    
    civic.drive(3.0); // calling a method
    displayGasStats(civic); // calling a friend function
    civic.getLicensePlate(); // calling a get method
    
}

/*
- Templates: They work with classes too:

    template <typename T>
    class secret{
        private:
            T value;

        public:
            string name;

            secret (T value){value = value};
    };
*/