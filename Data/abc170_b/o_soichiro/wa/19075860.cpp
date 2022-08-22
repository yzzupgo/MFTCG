#include<bits/stdc++.h>
using namespace std;
int main(){
int a, b;
cin >> a >> b;
bool f = false;
for(int i = 0; i <= a; i++){
if(i * 2 + (a - i) * 4 == b){
f = true;
break;
}
}
cout << f;
}
