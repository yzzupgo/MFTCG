#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
int main(void){
cin.tie(0);
ios::sync_with_stdio(false);
int N,L;
cin >> N >> L;
int sum = 0;
for(int i = 1;i <= N;i++){
sum += L + i -1;
}
if(L <= 0 && 0 <= L + N - 1 ){
cout << sum << endl;
}else{
if(L <= 0){
cout << sum - (L+N-1) << endl;
}else{
cout << sum - (L) << endl;
}
}
return 0;
}
