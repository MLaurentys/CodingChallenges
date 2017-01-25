#include<iostream>
#include<algorithm>//for c++ sort
#include<vector>//for vector
#define PI 3.141592653589793238462643383279502884L //pi
using namespace std;
int main()
{
	int amountOfCircles;
	cin >> amountOfCircles;
	vector<int> radiusList;
	int currentInput = 0;
	unsigned long long int totalArea = 0;

	for (int i = 0; i < amountOfCircles; i++) {
		cin >> currentInput;
		radiusList.push_back(currentInput);
	}
	sort(radiusList.begin(), radiusList.end());// Ex: 1, 2, 3, 4, ...
	//it is better to work from the largest to the smaller, because
	//you cannot tell which collor the smaller circle is painted
	reverse(radiusList.begin(), radiusList.end());// Ex 20, 19, 18, 17, ...
	for (int i = 0; i < amountOfCircles; i++){
		if (i % 2 == 0)
			totalArea += radiusList.at(i) * radiusList.at(i);
		else
			totalArea -= radiusList.at(i) * radiusList.at(i);
	}
	cout << totalArea*PI;
	return 0;
}
