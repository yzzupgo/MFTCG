#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
int ans = y - 2 * x;
if(ans % 2 == 0 && y >= 0 && ans/2 < x){
cout << "Yes" << endl;
}else cout << "No" << endl;
return 0;
}
