#include<bits/stdc++.h>
using namespace std;
constexpr int MAX = 5;
struct Vertex 
{
   char label;
   bool visited;
   Vertex(char label) : label(label), visited(false) {}
};
class Graph 
{
private:
   array<Vertex*, MAX> vertices;
   array<std::array<int, MAX>, MAX> adjMatrix;
   int vertexCount = 0;
public:
   Graph() 
   {
      for (auto& row : adjMatrix) 
      {
         row.fill(0);
      }
   }
   ~Graph() {
      for (auto vertex : vertices) 
      {
         delete vertex;
      }
   }

   void addVertex(char label) {
      vertices[vertexCount++] = new Vertex(label);
   }

   void addEdge(int start, int end) {
      adjMatrix[start][end] = 1;
      adjMatrix[end][start] = 1;
   }

   void displayVertex(int vertexIndex) {
      std::cout << vertices[vertexIndex]->label << " ";
   }

   int getAdjUnvisitedVertex(int vertexIndex) {
      for (int i = 0; i < vertexCount; ++i) {
         if (adjMatrix[vertexIndex][i] == 1 && !vertices[i]->visited) {
            return i;
         }
      }
      return -1;
   }

   void depthFirstSearch() {
      std::stack<int> stack;
      vertices[0]->visited = true;
      displayVertex(0);
      stack.push(0);

      while (!stack.empty()) {
         int unvisitedVertex = getAdjUnvisitedVertex(stack.top());

         if (unvisitedVertex == -1) {
            stack.pop();
         } else {
            vertices[unvisitedVertex]->visited = true;
            displayVertex(unvisitedVertex);
            stack.push(unvisitedVertex);
         }
      }

      for (int i = 0; i < vertexCount; ++i) {
         vertices[i]->visited = false;
      }
   }
};
int main()
{

    Graph graph;

   graph.addVertex('S');
   graph.addVertex('A');
   graph.addVertex('B');
   graph.addVertex('C');
   graph.addVertex('D');

   graph.addEdge(0, 1);
   graph.addEdge(0, 2);
   graph.addEdge(0, 3);
   graph.addEdge(1, 4);
   graph.addEdge(2, 4);
   graph.addEdge(3, 4);

   cout << "Depth First Search: ";
   graph.depthFirstSearch();
   cout << endl;

    return 0;
}