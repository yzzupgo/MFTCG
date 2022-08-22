#include <bits/stdc++.h>
using namespace std;
int main() {
float a,b;
cin>>a>>b;
float y=(b-2*a)/2;
float x=a-y;
if(x==(int)x){
if(x>=0 && y>=0){
cout<<"Yes"<<endl;
}
else
cout<<"No"<<endl;
}
else{
cout<<"No"<<endl;
}
return 0;
}
