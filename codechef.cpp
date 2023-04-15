#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      int ans=INT_MAX,p=0;
      for(int i=0;i<n;i++)
      {
        ans=min(ans,abs(arr[i]));
        if(arr[i]==0)
        {
          p=1;
          break;
        }
      }
      if(p==0)
      cout<<ans-1<<endl;
      else
      cout<<-1<<endl;
      

    }
    return 0;
}