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
	if(vertex == null) {}
	else {
		std::list <Graphnode> templist;		
		Graphnode temp = null;
		boolean found = false;
		for(int i = 0; i < allVertices.size(); i++) {
			auto it1 = std::next(allVertices.begin(), i);
                        if(it1.getData() == vertex && found == false) {
                                temp = it1;
				found = true;
			}
		}
		templist = temp.getAdjacentVertex();
		size = size - templist.size();
		allVertices.remove(temp);
		order = order - 1;
	}
}

void addEdge(std::string vertex1, std::string vertex2) {
	if(vertex1 == null || vertex2 == null)
	{

	}
	else {
 		Graphnode temp = null;
		boolean found1 = false;
		boolean found2 = false;
		for(int i = 0; i < allVertices.size(); i++) {
			auto it1 = std::next(allVertices.begin(), i);
                        if(it1.getData() == vertex1 && found1 == false) {
                                found1 = true;
			}
                        if(it1.getData() == vertex2 && found2 == false) {
                                found2 = true;
				temp.setData(vertex2);
			}
		}
		if(found1 == false) {
			Graphnode temp1;
			temp1.setData(vertex1);
			allVertices.push_back(temp1);
			order++;
		}
		if(found2 == false) {
                        Graphnode temp;  
                        temp.setData(vertex2);
                        allVertices.push_back(temp);
                        order++;
                }
		for(int j = 0; j < allVertices.size(); j++){
			auto it1 = std::next(allVertices.begin(), j);
			if(it1.getData() == vertex1)
			{
				it1.addAdjacentVertex(temp);
				size = size + 1;
			}
		}
	}
}

void removeEdge(std::string vertex1, std::string vertex2) {
	if(vertex1 == null || vertex2 == null) {
		
	}
	else {
		std::list <Graphnode> templist;
		boolean found1 = false;
		boolean found2 = false;
		for(int i = 0; i < allVertices.size(); i++) {
                        auto it1 = std::next(allVertices.begin(), i);
                        if(it1.getData() == vertex1) {
                                found1 = true;
                        }
                        if(it1.getData() == vertex2) {
                                found2 = true;
                        }
                }
		if(found1 == false){
		}
		else if(found2 == false) {
		}
		else {
			for(int i = 0; i < allVertices.size(); i++) {
                       		auto it1 = std::next(allVertices.begin(), i);
                        	if(it1.getData() == vertex1) {
					templist = it1.getAdjacentVertex();
					for(int j = 0; j < templist.size(); j++) {
						auto it2 = std::next(templist.begin(), j);
						if(it2.getData() == vertex2) {
							it1.removeAdjacentVertex(it2);
							size = size -1;
						}
					}
				}
			}
		}
	}
}
		

