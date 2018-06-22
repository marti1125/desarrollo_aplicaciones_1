#include <iostream>
#include <string.h>
#include <algorithm>
#include <list>

using namespace std;

class Graph {

    int V;
    list<int> *adj;

public:

    Graph(int V) { this -> V = V; adj = new list<int>[V]; }

    ~Graph()     { delete [] adj;  }

    void addEdge(int u, int v) { adj[u].push_back(v); adj[v].push_back(u); }

    void rmvEdge(int u, int v);

    void printEulerTour();

    void printEulerUtil(int s);

    int DFSCount(int v, bool visited[]);

    bool isValidNextEdge(int u, int v);

};

void Graph::printEulerTour() {

    int u = 0;

    for (int i = 0; i < V; i++) {
        if (adj[i].size() & 1) {
            u = i;
            break;
        }
    }

    cout << endl;

}

void Graph::printEulerUtil(int u) {

    list<int>::iterator i;

    for (i = adj[u].begin(); i != adj[u].end(); ++i) {
        int v = *i;
        if (v != -1) {
            cout << u << "-" << v << " ";
            printEulerUtil(v);
        }
    }

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
