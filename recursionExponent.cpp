#include "stdafx.h"
#include<iostream>

using namespace std;

int exponential(int n, int p)
{
	if (p <= 1) return n;
	else return n*exponential(n, p - 1);
}

void main()
{
  int n, p;
  cout << "Enter the number:" << endl;
  cin >> n;
  cout << "Enter the exponent that you want:" << endl;
  cin >> p;
  cout << n << "^" << p << " is " << exponential(n, p) <<endl;
}
