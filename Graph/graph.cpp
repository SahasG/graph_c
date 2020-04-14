#include "graph.hpp"
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include "graphnode.hpp"

void addVertex(std::string vertex) {
	if(vertex == null){}
	else {
		boolean found = false;
		for (int i = 0; i < allVertices.size(); i++) {
			auto it1 = std::next(allVertices.begin(), i);
			if(it1.getData() == vertex && found == false) {
				found = true;
			}
		}
		if(found == false){
			Graphnode node;
			node.setData(vertex);
			allVertices.push_back(node);
		}
	}
}

void removeVertex(std::string vertex) {
	
