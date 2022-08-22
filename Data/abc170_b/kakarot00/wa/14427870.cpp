#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n,y ;
cin>>n>>y;
if(y%2 != 9) cout<<"No\n";
else{
if(n*2 == y || n*2 == y+2){
cout<<"Yes\n";
}else if(n*4 == y || n*4 == y-2){
cout<<"Yes\n";
}else{
cout<<"Yes\n";
}
}
return 0;
}
