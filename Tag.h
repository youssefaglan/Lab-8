#pragma once
#include "Photo.h"

class Tag {
private:
	int id;
	string name, remarks;
	photo* Photo;
public:
	Tag():id(0),name(" "), remarks(" "), Photo() {}
	Tag(int ID, string n, string r, photo* p) :id(ID), name(n), remarks(r), Photo(p){}

};
