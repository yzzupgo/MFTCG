#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L, Total, Min, min;
cin >> N >> L;
vector<int> apple(N);
for (int i=0; i<N; i++){
apple.at(i) = L+i;
Total += apple.at(i);
}
min = 100000;
for (int i=0; i<N; i++){
if (abs(L+i) < Min){
Min = abs(L+i);
min = L+i;
}
}
Total -= min;
cout << Total << endl;
}
