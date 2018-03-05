#include <iostream>
#include <fstream>
#include <ctime>
#include "graph.h"

std::ifstream fin("test.in");
std::ofstream fout("test.out");

class Node {
    int _index, _costTo;

public:
    Node() : _index(0), _costTo(0) {}

    Node(int index, int costTo) {
        _index = index;
        _costTo = costTo;
    }

    Node(const Node &other)  {
        _index =  other._index;
        _costTo = other._costTo;
    }

    inline int getIndex() const {
        return _index;
    }

    inline int getCost() const {
        return _costTo;
    }

    Node &operator = (const Node &other) {
        _index = other._index;
        _costTo = other._costTo;

        return *this;
    }

    bool operator == (const Node &other) const {
        return _index == other._index and _costTo == other._costTo;
    }

    bool operator != (const Node &other) const {
        return !(*this == other);
    }

    bool operator < (const Node &other) const {
        return _index < other._index;
    }
};

int main() {
    Graph<Node> g;
    Graph<Node> g2;

//    //Read + write (console)
//    std::cin >> g;
//    std::cout << "Print read graph to console:\n" << g;

    //Read + write (file)
    fin >> g;
    fout << "Print read graph to file:\n" << g;

    //Product of 2 graphs
    fin >> g2;
    fout << "Print product of two graphs:\n" << g * g2;

    //Print distance matrix and path between 2 nodes
    g.royFloyd();
    g.printMinDistMatrix(fout);
    g.printShortestPath(fout, 4, 5);
    return 0;
}