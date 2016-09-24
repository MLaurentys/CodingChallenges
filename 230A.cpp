#include <iostream>
using namespace std;

int main()
{
	int kiritoStr;
	cin >> kiritoStr;

	int numberDrags;
	cin >> numberDrags;

	int dragStr[1000 + 10];
	int dragXP[1000 + 10];

	for (int i = 0; i < numberDrags; i++)
	{
		cin >> dragStr[i];
		cin >> dragXP[i];
	}
	//aux int and flag for quick break
	int compare = kiritoStr;
	int remain = numberDrags;
	bool flag = true;

	while (flag == true && remain > 0)
	{
		for (int i = 0; i < numberDrags; i++)
		{
			//check if he can kill the dragon
			if (dragStr[i] < kiritoStr)
			{
				//check if drag has not been killed yet
				if (dragStr[i] > 0)
				{
					kiritoStr += dragXP[i];
					dragStr[i] = 0;
					remain--;
				}
			}
		}
		//check if he killed at least one of the remaining dragons
		if (kiritoStr == compare)
		{
			//stop loop if he could not
			flag = false;
		}
		else
		{
			//update his "skill"
			compare = kiritoStr;
		}
	}
	if (remain == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}