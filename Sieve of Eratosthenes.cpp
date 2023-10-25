#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ff first;
#define ss second;
double PI = 3.14159265358979323846;
const long long int M = 1000000;
long long int status[M];
void sieve(ll n)
{
    ll sq = sqrt(n);
    for(ll i = 4; i <= n; i+=2)
    {
        status[i] = 1;
    }

    for(ll i = 3; i <= sq; i+=2)
    {
        if(status[i] == 0)
        {
            for(ll j = i*i; j <= n; j+=i)
            {
                status[j] = 1;
            }
        }
    }
}
int main()
{
    //FastRead
    ll n;
    cin>>n;
    sieve(n);
    ll cnt = 0;
    for(ll i = 1; i <= n; i++)
    {
        if(i >= 2)
        {
            if(status[i] == 0)
            {
                cout<<i<<" ";
                cnt++;
            }
        }
    }
    cout<<endl;
    cout<<cnt<<endl;
    return 0;
}

