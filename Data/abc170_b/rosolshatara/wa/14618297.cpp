#include<bits/stdc++.h>
using namespace std ;
int main () {
int x,y;
cin>>x>>y;
if(x*2==y)cout<<"YES";
else if (x*4==y)cout<<"YES";
else {
if(y/x>4 or y/x<2)cout<<"NO";
else cout<<"YES";
}
return 0;
}
