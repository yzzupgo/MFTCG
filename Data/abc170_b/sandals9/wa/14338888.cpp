#include <bits/stdc++.h>
using namespace std;
int main(){
int x ,y;
cin >>x>>y;
if (2*x ==y){cout <<"Yes";}
else if(4*x ==y){cout <<"Yes";}
else if((y-(2*x))/2 <= x && (y-(2*x))%2 == 0){cout << "Yes";}
else{cout <<"No";}
return 0;
}
