#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int cnt=0;
for(int i=1;i<=n;i++){
if(i<10||(99<i&&i<1000)||(9999<i&&i<100000)){cnt++;}
}
cout<<cnt<<endl;
return 0;
}
