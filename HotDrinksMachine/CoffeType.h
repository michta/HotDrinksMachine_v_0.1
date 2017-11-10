#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <tuple>
#include <memory>
#include <functional>
#include <Windows.h>
using namespace std;

#include "Drinks.h"

class CoffeType : Coffe

{
	map<string, function<unique_ptr<Drinks>()>> coffe_maker;
public:

	CoffeType();
	unique_ptr<Drinks> make_coffe(const string& name);
	~CoffeType();
};
