#include<bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
for(int i=0; i<=X; i++){
int j = X - i;
if(i*4 + j*2 == Y){
cout << "YES" << endl;
return 0;
}
}
cout << "NO" << endl;
}
