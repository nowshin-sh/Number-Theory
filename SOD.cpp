#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 500000
ll sod[mx+2];
void sieve()
{
    for(ll i = 1; i <= mx; i++)
    {
        sod[i] = 1;
    }
    for(ll i = 2; i <= mx; i++)
    {
        if(sod[i] == 1)
        {
            for(ll j = i; j <= mx; j+=i)
            {
                ll temp = j, cnt = 0, flag = 1;
                while(temp%i == 0)
                {
                    temp/=i;
                    cnt++;
                }
                ll pow = i;
                while(cnt--)
                {
                    flag += pow;
                    pow*=i;
                }
                sod[j]*=flag;
            }
        }
    }
}
int main()
{
    int t = 1;
    cin>>t;
    memset(sod, 1, sizeof(sod));
    sieve();
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<sod[n]-n<<endl;
    }
    return 0;
}
///https://www.spoj.com/problems/DIVSUM/
///https://youtu.be/x9KMLQa6G5w?si=adCU9oTUxhCUHBsL
