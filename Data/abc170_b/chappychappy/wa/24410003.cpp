#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
bool f = true;
if (y % 2 != 0){
f = false;
}else if(y / x >= 2){
f = false;
}else if(x > y){
f = false;
}
if (f){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
