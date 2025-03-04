#pragma once
#include "Service.h"
#include "algorithm"
#include "map"

void Service::add(string titlu, string artist, string gen) {
	int id = 0;
	for (auto& m : All())
	{
		
		if (m.get_id() > id)
			id = m.get_id();

	}
	id++;
	if (titlu != "" and artist != "" and (gen == "pop" || gen == "rock" || gen == "disco" || gen == "folk"))
		repo.adauga(Melodie(id, titlu, artist, gen));
}

void Service::remove(int id) {
	repo.sterge(id);
}

vector<Melodie> Service::sorted(vector<Melodie> vect) {
	sort(vect.begin(), vect.end(), [](Melodie& m1, Melodie& m2) {
		return m1.get_artist() < m2.get_artist();
		});
	return vect;
}

map<string, int> Service::artist_fr() {
	map<string, int> rez;
	for (auto& m : All())
		rez[m.get_artist()]++;
	return rez;
}

map<string, int> Service::genuri_fr() {
	map<string, int> rez;
	for (auto& m : All())
		rez[m.get_gen()]++;
	return rez;

}
