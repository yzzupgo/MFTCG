#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
int L;
cin >> N >> L;
if(L>=1){
cout << L*(N-1)+N*(N-1)*0.5 << endl;
}
else {
int sum=0;
for(int i=1;i<N+1;i++){
sum = sum + (L+i-1);
}
cout << sum <<endl;
}
}
