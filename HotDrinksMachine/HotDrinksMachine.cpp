#include "stdafx.h"
#include <iostream>
#include <string>
#include <memory>
using namespace std;

#include "Drinks.h"
#include "DrinksWithParameters.h"


int main()
{
	DrinksWithParameters dwp;
	dwp.make_drink("coffe");

	getchar();
    return 0;
}

