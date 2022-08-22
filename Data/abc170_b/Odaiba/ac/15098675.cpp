#include<bits/stdc++.h>
using namespace std;
int main(){
int X;
int Y;
cin >> X >> Y;
int i,j;
if(Y % 2 == 1|| 2 * X > Y){
cout << "No" << endl;
return 0;
}
for(i = X;i >= 0;i--){
if(2 * i > Y){
continue;
}else{
if((Y - 2 * i) % 4 == 0 && (Y - 2 * i) / 4 + i == X){
cout << "Yes" << endl;
return 0;
}else{
continue;
}
}
}
cout << "No" << endl;
}
