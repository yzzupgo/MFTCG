#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int flag = 1;
if(y % 2 == 1){
flag = 0;
}else if(x * 4 < y){
flag = 0;
}
if(flag == 1){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
