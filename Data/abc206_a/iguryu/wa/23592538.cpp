#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int answer;
for(int i = 0; i < N; i++) {
if(i * (i + 1) / 2 >= N) {
answer = i;
break;
}
}
cout << answer << endl;
}
