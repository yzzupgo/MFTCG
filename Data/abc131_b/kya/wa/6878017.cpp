#include <bits/stdc++.h>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
vector<int> ap(N, L);
int sum = 0;
int X = 10e9;
for(int i = 0; i < N; i++){
ap[i] += i;
sum += ap[i];
X = min(X, abs(ap[i]));
}
sum -= X;
cout << sum << endl;
}
