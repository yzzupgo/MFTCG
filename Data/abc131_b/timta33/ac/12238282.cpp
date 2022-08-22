#include <bits/stdc++.h>
using namespace std;
int main(){
int N, L;
cin >> N >> L;
int total;
total = N*L + N*(N+1)/2 -N;
int i;
if (-L+1 <= 0)
i = 1;
else if (-L+1 > N)
i = N;
else
i = -L+1;
int result;
result = total - (L+i-1);
cout << result << endl;
}
