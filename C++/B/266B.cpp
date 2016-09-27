#include<iostream>
#include<string>//for swap
using namespace std;
int main()
{
	int childrenNumber;
	cin >> childrenNumber;
	int amountTransform;
	cin >> amountTransform;
	string childrenOrder;
	cin >> childrenOrder;
	string childrenOrderFixed = childrenOrder;
	for (int i = 0; i < amountTransform; i++)
	{
		for (int j = 0; j < childrenNumber - 1; j++)
		{
			if (childrenOrder[j] == 'B' && childrenOrder[j + 1] == 'G')
				swap(childrenOrderFixed[j], childrenOrderFixed[j + 1]);
		}
		childrenOrder = childrenOrderFixed;
	}
	cout << childrenOrder;
	return 0;
}
