#include <bits/stdc++.h>
using namespace std;
long long int power( long long int a, long long int n)
{
    long long int res = 1;
    while(n)
    {
        if(n%2)
        {
            res*=a;
            n--;
        }
        else
        {
            a*=a;
            n/=2;
        }
    }

   return res;
}
int main()
{

return 0;
}
