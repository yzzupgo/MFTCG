#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n<10)
{
cout<<n;
return 0;
}
else if(n>=10 && n<=99)
{
cout<<9;
return 0;
}
else if(n>=100 && n<=999)
{
cout<<9+n-100+1;
return 0;
}
else if(n>=1000 && n<=9999)
{
cout<<909<<endl;
return 0;
}
else if(n>=10000 && n<=99999)
{
cout<<909+n-10000+1;
return 0;
}
else if(n==100000)
{
cout<<90909<<endl;
return 0;
}
}
