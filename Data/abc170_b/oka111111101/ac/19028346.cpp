#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin>>X>>Y;
bool check=false;
for(int x=0;x<=X;x++){
if(2*(X-x)==Y-2*X&&X-x>=0){
check=true;
break;
}
}
if(check){cout<<"Yes";}
else{cout<<"No";}
}
