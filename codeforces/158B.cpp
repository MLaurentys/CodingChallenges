#include <iostream>
using namespace std;

int main()
{
	int groupsAmount;
	cin >> groupsAmount;
	int tempGroup;
	int oneGroup = 0;
	int twoGroup = 0;
	int threeGroup = 0;
	int fourGroup = 0;
	for (int i = 0; i < groupsAmount; i++)
	{
		cin >> tempGroup;
		if (tempGroup == 1)
		{
			oneGroup++;
		}
		else
		{
			if (tempGroup == 2)
			{
				twoGroup++;
			}
			else
			{
				if (tempGroup == 3)
					threeGroup++;
				else
					fourGroup++;
			}
		}
	}
	int totalTaxis = 0;
	totalTaxis += fourGroup;
	totalTaxis += threeGroup;
	oneGroup -= threeGroup;
	if (oneGroup > 0)
	{
		while (oneGroup > 0 && twoGroup > 0)
		{
			oneGroup -= 2;
			twoGroup -= 1;
			totalTaxis++;
		}
		if (oneGroup > 0)
		{
			totalTaxis += (oneGroup + 3) / 4;
		}
		else
		{
			totalTaxis += (twoGroup + 1) / 2;
		}
	}
	else
	{
		totalTaxis += (twoGroup + 1) / 2;
	}
	cout << totalTaxis;
}
