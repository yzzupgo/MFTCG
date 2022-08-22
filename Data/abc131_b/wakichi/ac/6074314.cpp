#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;
int main(){
int N,L;
int sum=0;
int min=1000;
cin>>N>>L;
vector <int> apple(N);
for(int i=0;i<N;i++){
apple.at(i)=L+i;
sum+=apple.at(i);
if(apple.at(i)<0){
if(apple.at(i)*(-1)<abs(min))
min=apple.at(i);
}
if(apple.at(i)>0){
if(apple.at(i)<abs(min)){
min=apple.at(i);
}
}
if(apple.at(i)==0){
min=apple.at(i);
}
}
cout<<sum-min<<endl;
}
