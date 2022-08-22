#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin>>a;
int f[]={9,0,900,0,90000};
int c=a,count=0;
while(c>0){
count++;
c/=10;
}
if(count == 1){
cout<<a;
}
else if(count==2){
cout<<9;
}
else if(count==3){
cout<<9+(a-99);
}
else if(count==4)
cout<<909;
else if(a==100000){
cout<<90909;
}
else{
cout<<9+900+(a-9999);
}
return 0;
}
