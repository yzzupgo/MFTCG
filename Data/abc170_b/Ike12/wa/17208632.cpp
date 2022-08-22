#include <bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >> X >> Y;
for(int i=0; i<X; i++){
Y = Y - 4*i;
if(Y == 2*(X - i)) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
