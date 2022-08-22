#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
for(int t=0;t<=X*5;t++){
for(int k=0;k<=X*5;k++){
if(t+3*k==Y-X){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
