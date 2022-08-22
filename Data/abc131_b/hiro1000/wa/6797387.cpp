#include<iostream>
#include<vector>
#define rep(i,N) for(int i=0; i<N; i++)
using namespace std;
int main(){
int N,L ; cin >> N >> L;
vector<int> a(N);
int s = 0;
rep(i,N){
a[i] = L + i - 1;
s += a[i];
}
int ans = 1e9;
rep(i,N){
int t = s - a[i];
if(abs(s-t) < abs(ans-s)) ans = t;
}
cout << ans << endl;
}
