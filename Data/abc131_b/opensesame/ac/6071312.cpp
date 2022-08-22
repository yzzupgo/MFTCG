#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
int N;
cin >> N;
int L;
cin >> L;
int A=abs(L);
for(int i=0; i<N; i++){
if(abs(A)>abs(L+i))A = L+i;
}
cout << (N*L+0.5*(N-1)*N - A) << endl;
return 0;
}
