#include <iostream>
using namespace std;

int main()
{
	long int distShop1;
	cin >> distShop1;
	long int distShop2;
	cin >> distShop2;
	long int shops;
	cin >> shops;
	//the viable options are:
	//(route 1) house -> shop -> house -> other Shop -> house
	//(route 2) house -> shop -> other Shop -> house
	//(route 3) house -> closeste shop -> other shop -> closest shop -> house

	if (shops < (distShop1 + distShop2))//check which route is better and take it
	{
		if (2 * shops < distShop1 && distShop1>distShop2)
		{
			//route 3, closest is shop 2
			cout << (2 * distShop2 + 2 * shops);
		}
		else
		{
			if(2*shops < distShop2)
			{
				//route 3, closest is shop 1
				cout << (2 * distShop1 + 2 * shops);
			}
			else
			{
				//route 2
				cout << (distShop1 + distShop2 + shops);
			}
		}
	}
	else
	{
		//route 1
		cout << (2 * distShop1 + 2 * distShop2);
	}
	return 0;
}