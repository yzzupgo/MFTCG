#include<iostream>
#include<algorithm>
#include<vector>
#include <iomanip>
#include <cmath>
#include <string.h>
#include <stdio.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
bool kumiawase = true;
for(int i=0; i<X; i++){
if(Y == 2*(X-i)+4*i){
cout << "Yes" << endl;
kumiawase = false;
break;
}
}
if(kumiawase)
cout << "No" <<endl;
return 0;
}
