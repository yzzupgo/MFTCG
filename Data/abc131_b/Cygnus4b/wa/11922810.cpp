#include <bits/stdc++.h>
using namespace std;
int TasteOfApple(int N, int L){
vector<int>a(N);
int taste=0;
for(int i=0;i<N;i++){
a.at(i)=L+i-1+1;
taste += a.at(i);
}
int MinZeroOrMore=1000;
for(int i=0;i<N;i++){
if(a.at(i)>=0){
MinZeroOrMore=min(a.at(i),MinZeroOrMore);
}
}
return taste-MinZeroOrMore;
}
int main(){
int N,L; cin >> N >> L;
cout << TasteOfApple(N,L) << endl;
return 0;
}
