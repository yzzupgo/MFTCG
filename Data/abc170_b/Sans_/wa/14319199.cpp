#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,d;
cin>>a>>b;
for(int i=0;i<a;i++){
b-=4;
d=b/2+b%2;
if(d>=0&&d==b-i+1){
cout<<"Yes"<<endl;
break;
}
else if(i==a-1){
cout <<"No"<<endl;
}
}
}
