#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n-1],arr1[n];
        for(int i=0;i<n;i++)
        arr1[i]=1;
        for(int i=0;i<n-1;i++)
        cin>>arr[i];
        for(int i=n-2;i>=0;i--)
        {
            // cout<<arr[i]<<endl;
            if(arr[i]==0)
            arr1[i]=arr1[i+1];
            else if(arr[i]==1)
            {
                // cout<<arr1[i+1]<<endl;
                
                arr1[i]=1;
                if(arr1[i+1]==1)
                {
                    int l=i+1;
                    arr1[l]++;
                    // cout<<l<<endl;
                    while(l<n-1)
                    {
                        if(arr[l]==0)
                        arr1[l+1]+=1;
                        else if(arr[l]==1&&arr1[l+1]<=arr1[l])
                        arr1[l+1]+=1;
                        else
                        break;
                        l++;
                    }
                }
            }
            else
            {
                arr1[i]=arr1[i+1]+1;
                // cout<<arr[i]<<endl;
            }
        }
        for(int i=0;i<n;i++)
		{
			cout<<arr1[i]<<" ";
		}
		cout<<endl;
    }
}