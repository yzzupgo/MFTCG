#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
bool turukame = false;
for(int i=0;i<=X;i++){
for(int j=0;j<=X-i;j++){
if(4*i+2*j == Y){
turukame = true;
}
}
}
if(turukame){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
