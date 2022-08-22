#include<bits/stdc++.h>
using namespace std;
#define sachin ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
sachin
long long n;
cin>>n;
long long a[7]={},count1=10,count2=0;
a[1]=0;a[2]=9;a[3]=9;a[4]=909;a[5]=909;a[5]=90909;a[6]=90909;
long long a1=log10(n);a1++;
if(a1%2==0)
{
cout<<a[a1];
}
else{
long long b=n-pow(10,a1-1)+1;
cout<<a[a1]+b;
}
return 0;
}
