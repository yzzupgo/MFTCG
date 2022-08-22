#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
bool judge = false;
for(int i = 0; i <= x; i++){
if(y == 2*(x-i) + 4*i){
judge = true;
break;
}
}
if(judge){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
