#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int n, bin, total = 0, t = 0, s = 0;
	cout << "enter the number:" << endl;
	cin >> n;
	cout << "binary for " << n << " is ";
	while (n > 0)
	{
		bin = n % 2;
		n = n / 2;		
		cout << bin; // bin outputs the reminder with two, (hence the binary representation)
		if (bin == 1) {
			s++; total++; // s is same as "total" except that it resets to zero if there is a zero in bin representation
			if (s >= t) t = s;
		}
		else s = 0;
	}
	cout << endl;
	cout << "Total 1s are: " << total << endl;
	cout << "Consecutive 1s are: " << t << endl;
  
  return 0;
}
