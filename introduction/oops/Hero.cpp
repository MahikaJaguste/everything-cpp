#include <iostream>
using namespace std;

class Hero {

    private:
    int health;

    public:
    char level;

    Hero() {
        cout << "Constructor called" << endl;
    }

    Hero(int health) {
        this->health = health;
        // OR (*this).health = health;
    }

    Hero(Hero &temp) {
        this -> health = temp.health;
        this -> level = temp.level;
    }

    int getHealth() {
        cout << "this = " << this << endl;
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

    void print() {
        cout << "Health is = " << health << endl;
        cout << "Level is = " << level << endl;
    }
};