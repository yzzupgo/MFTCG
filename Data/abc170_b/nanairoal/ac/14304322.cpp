#include<iostream>
#include<vector>
using namespace std;
int main(){
int Num,Leg;
cin >> Num >> Leg;
bool flag = false;
for(int i=0; i<=Num; i++){
if(2*i + 4*(Num-i) == Leg) flag = true;
}
if(flag){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
