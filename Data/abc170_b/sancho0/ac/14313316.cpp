#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int x, y;
cin >> x >> y;
if(x*4<y||y%2==1) {
cout<<"No"<<endl;
return 0;
}
if(y/2-x<0 || 2*x + y/2 < 0) {
cout<<"No"<<endl;
return 0;
}
cout<<"Yes"<<endl;
return 0;
}
