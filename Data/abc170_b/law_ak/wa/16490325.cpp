#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main (){
int X, Y;
cin >> X >> Y;
int i;
bool ans = false;
for(i=1;i<=X;i++){
if(i * 2 + (X - i) * 4 == Y){
ans = true;
break;
}
}
if(ans){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
