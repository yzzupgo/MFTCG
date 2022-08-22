#include <bits/stdc++.h>
using namespace std;
int main() {
int N,L;
cin >> N >> L;
vector<int> A(N);
for(int i=0;i<N;i++){
A[i]=L+i;
}
int t = 0;
for(int i=0;i<N;i++){
t = t + A[i];
}
for(int i=0;i<N;i++){
if(A[i]==0){
cout << t << endl;
break;
}else if(t < 0){
cout << t - A[N-1] << endl;
break;
}else if(t > 0){
cout << t - A[0] << endl;
break;
}
}
}
