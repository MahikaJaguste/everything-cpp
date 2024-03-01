#include <iostream>
#include "Car.cpp"
using namespace std;

int main() {
    Car c1(10, 'A');
    char modelName[7] = "Mod123";
    c1.setModel(modelName);
    cout << "C1 = ";
    c1.print(); 

    Car* c2 = new Car(c1);
    cout << "C2 = ";
    c2->print();

    cout << "Address stored inside c1.name = " << (void*)(c1.model) << endl;
    cout << "Address stored inside c2.name = " <<  (void*)(c2->model) << endl;

    char newModelName[7] = "Mod456";
    c1.setModel(newModelName);
    cout << "C1 = ";
    c1.print();
    cout << "C2 = ";
    c2->print();

    delete c2;

    cout << "PUC Lease time = " << Car::pucLeaseTime << endl;
    Car::random();
    return 0;
}