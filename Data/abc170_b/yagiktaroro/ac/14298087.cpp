#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin>>X>>Y;
bool nazo=false;
for(int i=0;i<=X;i++){
if(i*2 + (X-i)*4 == Y){
nazo=true;
}
}
if(nazo){
cout<<"Yes";
}
else{
cout<<"No";
}
}
