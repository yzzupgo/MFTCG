#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cin>>a;
b = 0;
for(int i=1;i<=a;i++){
if(i>=0){
b++;
}
if(i>=100&&i<1000){
b++;
}
}
if(a==1000)
b++;
cout<<b<<endl;
return 0;
}
