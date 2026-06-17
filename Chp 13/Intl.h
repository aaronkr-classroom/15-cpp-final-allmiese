#pragma once
// Intl.h

#ifndef GUARD_Intl_h
#define GUARD_Intl_h

#include <iostream>

#include "Core.h"

using namespace std;

class Intl : public Core {
public:
	Intl() : transfer(0) { };
	Intl(istream& is) { read(is); };
	double grade() const;
	istream& read(istream&);

private:
	double transfer; // transfer exam score
	Intl* clone() const { return new Intl(*this); }
};

#endif