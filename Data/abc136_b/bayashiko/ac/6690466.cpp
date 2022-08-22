#include<bits/stdc++.h>
using namespace std;
int upcmp(const void *p,const void *q){
return *(int*)p-*(int*)q;
}
int downcmp(const void *p,const void *q){
return *(int*)q-*(int*)p;
}
int main(void){
int N;
cin >> N;
if(N<=9){
cout << N << endl;
}
else if(N>=10 && N<=99){
cout << "9" << endl;
}
else if(N>=100 && N<=999){
cout << N-90 << endl;
}
else if(N>=1000 && N<=9999){
cout << "909" << endl;
}
else if(N>=10000 && N<=99999){
cout << N-9090 << endl;
}
else{
cout << "90909" << endl;
}
}
