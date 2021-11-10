#include<iostream>
using namespace std;
int main()
{
	int amountHouses;
	cin >> amountHouses;
	int amountTasks;
	cin >> amountTasks;
	int position = 1;
	int destination = -1;
	long long int totalSteps = 0;
	for (int i = 0; i<amountTasks; i++)
	{
		cin >> destination;
		if (position <= destination)
			totalSteps += (destination - position);
		else
			totalSteps += (destination + (amountHouses - position));
		position = destination;
	}
	cout << totalSteps;
	return 0;
}