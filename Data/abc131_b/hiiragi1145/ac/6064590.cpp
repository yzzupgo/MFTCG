#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
int answer;
if(L >= 0){
answer = (2*L+N)*(N-1)/2;
}
else if(L < 0 && L+N-1 >= 0){
answer = (2*L+N-1)*N/2;
}
else{
answer = (2*L+N-2)*(N-1)/2;
}
cout << answer << endl;
}
