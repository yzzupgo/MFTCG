#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int realsum;
for(int i=1; i<=n; i++){
realsum += l + i - 1;
}
int min = abs(l);
int a = l;
for(int i=1; i<=n; i++){
if(min > abs(l + i - 1)) {
min = abs(l + i - 1);
a = l + i - 1;
}
}
cout << realsum - a << endl;
}
