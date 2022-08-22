#include <bits/stdc++.h>
using namespace std;
int digit(int n){
int count=0;
while(n!=0){
count++;
n=n/10;
}
return count;
}
int main(){
int n;
cin>>n;
if(digit(n)==1){
cout<<n<<endl;
}
if(digit(n)==2){
cout<<9<<endl;
}
if(digit(n)==3){
cout<<9+n-99<<endl;
}
if(digit(n)==4){
cout<<900+9<<endl;
}
if(n==100000){
cout<<90909<<endl;
}
return 0;
}
