#include <iostream>
using namespace std;

int main()
{
	//get number of days
	int numberDays;
	cin >> numberDays;
	//create vectors that will hold amount of meat bought for this price
	long int allMeatSum[101];
	int lowestPrice[101];
	//aux var for program speed
	int lastIndex;
	//counter used for indexation
	int counter = -1;
	//aux vars
	int tempMeat;
	int tempCost;
	for (int i = 0; i < numberDays; i++)
	{
		//get inputs
		cin >> tempMeat;
		cin >> tempCost;
		//if price is lower than previous lower price, update values,
		//creating a new "buy as nuch as possible" day
		if (i == 0 || tempCost < lowestPrice[counter])
		{
			//cout << "i = " << i<<"\n";
			counter++;
			lowestPrice[counter] = tempCost;
			//cout << "lowest Price: " << lowestPrice[counter] << "\n";
			allMeatSum[counter] = 0;
		}
		allMeatSum[counter] += tempMeat;
	}
	long long int total = 0;
	while (counter>-1)
	{
		//cout << "meat stacked: " << allMeatSum[0]<<"\n";
		total += allMeatSum[counter] * lowestPrice[counter];
		counter--;
	}
	cout << total;
}