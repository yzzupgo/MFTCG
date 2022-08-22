#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >>X>>Y;;
if(Y%2==1 || X*4<Y){
cout <<"No"<<endl;
}
else if (X*2>Y) {
cout<<"No"<<endl;
}
else {
cout<<"Yes";
}
}
