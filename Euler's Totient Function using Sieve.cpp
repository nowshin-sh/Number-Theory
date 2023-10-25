#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll phi[1000001];
void init(ll maxN)
{
    for(ll i = 1; i <= maxN; i++)
    {
        phi[i] = i;
    }
    for(ll i = 2; i <= maxN; i++)
    {
        if(phi[i] == i)
        {
            for(int j = i; j <= maxN; j+=i)
            {
                phi[j]/=i;
                phi[j]*=(i-1);
            }
        }
    }
}
int main()
{
    ll t = 1;
    cin>>t;
    init(1000000);
    //ll p = 1;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<phi[n]<<endl;
    }
    return 0;
}

