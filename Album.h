#pragma once
#include "Photo.h"
#include <iostream>
#include <vector>
using namespace std;

class album {
private:
	photo* photos;
	int id;
	string title, remarks;

public:
	album()
		:id(0),title(" "), remarks(" "), photos(){}
	album(int ID, string t, string r, photo* p): id(ID), title(t), remarks(r), photos(p)
	{
		id = ID;
		title = t;
		remarks = r;
	}
	album createAlbum(int ID, string t, string r, photo *p)
	{
		album Album(ID,t,r,p);
		return Album;
	}
	
};