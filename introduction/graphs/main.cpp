#include <iostream>
#include "Graph.cpp"
using namespace std;

int main() {

    int n = 4;
    int m = 4;

    int uArr[] = {1,2,3,4};
    int vArr[] = {2,3,4,5};

    Graph* g = new Graph();

    for(int i=0;i<m;i++) {
        g->insertEdge(uArr[i], vArr[i], false);
    }

    g->printAdjacencyList();
      
    return 0;
}