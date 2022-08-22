#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int res=b%a;
if(res%2||b>4*a)
cout<<"No";
else
cout<<"Yes";
return 0;
}
