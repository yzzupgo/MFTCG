#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c=1,d=0;
cin>>a>>b;
while(true){
if(c>=b) break;
c=c-1+a;
d++;
}
cout<<d<<" "<<c<<"\n";
}
