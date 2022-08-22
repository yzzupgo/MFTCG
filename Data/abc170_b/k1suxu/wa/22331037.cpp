#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
int x,y;
cin >> x >> y;
for(int i = 1; i < 101; i++){
if(4 * x - 4 * i == y){
cout << "Yes";
exit(0);
}
}
cout << "No";
return 0;
}
