#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int x,y; cin >> x >> y;
if((x * 4 - y)%2==0&&x * 4 - y > 0){
cout << "Yes" << endl;
}
else{
cout << "No"<<endl;
}
}
