#include <bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
ios
int x, y;
cin >> x >> y;
for(int i = 0; i <= x; i ++){
for(int j = 0; j <= x; j ++){
if(i*2 + j*4 == y){
cout << "Yes";
return 0;
}
}
}
cout << "No";
return 0;
return 0;
}
