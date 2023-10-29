#include <iostream>

using namespace std;

class Car {

    string colour;

public:

    Car(string colour) {
        this->colour = colour;
    }

    ~Car() {};

    void setColour(string colour) {
        this->colour = colour;
    }

    string getColour() {
        return colour;
    }


};

void changeColour(Car *car, string colour) {
    car->setColour(colour);
}

int main() {

    Car *car1 = new Car("red");

    Car car2 = *car1;
    Car *car3 = car1;

    cout << "car1: " + car1->getColour() + "\n";
    cout << "car2: " + car2.getColour() + "\n";
    cout << "car3: " + car3->getColour() + "\n\n";

    changeColour(car1, "blue");

    cout << "car1: " + car1->getColour() + "\n";
    cout << "car2: " + car2.getColour() + "\n";  
    cout << "car3: " + car3->getColour() + "\n\n";

    changeColour(&car2, "green");

    cout << "car1: " + car1->getColour() + "\n";
    cout << "car2: " + car2.getColour() + "\n";  
    cout << "car3: " + car3->getColour() + "\n\n";

    changeColour(car3, "yellow");

    cout << "car1: " + car1->getColour() + "\n";
    cout << "car2: " + car2.getColour() + "\n";  
    cout << "car3: " + car3->getColour() + "\n\n";
    
    return 0;
}
