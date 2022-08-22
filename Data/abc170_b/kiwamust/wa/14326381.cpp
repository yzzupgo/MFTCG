#include <bits/stdc++.h>
using namespace std;
int main(){
long int X,Y;
cin >> X >> Y;
for(long int t=0;t<=X;t++){
for(long int k=0;k<=X;k++){
if(t+3*k==Y-X){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
