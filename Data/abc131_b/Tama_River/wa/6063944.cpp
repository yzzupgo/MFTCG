#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
int sum = 0;
cin >> N >> L;
if(L > 0){
for(int i = 1; i < N; i++){
sum += L + i;
}
}
if(L < 0 && L + N - 1 >= 0){
for(int i = 0; i < N; i++){
sum += L + i;
}
}
if(L < 0 && L + N - 1 < 0){
for(int i = 0; i < N - 1; i++){
sum += L + i;
}
}
cout << sum << endl;
}
