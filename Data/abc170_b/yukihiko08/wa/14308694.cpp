#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
int kame,turu;
bool ans = false;
cin >> x >> y;
for(int i=1;i<x;i++){
kame = i * 4;
turu = (x-i) * 2;
if((kame+turu)==y){
ans = true;
break;
}
}
if(ans)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
