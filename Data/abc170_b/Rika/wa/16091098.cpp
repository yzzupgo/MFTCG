#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
int main(){
int x, y;
cin >> x >> y;
for (int tsuru = 0; tsuru <= x; tsuru++) {
int kame = x - tsuru;
if (kame*4 + tsuru*2 == y) {
cout << "yes"<< endl;
return 0;
}
}
cout << "No" << endl;
}
