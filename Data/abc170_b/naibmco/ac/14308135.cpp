#include<bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
bool seigo = false;
for(int i = 0; i < X + 1; i++){
if(2*i+4*(X-i) == Y){
seigo = true;
break;
}
}
if(seigo == true){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
