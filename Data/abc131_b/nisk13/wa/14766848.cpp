#include <bits/stdc++.h>
using namespace std;
int zet(int x){
if(x < 0) x*= (-1);
return x;
}
int main(){
int N, L;
cin >> N >> L;
int sum = (L - 1)* N + N*(N+1)/2;
int mini = 1000000;
int x = 0;
for(int i = 1; i <= N; i++){
mini = min(mini, zet(L - 1 + i));
if(mini = L - 1 + i);
x = i;
}
cout << sum - L + 1 - x << endl;
}
