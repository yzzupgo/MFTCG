#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L;
cin>>N>>L;
int min=1000000;
int answer=0;
int count=0;
vector<int>data(N);
for(int i=0; i<N; i++){
data.at(i)=L+i;
count+=data.at(i);
if(abs(data.at(i))<min){
min=data.at(i);
answer=i+1;
}
}
cout<<count-min<<endl;
}
