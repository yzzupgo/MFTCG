#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int legs = 0;
for(int i=0; i<=x; i++){
int j = x - i;
legs = 2*i + 4*j;
if(legs == y){
cout << "Yes" << '\n';
return 0;
}
}
cout << "No" << '\n';
return 0;
}
