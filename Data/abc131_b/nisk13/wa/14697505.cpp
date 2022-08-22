#include <bits/stdc++.h>
using namespace std;
int zettai(int x){
if(x < 0) x *= (-1);
return x;
}
int main() {
int N, L;
cin >> N >> L;
int sum = L*N + N*(N+1)/2 - N;
int mini = 10000;
for(int i = 1; i <= N; i++){
mini = min(mini,zettai(L+i-1));
}
cout << sum - mini << endl;
}
