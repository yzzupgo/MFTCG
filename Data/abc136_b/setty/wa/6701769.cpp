#include <bits/stdc++.h>
using namespace std;
int main(){
int N; cin >> N;
int c=0;
for (int i= 1;i<N;i*=100) {
if (i*10<=N) c+= i*9;
else if(N/i>1) c+=(N/i-1)*(i*9)+(N-(N/i)*i+1);
else c += N-(N/i)*i+1;
}
cout << c << "\n";
}
