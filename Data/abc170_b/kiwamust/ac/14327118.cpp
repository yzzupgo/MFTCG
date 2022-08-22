#include <bits/stdc++.h>
using namespace std;
int main(){
long int X,Y;
cin >> X >> Y;
for(int t=0;t<=X;t++){
for(int k=0;k<=X;k++){
if(t+k==X&&2*t+4*k==Y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
