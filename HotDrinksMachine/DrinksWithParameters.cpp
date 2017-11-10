#include "stdafx.h"
#include "DrinksWithParameters.h"
#include "Drinks.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <tuple>
#include <memory>
#include <functional>
using namespace std;

DrinksWithParameters::DrinksWithParameters()
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
}

DrinksWithParameters::~DrinksWithParameters()
{
}
