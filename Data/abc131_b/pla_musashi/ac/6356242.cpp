#include<bits/stdc++.h>
using namespace std;
int main(){
int N,L; cin >> N >> L;
int min = L;
for(int i=2;i<N+1;i++){
if(abs(min) > abs(L+i-1)) min = L+i-1;
}
int sum = 0;
for(int i=1;i<N+1;i++){
sum += L+i-1;
}
cout << sum - min << endl;
return 0;
}
