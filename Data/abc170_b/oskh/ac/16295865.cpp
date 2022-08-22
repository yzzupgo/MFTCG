#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
int flag = 0;
if( (y % 2) == 1){
flag = 0;
}else if( (4 * x) < y ){
flag = 0;
}else{
for(int i = 0; i <= x; i++){
for(int j = 0; j <= x; j++){
if( (i + j == x) && (4 * i + 2 * j == y) ){
flag = 1;
break;
}
}
if(flag == 1){
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
