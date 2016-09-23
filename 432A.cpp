#include <iostream>

using namespace std;

int main()
{
	int numberOfPeople;
	int yearsTogether;
	int okPeople = 0;
	int nextPeople;
	//get defining variables
	cin >> numberOfPeople;
	cin >> yearsTogether;
	//fix input for algorithm purpose
	yearsTogether = 5 - yearsTogether;

	for (int i = 0; i < numberOfPeople; i++)
	{
		//check if pearson can be put into a team
		cin >> nextPeople;
		if (nextPeople <= yearsTogether)
			//amount of people that can fit a team
			okPeople++;
	}
	cout << okPeople/3;
	return 0;
}
