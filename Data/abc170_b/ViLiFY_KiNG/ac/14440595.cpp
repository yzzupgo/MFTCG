#include<bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
if(y%2 != 0) {
cout<<"No"<<endl;
return 0;
}
if((y >= 2*x) and (y <= 4*x)) {
cout<<"Yes"<<endl;
} else {
cout<<"No"<<endl;
}
return 0;
}
