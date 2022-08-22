#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin>>X>>Y;
bool check=false;
for(int x=1;x<=X-1;x++){
if(2*(X-x)==Y-2*X){
check=true;
break;
}
}
if(check){cout<<"Yes";}
else{cout<<"No";}
}
