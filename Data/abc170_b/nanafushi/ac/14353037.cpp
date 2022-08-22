#include <bits/stdc++.h>
using namespace std;
#define LL long long
int main() {
LL X,Y;
cin>>X>>Y;
if(X*4>=Y && Y%2==0 && X*2<=Y){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
}
