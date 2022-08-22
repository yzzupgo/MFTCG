#include<iostream>
#include<vector>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int y_sum = 2*x;
for(int i=0; i<x; i++){
if(y_sum==y){
cout << "Yes" << endl;
return 0;
}
y_sum += 2;
}
cout << "No" << endl;
}
