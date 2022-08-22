#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
int main(){
int x, y, four, legs, lastlegs;
bool flag = true;
cin >> x >> y;
four = y / 4;
for (int i = four; i >= 0;i--){
legs = 4 * i;
lastlegs = y - legs;
if(lastlegs%2==0){
if((lastlegs/2)+i==x){
flag = false;
cout << "Yes";
break;
}
}
}
if(flag){
cout << "No";
}
}
