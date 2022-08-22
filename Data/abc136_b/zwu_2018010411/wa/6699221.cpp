#include<bits/stdc++.h>
using namespace std;
int main(){
int n,n1;
cin >> n1;
n=n1;
int t=0;
while(n1/10){
n1=n1/10;
t++;
}
if(t==5){
cout <<"90909";
}else if(t==4){
cout <<9+900+n%10000+1;
}else if(t==3){
cout <<9+900;
}else if(t==2){
cout <<9+n%100+1;
}else if(t==1){
cout <<"9";
}else{
cout<<n%10;
}
}
