#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
for(int i=0;i<=X+2;i++){
for(int j=0;j<=X+2;j++){
if(2*i+4*j==Y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
