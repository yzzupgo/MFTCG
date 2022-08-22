#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
int main(){
int X,Y; cin >> X >> Y;
for(int i=1;i<100;i++){
for(int j=1;j<100;j++){
if(2*i+4*j == Y && i+j == X){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
