#include <bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
int ans = 0;
for(int i = 1; i < 50; i += 1){
for(int j = 1; j < 50; j += 1){
if(2*i + 4*j == Y && i + j == X){
ans = 1;
}
}
}
if(ans = 1){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
