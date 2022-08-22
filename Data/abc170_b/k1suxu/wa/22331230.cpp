#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
int x,y;
for(int i = 0; i <= x; i++){
if(2 * i + 4 * (x - i) == y){
cout << "Yes";
exit(0);
}
}
cout << "No";
return 0;
}
