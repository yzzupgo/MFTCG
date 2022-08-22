#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
int L;
cin >> N >> L;
int un =0;
int sa =1000000000;
for(int i=1;i<N+1;i++){
if(abs(L+i-1)<sa){
un = i;
sa = abs(L+i-1);
}
}
int sum = 0;
for(int i=1;i<N+1;i++){
if(i==un) sum = sum+0;
else sum = sum + (L+i-1);
}
cout << sum << endl;
}
