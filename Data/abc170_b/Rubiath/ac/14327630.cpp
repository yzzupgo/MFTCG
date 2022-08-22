#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int x,y;
cin>>x>>y;
if((y-(2*x))%2!=0||((4*x)-y)%2!=0||(y-(2*x))<0||((4*x)-y)<0){
cout<<"No";
}
else{
cout<<"Yes";
}
return 0;
}
