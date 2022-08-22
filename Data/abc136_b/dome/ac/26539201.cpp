#include <bits/stdc++.h>
using namespace std;
int main() {
int N; cin >> N;
int count=1, res=0;
for(int i=1; i<=N; ++i){
int j=i;
while(j/10 != 0){
j /= 10;
count++;
}
if (count % 2 == 1) res++;
count = 1;
}
cout << res << endl;
}
