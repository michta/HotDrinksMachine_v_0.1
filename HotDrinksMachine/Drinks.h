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


class Drinks
{
	
public:
	virtual void prepare(int volume, int milk, int power) = 0;
	virtual ~Drinks() = default;
};

struct Coffe : Drinks
{
	void prepare(int volume, int milk, int power) override
	{
		cout << "Your coffe is preparing...\n";
		Sleep(500);
		cout << "Added " << volume << " ml of water.\n";
		cout << "milk: " << milk << "\n";
		cout << "power: " << power << "\n";
		Sleep(500);
		cout << "Finish!\n";
		cout << "Enjoy Your coffe!\n";
		Sleep(1000);
	}
};
