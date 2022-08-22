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
for(;i<5;i++){
if(y == 2*i + 4*(x - i)){
flag = 1;
}
else{
}
}
if(flag == 1){
cout << "Yes";
}
else{
cout << "No";
}
}
