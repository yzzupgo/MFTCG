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
if(L<0){
if(abs(L)>N){
answer-=L+(N-1);
}
}
else if(L>=0){
answer-=L;
}
cout <<answer <<endl;
return 0;
}
