#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int flag = 0;
if(y % 2 == 1){
flag = 0;
}else{
for(int i = 1; i <= x; i++){
if((4*x - 2*i) == y){
flag = 1;
break;
}
}
}
if(flag == 1){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
