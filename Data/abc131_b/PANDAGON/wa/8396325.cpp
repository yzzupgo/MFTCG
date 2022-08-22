#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
int main(){
int N,L;
cin >> N >> L;
int aji = 0;
int lost = 1000;
for(int i=0;i<N;++i){
aji += L + i;
lost = min(lost,abs(L+i));
}
cout << aji-lost<<endl;
}
