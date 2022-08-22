#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X>>Y;
bool frag=true;
while(Y>-1){
if(Y%2==1){
break;
}
else if(Y/2==X){
frag=false;
break;
}
else if(Y/4&&Y%4==0){
frag=false;
break;
}
else{
X--;
Y-=2;
}
}
if(frag){
cout << "No" <<endl;
}
else {
cout << "Yes"<< endl;
}
}
