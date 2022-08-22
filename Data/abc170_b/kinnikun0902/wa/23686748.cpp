#include <bits/stdc++.h>
using namespace std;
int main() {
int X,Y;
cin >> X >> Y;
for(int i=0;i<=X;i++){
for(int j=0;j<=X;j++){
if(i+j == X){
if(2*i + 4*j == Y){
cout << "Yes" << endl;
}else {
cout << "No" << endl;
}
}
}
}
}
