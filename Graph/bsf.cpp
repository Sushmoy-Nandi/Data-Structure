#include<bits/stdc++.h>
using namespace std;
#define MAX 5
class Vertex {
public:
    char label;
    bool visited;

    Vertex(char label) : label(label), visited(false) {}
};

class Graph {
private:
    vector<Vertex*> vertices;
    vector<vector<int>> adjMatrix;
    int vertexCount;

public:
    Graph(int maxVertices) : vertexCount(0) {
        adjMatrix.resize(maxVertices, vector<int>(maxVertices, 0));
    }

    ~Graph() {
        for (auto vertex : vertices) {
            delete vertex;
        }
    }

    void addVertex(char label) {
        vertices.push_back(new Vertex(label));
        vertexCount++;
    }

    void addEdge(int start, int end) {
        adjMatrix[start][end] = 1;
        adjMatrix[end][start] = 1;
    }

    void displayVertex(int vertexIndex) {
        cout << vertices[vertexIndex]->label << " ";
    }

    int getAdjUnvisitedVertex(int vertexIndex) {
        for (int i = 0; i < vertexCount; i++) {
            if (adjMatrix[vertexIndex][i] == 1 && !vertices[i]->visited) {
                return i;
            }
        }
        return -1;
    }

    void breadthFirstSearch() {
        queue<int> q;

        vertices[0]->visited = true;
        displayVertex(0);
        q.push(0);

        while (!q.empty()) {
            int tempVertex = q.front();
            q.pop();

            int unvisitedVertex;
            while ((unvisitedVertex = getAdjUnvisitedVertex(tempVertex)) != -1) {
                vertices[unvisitedVertex]->visited = true;
                displayVertex(unvisitedVertex);
                q.push(unvisitedVertex);
            }
        }

        for (int i = 0; i < vertexCount; i++) {
            vertices[i]->visited = false;
        }
    }
};
int main()
{
    Graph graph(MAX);

    graph.addVertex('S'); // 0
    graph.addVertex('A'); // 1
    graph.addVertex('B'); // 2
    graph.addVertex('C'); // 3
    graph.addVertex('D'); // 4

    graph.addEdge(0, 1); // S - A
    graph.addEdge(0, 2); // S - B
    graph.addEdge(0, 3); // S - C
    graph.addEdge(1, 4); // A - D
    graph.addEdge(2, 4); // B - D
    graph.addEdge(3, 4); // C - D

    cout << "Breadth First Search: ";
    graph.breadthFirstSearch();
    
    return 0;
}