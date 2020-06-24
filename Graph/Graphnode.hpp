#include <iostream>
#include <string>
#include <set>

class Graphnode{

	std::string data;
	std::list<Graphnode> adjacentVertices;
public:

	Graphnode(std::string newData);
	std:string getData();
	void addAdjacentVertex(Graphnode newNode);
	void removeAdjacentVertex(Graphnode removeNode);
	std:list<Graphnode> getAdjacentVertex();
	std::list<String> getStringAdjacentVertex();

}
