#include<bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
if(y%2 != 0) {
cout<<"NO"<<endl;
return 0;
}
if((y >= 2*x) and (y <= 4*x)) {
cout<<"YES"<<endl;
} else {
cout<<"NO"<<endl;
}
return 0;
}
