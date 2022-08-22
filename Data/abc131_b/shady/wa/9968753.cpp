#include <bits/stdc++.h>
using namespace std;
int main(void){
int N,L;
cin >> N >> L;
int S = 0;
for(int i = 1; i <= N; i++){
S += (L + i - 1);
}
if(L > 0) cout << S - L << endl;
else if(L <0 && L + N >= 0) cout << S << endl;
else if(L == 0) cout << S << endl;
else cout << S - (L + N - 1) << endl;
}
