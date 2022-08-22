#include <bits/stdc++.h>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
int sum = N * L;
for(int i = 1; i <= N - 1; i++){
sum += i;
}
int sum2 = sum - (L + 1 - 1);
for(int i = 2; i <= N - 1; i++){
int sum3 = sum - (L + i - 1);
if(abs(sum2 - sum) > abs(sum3 - sum)){
sum2 = sum3;
}
}
cout << sum2 << endl;
}
