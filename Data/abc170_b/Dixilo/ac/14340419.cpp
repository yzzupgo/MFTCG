#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
bool judge=false;
cin >> x >> y;
if(y == 4 * x) judge = true;
for(int i=0; i<x; i++){
if((y - 4 * i) == (2 * (x - i))){
judge=true;
break;
}
}
if(judge)cout << "Yes" << endl;
else cout << "No" << endl;
}
