#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FastRead    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mx 1000000
int Big_Mod(int base, int pow, int mod)
{
    if(pow == 0)
    {
        return 1;
    }
    else if(pow%2 != 0)
    {
        int p1 = base%mod;
        int p2 = Big_Mod(base, pow-1, mod);
        return (p1*p2)%mod;
    }
    else
    {
        int p1 = Big_Mod(base, pow/2, mod);
        return (p1*p1)%mod;
    }
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        int base, pow, mod;
        cin>>base>>pow>>mod;
        cout<<Big_Mod(base, pow, mod)<<endl;
    }
    return 0;
}
