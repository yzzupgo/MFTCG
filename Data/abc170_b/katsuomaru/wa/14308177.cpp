#include <bits/stdc++.h>
using namespace std;
int main() {
int N , M;
cin >> N >> M;
for (int i = 0; i < N; i++){
if( (i+1)*2+(N-i-1)*4 == M){
cout << "Yes" << endl ;
break;
}
if(i+1 == N){
cout << "No" << endl ;
}
}
}
