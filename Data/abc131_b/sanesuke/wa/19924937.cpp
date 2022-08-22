#include <bits/stdc++.h>
using namespace std;
int main(){
int N,L,T;
cin >> N >> L;
if(L < 0){
if(N+L > 0){
T = (L-1)*N + N*(N+1)/2;
}
else{
T = (L-1)*(N-1) + N*(N-1)/2;
}
}
else{
T = (L-1)*(N-1) + N*(N+1)/2 -L;
}
cout << T << endl;
}
