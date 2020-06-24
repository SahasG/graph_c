#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include "Graphnode.hpp"
#include <set>

Graphnode::Graphnode(std::string newData) : data(newData) {}

std::string getData() {
	return data;
}

void addAdjacentVertex(Graphnode newNode) {
	adjacentVertices.push_back(newNode);
}

void removeAdjacentVertex(Graphnode removeNode) {
	adjacentVertices.remove(removeNode);
}

std::list<Graphnode> getAdjacentVertex() {
	return adjacentVertex;
}

std::list<String> getStringAdjacentVertex() {
	std::list<String> stringAdjacentVertex;
	for (Graphnode node : adjacentVertex) {
		stringAdjacentVertex.push_back(node.getData());
	}
	return stringAdjacentVertex;
}
	
	
