#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin>>x>>y;
if((y-x*2)%2==0&&(y-x*2)/2<=x&&(y-x*2)>=0){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
