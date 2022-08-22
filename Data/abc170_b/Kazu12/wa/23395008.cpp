#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b,flag=0;
cin >> a >> b;
for(int i=0;i<101;i++){
for(int j=0;j<101;j++){
if(i+j == a && i*2+j*4 == b)
flag ++;
break;
}}
if (flag >=1) cout << "Yes" << endl;
else cout << "No" << endl;
}
