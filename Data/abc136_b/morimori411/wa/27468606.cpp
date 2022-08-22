#include <bits/stdc++.h>
using namespace std;
int main(void){
int N;
cin >> N;
int answer = 0;
for(int i = 1; i < N; i++){
if((int)(log10(i) + 1) % 2 == 1){
answer++;
}
}
cout << answer << endl;
return 0;
}
