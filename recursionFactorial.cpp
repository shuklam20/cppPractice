#include <iostream>
#include "stdafx.h"

using namespace std;

int factorial(int n)
{
    if(n<=0) return 1;
    else return n*factorial(n-1);
}

int main() {
    int n; 
    cout << "enter the number:" <<endl;
    cin >> n;
    cout << factorial(n);
    return 0;
}
