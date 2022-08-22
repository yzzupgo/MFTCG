#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main(){
int N,L;
cin >> N >> L;
int answer=N*L+(N*(N-1)/2);
int Min=200000;
for(int i=1;i<=N;i++){
Min=min(Min,abs(L+(i-1)));
}
if(L>0 || abs(L)<=N){
answer-=Min;
}
else{
answer+=Min;
}
cout <<answer <<endl;
return 0;
}
