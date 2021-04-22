#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int num) ;

int main() 
{

    int n;
    cin >> n;
    cout << factorial(n) << endl;

    return 0;
}

int factorial(int num) 
{
    if(num == 1)
    {
        return 1;
    }
    else 
    {
    return (num * (factorial(num-1)));
    }
}
