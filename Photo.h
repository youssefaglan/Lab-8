
#pragma once
#include <iostream>
#include "Album.h"
#include "Member.h"
#include "Location.h"
#include "Tag.h"
using namespace std;

class photo {
private:
	int id;
	string title, remarks, type, privacy;
	member *Member;
	Tag* tag;
	Location* location;
public:
	photo()
	{
		id = 0;
		title = " ";
		remarks = " ";
		type = " ";
		privacy = " ";
		tag = new Tag();
		location = new Location();
		Member = new member();
	}
	photo(int ID, string t, string r, string ty, string p, member* m, Location* l, Tag* tg):
		id(ID), title(t), remarks(r), type(ty),privacy(p), Member(m), location(l), tag(tg) {}


};