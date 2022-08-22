#include<iostream>
#include<vector>
using namespace std;
int main(){
int Num,Leg;
cin >> Num >> Leg;
bool flag = false;
for(int i=0; i<=Num; i++){
for(int j=0; j<=Num; j++){
if(2*i + 4*j == Leg) flag = true;
}
}
if(flag){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
