#include <bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
int flag=0;
for(int i=0; i<=X; i++){
for(int j=0; j<=(X-i); j++){
if((2*i+4*j)==Y){
flag=1;
}
}
}
if(flag==0){
cout << "No" << endl;
}else{
cout << "Yes" << endl;
}
return 0;
}
