#include<bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
cin >> X >>Y;
for(int i = 0;i<=X;i++){
int tmp = X - i;
if(2*4 * tmp == Y){cout << "Yes" << endl;return 0;}
}
cout <<"No" << endl;
}
