#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;


class Graph {
    public:
    unordered_map<int, list<int> > adj;

    void insertEdge(int u, int v, bool isDirected) {
        adj[u].push_back(v);
        if(!isDirected) {
            adj[v].push_back(u);
        }
    }

    void printAdjacencyList() {
        for(auto i:adj) {
            cout << i.first << " -> ";
            for(auto j:i.second) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    

};