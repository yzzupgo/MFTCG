#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int a;
int b = 0;
a = x * 2;
for(int i = 0; i < x + 1; i++){
if(a == y){
cout << "Yes" << endl;
b = 1;
break;
}
a = a + 2;
}
if(b == 0)cout << "No" << endl;
}
