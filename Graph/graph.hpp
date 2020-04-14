#include <iostream>
#include <string>
#include "Graphnode.hpp"
#include <list>

class Graph{

	list <Graphnode> allVertices;
	int size;
	int order;

public:

	Graph();
	void addVertex(std::string vertex);
	void removeVertex(std::string vertex);
	void addEdge(std::string vertex1, std::string vertex2);
	void removeEdge(std::string vertex1, std::string vertex2);
	
}

