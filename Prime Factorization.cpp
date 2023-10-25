#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ff first;
#define ss second;
double PI = 3.14159265358979323846;
const long long int M = 1000000;
long long int status[M];
vector<ll>v, v1;

void primeFact(ll n)
{
    ll sq = sqrt(n);
    ll mark = 0;
    for(ll i = 0; i < v.size(); i++)
    {
        if(n%v[i] == 0)
        {
            while(n%v[i] == 0)
            {
                n/=v[i];
                v1.push_back(v[i]);
                if(n < v[i])
                {
                    mark = 1;
                    break;
                }
            }
        }

        if(mark == 1)
        {
            break;
        }
    }
    if(n > 1)
    {
        v1.push_back(n);
    }
}
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
    ll sq = sqrt(n);
    sieve(sq);
    for(ll i = 2; i <= sq; i++)
    {
        if(status[i] == 0)
        {
            v.push_back(i);
            cout<<i<<" ";
        }
    }
    cout<<endl;
    primeFact(n);
    cout<<v1[0];
    for(ll i = 1; i < v1.size(); i++)
    {
        cout<<"*"<<v1[i];
    }
    cout<<endl;
    return 0;
}


