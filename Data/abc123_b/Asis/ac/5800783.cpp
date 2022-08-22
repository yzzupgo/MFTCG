#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5];
  for(int i=0;i<5;i++)
    	cin>>arr[i];
  int min=10,sum=0;
  for(int i=0;i<5;i++)
  {
		if((arr[i]%10)<min&&(arr[i]%10)!=0)
        {
			min=arr[i]%10;
          //sum+=arr[i]+10-(arr[i]%10);
        }
        sum+=arr[i]+10-(arr[i]%10);
        if(arr[i]%10==0)
            sum-=10;
  }
  cout<<sum-10+min;
}
