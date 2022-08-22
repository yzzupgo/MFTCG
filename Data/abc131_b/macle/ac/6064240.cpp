#include <bits/stdc++.h>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
int sum = 0;
for(int i = 0; i < N; i++){
sum += L + i;
}
int min_a = L;
for(int i = 0; i < N; i++){
if(abs(min_a) > abs(L + i)) min_a = L + i;
}
cout << sum - min_a << endl;
}
