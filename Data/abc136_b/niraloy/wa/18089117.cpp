#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int c=n;
int counter=0;
while(c>0){
c=c/10;
counter=counter+1;
}
cout<<counter<<endl;
int number=0;
for(int i=1;i<counter;i=i+2){
number=number+(9*pow(10,i-1));
}
if(counter%2!=0){
number=number+(n-pow(10,counter-1))+1;
}
cout<<number<<endl;
}
