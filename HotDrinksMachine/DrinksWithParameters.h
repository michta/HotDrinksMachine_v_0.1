#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <tuple>
#include <memory>
#include <functional>
using namespace std;

#include "Drinks.h"

class DrinksWithParameters
{
	map<string, function<unique_ptr<Drinks>()>> factory;
public:

	DrinksWithParameters();
	unique_ptr<Drinks> make_drink(const string& name);
	~DrinksWithParameters();

};