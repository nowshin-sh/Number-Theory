#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int ar[1000005];
void sieve()
{
    int maxN = 1000000;

    for(ll i = 2; i <= maxN; i++)
    {
        if(ar[i] == -1)
        {
            for(ll j = i; j <= maxN; j+=i)
            {
                if(ar[j] == -1)
                {
                    ar[j] = i;
                }
            }
        }
    }
    for(ll i = 2; i <= maxN; i++)
    {
        cout<<ar[i]<<endl;
    }
}
int main()
{
    FastRead
    ll t = 1;
    //cin>>t;

    //ll p = 1;

    while(t--)
    {
        memset(ar, -1, sizeof(ar));
        sieve();
    }
    return 0;
}


