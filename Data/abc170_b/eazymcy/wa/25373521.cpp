#include<bits/stdc++.h>
using namespace std;
int main(){
int X, Y; cin >> X >> Y;
for(int t=0; t<=50; t++){
for(int k=0; k<=25; k++){
if(t+k == X && 4*t+2*k == Y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
