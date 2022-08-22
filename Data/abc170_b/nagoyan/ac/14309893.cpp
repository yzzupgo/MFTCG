#include<bits/stdc++.h>
using namespace std;
int x, y;
int main(void){
cin >> x >> y;
for(int i = 0; i <= x; i++){
int j = x-i;
if(2*i+4*j == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
