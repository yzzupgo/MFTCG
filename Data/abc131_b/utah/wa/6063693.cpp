#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L;
int sum;
int out;
cin >> N >> L;
for(int i = 1; i <= N; i++){
sum += L-1+i;
}
if(L <= 0){
cout << sum << endl;
}else if(L > 0){
cout << sum -L << endl;
}else if(L < N-1){
cout << sum-L-N+1 << endl;
}
return 0;
}
