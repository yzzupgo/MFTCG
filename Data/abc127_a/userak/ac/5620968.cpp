#include <iostream>
using namespace std;
int N,n;
int main(){
cin >> N>>n;
if(6<=N&&N<=12){
n/=2;
}
else if(5>=N){
n=0;
}
cout <<n;
return 0;
}
