#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 3125000
int status[mx+2];
ll n;
bool Check(ll N, ll pos)
{
    return (bool)(N & (1<<pos));
}
int Set(ll N, ll pos)
{
    return N | (1<<pos);
}
void sieve()
{
    ll sqrtN = sqrt(n);
    for(ll i = 3; i <= sqrtN; i+=2)
    {
        if(Check(status[i>>5], i&31) == 0)
        {
            for(ll j = i*i; j <= n; j += (i<<1))
            {
                status[j>>5] = Set(status[j>>5], j&31);
            }
        }
    }
}
int main()
{
    cin>>n;
    sieve();
    cout<<2<<" ";
    for(ll i = 3; i <= n; i+=2)
    {
        if(Check(status[i>>5], i&31) == 0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}


