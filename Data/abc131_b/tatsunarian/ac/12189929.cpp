#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin>>N>>L;
int sum;
vector<int>Taste(N);
vector<int>ABS(N);
for(int i=0;i<N;i++){
Taste.at(i)=L+i;
sum=sum+Taste.at(i);
ABS.at(i)=abs(Taste.at(i));
}
int mini=ABS.at(0);
int mark=sum;
for(int i=0;i<N;i++){
if(ABS.at(i)==min(ABS.at(i),mini)){
mini=ABS.at(i);
mark=sum-Taste.at(i);
}
}
cout<<mark<<endl;
}
