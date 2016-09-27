#include <iostream>
using namespace std;

int main()
{
	int amountOfJokes;
	cin >> amountOfJokes;
	int duration;
	cin >> duration;
	int allSongsTime = 0;
	int currentSong;//aux var
	//get total time of songs
	for (int i = 0; i < amountOfJokes; i++)
	{
		cin >> currentSong;
		allSongsTime += currentSong;
	}
	//check if it is possible to sing all the songs
	//between each two jokes there is a 10 minute break: if 3 songs, 2 breaks
	if (allSongsTime + 10 * (amountOfJokes - 1) <= duration)
	{
		int remaining = duration - allSongsTime;
		cout << remaining / 5;
	}
	else
	{
		cout << -1;
	}
	return 0;
}