#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int price;

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    // First car
    Car car1;
    car1.brand = "Honda";
    car1.model = "Civic";
    car1.price = 1200000;

    // Second car
    Car car2;
    car2.brand = "Maruti";
    car2.model = "Swift";
    car2.price = 700000;

    // Display both
    car1.display();
    car2.display();

    return 0;
}
