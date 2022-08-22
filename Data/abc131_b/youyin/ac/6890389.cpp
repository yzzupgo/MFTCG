#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
ll N,L; cin >> N >> L;
if( 1 - N <= L && L <= 0){
cout << N*(L-1) + (N*(N+1))/2 << endl;}
else if( L > 0){
cout << N*(L-1) + (N*(N+1))/2 - L << endl;}
else if( L < ( 1 - N)){
cout << N*(L-1) + (N*(N+1))/2 - ( L + N - 1) << endl;}
return 0;}
