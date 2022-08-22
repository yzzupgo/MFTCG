#include <bits/stdc++.h>
using namespace std;
int main (){
int x,y;
cin>> x;
cin >> y;
for(int i = 1; i<= y; i++){
for(int i = 1; i<= y; i++){
if((i*2) + ((x-i)*4) == y){
cout << "Yes";
} else {
cout <<"No";
}
}
}
return 0;
}
