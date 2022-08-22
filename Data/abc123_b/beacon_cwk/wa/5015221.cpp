#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[6],max1=0,s=0;
    for(int i=0;i<5;i++)
    {
    	cin>>a[i];
    	if(a[i]%10==0) s+=a[i];
    	else
    	   {  
		      s+=a[i]+10-a[i]%10;
			  max1=max(max1,a[i]%10);
		   }
    	 
	}
     cout<<s-max1; 
	return 0;
} 