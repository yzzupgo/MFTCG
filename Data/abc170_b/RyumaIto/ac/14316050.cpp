#include<bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
for(int i = 0; i < 100000; i++){
if(4 * i > Y){
break;
}
if(i > X){
break;
}
if((Y - 4 * i) / 2 == X - i && (Y - 4 * 1) % 2 == 0){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
