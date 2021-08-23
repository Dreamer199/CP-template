#include <bits/stdc++.h>
using namespace std;

void sieve(int prime[])
{
    int max = 1000000;
    for(int i=1;i<=max;i++)
    prime[i] = 1;

    prime[0] = 0;
    prime[1] = 0;
    
    for(int i=2;i*i<=max;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=max;j+=i)
            prime[j] = 0;
        }
    }

}
int main()
{
int prime[1000001];
sieve(prime);
 
return 0;
}
