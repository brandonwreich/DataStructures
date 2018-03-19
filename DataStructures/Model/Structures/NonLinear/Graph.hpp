//
//  Graph.hpp
//  DataStructures
//
//  Created by Reich, Brandon on 3/19/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>

using namespace std;

template <class Type>
class Graph
{
private:
    static const int MAXIUM = 20;
    bool adjacencyMatrix [MAXIUM][MAXIUM];
    int weightCostMatrix [MAXIUM][MAXIUM];
    Type graphData [MAXIUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    
    // Graph operations
    
    void addVertex(const Type & value);
    
    // Connect vertices
    void addEdge(int source, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target, int cost);
    
    // Disconnect methods
    void removeEdge(int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    
    // Accessor methods
    Type & operator [] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    
    // Check connections
    bool hasUndirectedConnection(int source, int target) const;
    bool areConnected(int source, int target) const;
    std::set<int> neighbors(int vertex) const;
    
    // Traversals
    void depthFirstTraversal(Graph<Type> & graph, int vertex);
    void breadthFirstTraversal(Graph<Type> & graph, int vertex);
    int costTraversal(Graph<Type> & graph, int vertex);
};

template <class Type>
const int Graph<Type> :: MAXIUM;

template <class Type>
Graph<Type> :: Graph()
{
    this -> vertexCount = 0;
}

/**
 Since we cannot remove from an array in C++,
 we only implement adding to a Graph.
 Java allows for all objects to be set to null but C++
 does not.
 */
template <class Type>
int Graph<Type> :: size() const
{
    return vertexCount;
}

/** Left hand side operator */
template <class Type>
Type& Graph<Type> :: operator [] (int vertex)
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

/** Rigt hand side operator */
template <class Type>
Type Graph<Type> :: operator [] (int vertex) const
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}

template <class Type>
void Graph<Type> :: addVertex(const Type& value)
{
    assert(vertexCount < MAXIUM);
    int newVertexNumber = vertexCount;
    vertexCount++;
    
    for(int otherVertex = 0; otherVertexNumber < vertexCount; otherVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
        adjacencyMatrix[newVertexNumber][otherVertexNumber] = false;
    }
    
    graphData[newVertexNumber] = value;
}

template <class Type>
void Graph<Type> :: removeEdge(int source, int target)
{
    assert (source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
}

template <class Type>
void Graph<Type> :: removeEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
    adjacencyMatrix[target][source] = false;
}

template <class Type>
void Graph<Type> :: removedEdgeCost(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMatrix[source][target] = 0;
    weightCostMartix[target][source] = 0;
}

template <class Type>
void Graph<Type> :: addEdge(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix [source][target] = true;
}

template <class Type>
void Graph<Type> :: addEdgeCost(int source, int target, int cost)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    weightCostMatrix[source][target] = cost;
    weightCostMatrix[target][source] = cost;
}

template <class Type>
void Graph<Type> :: addEdgeUndirected(int source, int target)
{
    assert (source >=0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = true;
    adjacencyMatrix[target][source] = true;
}

template <class Type>
bool Graph<Type> :: hasUndirectedConnection(int source, int target) const
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount)
    bool isAnEdge = false;
    
    isAnEdge = adjacencyMatrix[source][target] || adjacencyMatrix[target][source];
    
    return isAnEdge;
}

#endif /* Graph_hpp */
