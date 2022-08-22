#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
int x,y;
cin >> x >> y;
if(4 * x < y) {
cout << "No";
exit(0);
}else{
if(y % 4 == 0 || y % 4 == 2) {
cout << "Yes";
exit(0);
}
}
cout << "No";
return 0;
}
