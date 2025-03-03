#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    
    void show() {
        cout << "Car Brand: " << brand << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.show();
    return 0;
}
    