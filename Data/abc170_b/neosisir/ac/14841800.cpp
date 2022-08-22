#include <bits/stdc++.h>
using namespace std;
auto printvec = [](vector<int>& vi){
cout << "--- Printing vector ---\n";
for(int& v:vi){
cout << v << '\n';
}
};
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int x, y;
cin >> x >> y;
if(y&1){
cout << "No" << endl;
return 0;
} else {
if( y>=2*x && y<= 4*x){
cout << "Yes" << endl;
return 0;
} else {
cout << "No" << endl;
}
}
return 0;
}
