#include <iostream>
using namespace std;
int main()
{
	int lastItem = 1;
	int newItem = 2;
	long long sum = 2;
	while(newItem <= 4000000)
	{
		int temp = lastItem;
		lastItem = newItem;
		newItem = temp + lastItem;
		if(newItem % 2 == 0)
			sum += newItem;
	}
	cout << sum;
}