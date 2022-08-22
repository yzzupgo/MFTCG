#include <bits/stdc++.h>
using namespace std;
int main(void){
int X,Y;
bool ans=false;
cin >> X >> Y;
int num_of_legs;
for(int i=0; i<=X; i++){
num_of_legs = 2*i+4*(X-i);
if(num_of_legs==Y) ans = true;
}
if(ans==true) cout << "YES" << endl;
else cout << "NO" << endl;
return 0;
}
