#include <bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
int ans = 0;
for(int i = 0; i <= 100; i += 1){
for(int j = 0; j <= 100; j += 1){
if(2*i + 4*j == Y && i + j == X){
cout << i << " " << j << endl;
ans = 1;
}
}
}
if(ans == 1){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
