#include<iostream>
using namespace std;
int main (){
int r,D,x,next;
cin >> r >> D >> x;
next = x;
for( int i = 0; i < 10; i = i+1){
next = (next * r) - D;
cout << next << endl;
}
}
