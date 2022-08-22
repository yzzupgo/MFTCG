#include <bits/stdc++.h>
using namespace std;
int main() {
int N , M;
cin >> N >> M;
for (int i = 0; i <= N; i++){
if( (i)*2+(N-i)*4 == M){
cout << "Yes" << endl ;
break;
}
if(i == N){
cout << "No" << endl ;
}
}
}
