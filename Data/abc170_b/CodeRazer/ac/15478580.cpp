#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if ((y - 2*x) >= 0 && (y-2*x)%2 == 0){
int a = (y - 2*x)/2;
int b = (x - a);
if (b >= 0){
cout<<"Yes";
}
else{
cout<<"No";
}
}
else{
cout<<"No";
}
return 0;
}
