#include <bits/stdc++.h>
using namespace std;
int b=0;
int main() {
int N, L;
cin >>N>>L;
vector<int> apple(N);
vector<int> apple_abs(N);
int mini=9999;
int mini_idx;
for(int i; i<N; i++){
apple[i] = L+i;
b += (L+i);
if(L+i>=0){
apple_abs[i] = L+i;
}else{
apple_abs[i] = -(L+i);
}
if(apple_abs[i] < mini){
mini = apple_abs[i];
mini_idx = i;
}
}
cout << (b-apple[mini_idx]) << endl;
}
