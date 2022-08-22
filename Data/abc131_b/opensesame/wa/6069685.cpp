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
if(A>abs(L+i))A = abs(L+i);
}
cout << (N*L+(1.0/2.0)*(N-1)*N - A) << endl;
return 0;
}
