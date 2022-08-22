#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
int N,L;
cin >> N >> L;
vector<int> LL(N);
int mintaste=1000;
int ans=0;
int Ntaste=0;
for(int i=0; i<N; i++){
LL.at(i) = L+i;
Ntaste += LL.at(i);
if(mintaste > abs(LL.at(i)) ){
mintaste = LL.at(i);
}
}
cout << Ntaste - mintaste;
}
