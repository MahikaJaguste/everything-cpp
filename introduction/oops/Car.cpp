#include <iostream>
using namespace std;

class Car {

    public:
    int num;
    char level;
    char* model;
    static int pucLeaseTime;

    Car() {
        this->model = new char[100];
    }

    Car(int num, char level) {
        this->num = num;
        this->level = level;
        this->model = new char[100];
    }

    Car(Car &temp) {
        this->num = temp.num;
        this ->level = temp.level;
        char* tempModel = new char[strlen(temp.model) + 1];
        strcpy(tempModel, temp.model);
        this->model = tempModel;
    }

    void setModel(char model[]) {
        strcpy(this->model, model);
    }

    void setLevel(char l) {
        level = l;
    }

    void print() {
        cout << "[ Num: " << num << ", ";
        cout << "Level: " << level << ", ";
        cout << "Model: " << model << " ]" << endl;
    }

    ~Car() {
        cout << "Destructor called" << endl;
    }

    static void random() {
        cout << "Inside static function: " << pucLeaseTime << endl;
    }
};

int Car::pucLeaseTime = 5;