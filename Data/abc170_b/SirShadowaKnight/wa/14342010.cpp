#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,temp1=0,temp2=0; cin>>a>>b;
temp2=a;
bool ans=false;
for(int i = 0; i<a; i++){
temp1=i;
temp2=a-i;
if((temp1*2+temp2*4)==b){
ans=true;
}
}
if(ans==true){
cout << "Yes";
}
else{
cout << "No";
}
}
