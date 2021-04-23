#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
struct Calculator : public AdvancedArithmetic
{
    int divisorSum(int n)
    {
    int total=0,i;
        for(i=1; i<=n; i++)
        { 
            if(n%i == 0)
            { 
            total+=i; 
            }
        }
        return total;
    }
};
int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}