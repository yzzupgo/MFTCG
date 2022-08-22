#include <bits/stdc++.h>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
vector<int> ap(N, L);
int sum = 0;
for(int i = 0; i < N; i++){
ap[i] += (i - 1);
sum += ap[i];
}
int X = 1000;
for(int i = 0; i < N; i++){
X = min(X, abs(ap[i]));
}
sum -= X;
cout << sum << endl;
}
