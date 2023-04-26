#include <iostream>
using namespace std;
int findSumOfNums(int x);
int main()
{
    cout << findSumOfNums(1000);
}
int findSumOfNums(int x)
{
	int result = 0;
    for(int i = 1 ;i < x; i++)
    {
    	if(i % 3 == 0 || i % 5 == 0)
    		result += i;
	}
	return result;
}