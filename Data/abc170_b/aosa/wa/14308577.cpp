#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
int ans = 0;
cin >> x >> y;
for(int i = 1; i <= x; i++){
if((2 * i + 4 * (x - i)) == y){
ans = 1;
break;
}
}
if(ans == 1){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
