#include <iostream>
using namespace std;

class Hero {

    private:
    int health;

    public:
    char level;

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char l) {
        level = l;
    }

    void printLevel() {
        cout << "Level is = " << level << endl;
    }
};