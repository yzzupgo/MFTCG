#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
int x;
int y;
int i = 0;
int flag = 0;
cin >> x;
cin >> y;
if( y <= 4*x && 2*x <= y ){
if((y % 2) == 0){
flag = 1;
}
}
else{
flag = 0;
}
if(flag == 1){
cout << "Yes";
}
else{
cout << "No";
}
}
