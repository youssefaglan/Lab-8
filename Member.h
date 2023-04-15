#pragma once
#include <iostream>
#include "Photo.h"
using namespace std;


class member {
private:
	int id;
	string name, address, contact;
	vector <photo> Photo;
public:
	member() : 
		id(0),name(" "), address(" "), contact(" "), Photo() {}

	member(int ID, string n, string a, string c) :
		id(ID), name(n), address(a),contact(c){}

	void inPhoto(const photo& P) //adds the member to a photo
	{
		Photo.push_back(P);
	}

};