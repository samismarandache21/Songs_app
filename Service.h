#pragma once
#include "Repo.h"
#include "map"
class Service
{
private:
	Repo& repo;
public:
	explicit Service(Repo& r) : repo(r) {};

	vector<Melodie>sorted(vector<Melodie> vect);
	vector<Melodie>All() { return this->sorted(repo.get_all()); };
	map<string, int> artist_fr();
	map<string, int> genuri_fr();

	void add(string titlu, string artist, string gen);
	void remove(int id);

};

