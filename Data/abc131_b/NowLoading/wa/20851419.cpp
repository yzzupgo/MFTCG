#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L;
cin >> N >> L;
if(L>=0){
cout << N*(N+1)/2 + (N-1)*(L-1) - 1 << endl;
}
else if((-1)*L<=N){
cout << N*(N+1)/2 + N*(L-1) << endl;
}
else{
cout << N*(N+1)/2 + (N-1)*(L-1) - N << endl;
}
}
