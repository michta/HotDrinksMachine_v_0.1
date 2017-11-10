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


class Drinks
{
	
public:
	virtual void prepare(int volume) = 0;
	virtual ~Drinks() = default;
};

struct Coffe : Drinks{
	void prepare(int volume) override
	{
		cout << "Your coffe is preparing...\n";
		cout << "Added " << volume << " ml of water.\n";
		cout << "Finish!\n";
	}
};