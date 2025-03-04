#pragma once
#include <iostream>
#include <utility>
#include "string"
using namespace std;

class Melodie
{
private:
	int id;
	string titlu, artist, gen;
public:
	Melodie(int i, string t, string a, string g) : id{ i }, titlu{ t }, artist{ a }, gen{ g } {};
	int get_id() const { return id; };
	string get_titlu() const { return titlu; };
	string get_artist() const { return artist; };
	string get_gen() const { return gen; };
};

