#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
ll N,L;
cin>>N>>L;
int sum(0);
if (L>=0){
for (int i(L+1);i<L+N;i++) sum+=i;
cout << sum << endl;
return 0;
} else if (L+N>0){
for (int i(L);i<L+N;i++) sum+=i;
cout << sum << endl;
return 0;
}else{
for (int i(L);i<L+N-1;i++) sum+=i;
cout << sum << endl;
return 0;
}
return 0;
}
