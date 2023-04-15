#pragma once
#include "Photo.h"
#include <iostream>
using namespace std;

class Location {
private:
	int id;
	string name, remarks;
	photo *Photo;
public:
	Location() :
		id(0), name(" "), remarks(" "), Photo(){}

	Location(int ID, string n, string r, photo *p) :
		id(ID), name(n), remarks(r), Photo(p){};

};