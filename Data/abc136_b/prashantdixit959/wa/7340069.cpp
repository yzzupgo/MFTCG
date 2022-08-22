#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
if(n<10)
cout<<n;
else if(n>=10 && n<100)
cout<<"9";
else if(n>=100 && n<1000)
cout<<(9+n-99);
else if(n>=1000 && n<=6000)
cout<<"909";
return 0;
}
