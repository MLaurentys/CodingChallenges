#include <iostream>
using namespace std;

int main()
{
	long int horizontal;
	cin >> horizontal;
	long int vertical;
	cin >> vertical;
	long int steps;
	cin >> steps;
	//sum the modules for total distance
	long int distance = abs(horizontal) + abs(vertical);
	//see if he could reach the house
	if (steps >= distance)
	{
		//check to see if it is possible to end up exactly in the house
		//Pretending he arrived at the house and went back and forth a block is a way to test it
		if ((steps - distance) % 2 == 0)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
	}
	else
	{
		cout << "No";
	}
	return 0;
}