#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int count=0;
for(int i=1;i<=n;i++){
if (i<10){
++count;
cout<<i<<endl;
}
else{
int b=i;
int keta=0;
while(b !=0){
++keta;
b/=10;
}
if((keta)%2 !=0)++count;
}
}
cout<<count<<endl;
return 0;
}
