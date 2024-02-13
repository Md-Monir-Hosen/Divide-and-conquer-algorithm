#include<bits/stdc++.h>
using namespace std;
int calculate(int x,unsigned n)
{
    long long pow=1;
    for(int i=0;i<n;i++)
    {
        pow=pow*x;
    }
    return pow;
}
int main()
{
     int x = 2;
    unsigned n = 3;

    // Function call
    int result = calculate(x, n);
    cout << result << endl;

    return 0;
}
