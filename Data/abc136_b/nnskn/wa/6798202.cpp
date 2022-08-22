#include <iostream>
using namespace std;
int main(void){
int N;
cin >> N;
int n=0;
for(int i=0;i<N;i++){
if(0<i&& i<10){
n++;
}
else if(99<i && i<1000){
n++;
}
else if(9999<i&& i<100000){
n++;
}
}
cout << n;
}
