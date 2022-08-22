#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if(a>12){
cout<<b;
}
if(a<=12){
b=b/2;
cout<<b;
}
else if(a<=5){
cout<<0;
}
}
