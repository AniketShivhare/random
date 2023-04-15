#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    cout<<"0";
    
    else
    {
       if((ceil(float)n/4) - (n/4))
       cout<<n/4;
       else
       cout<<(n/4)-1;
    }
    return 0;
}