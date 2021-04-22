#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if(2<=n<=20)
    {
        for (int i = 1; i <= 10; i++) 
        {
            cout <<n<<" "<<"x"<<" "<<i<<" "<<"="<<" "<<(n*i)<< endl;
        }
    }
    return 0;
}
