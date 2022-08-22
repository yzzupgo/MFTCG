#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
bool YNflag = false;
cin >> x >> y;
for(int i = 0; i < x + 1; i++){
for(int j = 0; j < x + 1 - i; j++){
if(y == 2 * i + 4 * j && x == i + j){
YNflag = true;
break;
}
}
}
YNflag ? cout << "Yes" : cout << "No";
cout << endl;
}
