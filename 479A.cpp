#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	int num3;

	cin >> num1 >> num2 >> num3;
	//if any number == 1, sum. (multiplying will not make a difference)
	//sum before multiplication
	if (num1 == 1)
		if (num3 == 1)
			cout << num1 + num2 + num3;
		else
			cout << (num1 + num2)*num3;
	else
		if (num3 == 1)
			cout << num1*(num2 + num3);
		else
			if (num2 == 1)
				if (num1 > num3)
					cout << num1*(num2 + num3);
				else
					cout << num3*(num2 + num1);
			else 
				cout << num1*num2*num3;
	return 0;
}
