#include <iostream>
#include "Trie.cpp"
using namespace std;

int main() {

    Trie* t = new Trie();

    cout << "Is love present: " << t->search("love") << endl;

    cout << "Inserting love." << endl;
    t->insert("love");

    cout << "Is love present: " << t->search("love") << endl;

    cout << "Is lov present: " << t->search("lov") << endl;
    cout << "Inserting lov." << endl;
    t->insert("lov");
    cout << "Is lov present: " << t->search("lov") << endl;

    cout << "Is cat present: " << t->search("cat") << endl;
    cout << "Inserting cat." << endl;
    t->insert("cat");
    cout << "Is cat present: " << t->search("cat") << endl;

    cout << "Is car present: " << t->search("car") << endl;
    cout << "Inserting car." << endl;
    t->insert("car");
    cout << "Is car present: " << t->search("car") << endl;

    cout << "Is cart present: " << t->search("cart") << endl;
    cout << "Inserting cart." << endl;
    t->insert("cart");
    cout << "Is cart present: " << t->search("cart") << endl;
    
    return 0;
}