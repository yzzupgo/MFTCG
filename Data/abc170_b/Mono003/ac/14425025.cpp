#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
bool turukame = false;
for(int i=0;i<=X;i++){
int j = X-i;
if(4*i+2*j == Y){
turukame = true;
}
}
if(turukame){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
