#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin >> x >> y;
for(int i = 0; i <= x; i++){
int two = i;
int four = x-i;
if(two*2+four*4 == y){
cout << "YES";
return 0;
}
}
cout << "NO";
return 0;
}
