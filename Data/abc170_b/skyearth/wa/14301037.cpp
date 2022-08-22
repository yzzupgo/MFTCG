#include <bits/stdc++.h>
using namespace std;
int main(void){
int X,Y;
string ans="NO";
cin >> X >> Y;
int num_of_legs;
for(int i=0; i<=X; i++){
num_of_legs = 2*i+4*(X-i);
if(num_of_legs==Y) ans = "YES";
}
cout << ans << endl;
return 0;
}
