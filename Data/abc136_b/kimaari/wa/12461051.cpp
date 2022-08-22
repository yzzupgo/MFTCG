#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int count =0;
for(int i=0; i<N; i++){
if(1<=i && i<=9){
count++;
}
else if(100<=i && i<=999){
count++;
}
else if(10000<=i && i<=99999){
count++;
}
}
cout << count << endl;
}
