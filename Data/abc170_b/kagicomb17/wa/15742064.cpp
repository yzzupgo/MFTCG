#include <bits/stdc++.h>
using namespace std;
int main(void){
int x,y;
int a = 0;
cin >> x >> y;
for(int i = 0; i < x; ++i){
if(2*(x-i) + 4*i == y){
cout << "Yes" << endl;
break;
}
else{
++a;
}
}
if(a == x){
cout << "No" << endl;
}
}
