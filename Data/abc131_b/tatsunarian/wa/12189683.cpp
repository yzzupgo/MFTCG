#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin>>N>>L;
int sum;
vector<int>Taste(N);
for(int i=0;i<N;i++){
Taste.at(i)=L+i;
sum=sum+Taste.at(i);
}
int APP=sum;
for(int i=0;i<N;i++){
APP=min(APP,sum-Taste.at(i));
}
cout<<APP<<endl;
}
