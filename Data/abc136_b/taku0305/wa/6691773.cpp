#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int N;
cin >> N;
if(N>=10000){
cout << 90909 << endl;
}else if(N>=10000 && N<100000){
cout << N-10000+1+909 << endl;
}else if(N>=1000 && N<10000){
cout << 909 << endl;
}else if(N>=100 && N<1000){
cout << N-100+1+9 << endl;
}else if(N>=10 && N<100){
cout << 9 << endl;
}else if(N>=1 && N<100){
cout << N+1 << endl;
}else{
cout << 0 << endl;
}
return 0;
}
