#include "stdafx.h"
#include "CoffeType.h"
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

CoffeType::CoffeType()
{
	coffe_maker["espresso"] = []
	{
		auto espresso = make_unique<Coffe>();
		cout << "ESPRESSO.\n";
		espresso->prepare(50, 0, 10);
		return espresso;
	};
		coffe_maker["latte"] = []
	{
		auto latte = make_unique<Coffe>();
		cout << "LATTE.\n";
		latte->prepare(100, 100, 6);
		return latte;
	};
}

unique_ptr<Drinks> CoffeType::make_coffe(const string & name)
{
	return coffe_maker[name]();
}



CoffeType::~CoffeType()
{
}
/*DrinksWithParameters::DrinksWithParameters()
{
{
factory["coffe"] = []
{
auto coffe = make_unique<Coffe>();
coffe->prepare(50);
return coffe;
};
}
}

unique_ptr<Drinks> DrinksWithParameters::make_drink(const string & name)
{
return factory[name]();
}*/