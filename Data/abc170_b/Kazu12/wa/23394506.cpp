#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,flag=0;
cin >> a >> b;
for(int i=1;i<a+1;i++){
int box=0;
box += i*2;
box += (a-i)*4;
if(box == b){
flag ++;
break;
}
}
if(flag==1) cout << "Yes" << endl;
else cout << "No" << endl;
}
