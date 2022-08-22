#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
bool flag = false;
for(int i = x;i > 0;i--){
if(2*i+(x-i)*4 == y){
flag = true;
break;
}else{
flag = false;
}
}
if(flag){
cout << "Yes" <<endl;
}else{
cout << "No" <<endl;
}
}
