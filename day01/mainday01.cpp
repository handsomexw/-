#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int inital = 1; inital <= 11; ++inital) {
		sum += inital;
	}
	cout << sum << endl;
	return 0;
}