#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int x,y;
cin>>x>>y;
if(y%2==0){
if(y<=x*4){
cout<<"Yes\n";
}
else{
cout<<"No\n";
}
}
else{
cout<<"No\n";
}
return 0;
}
