#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int counter = 0;
int k = 1;
while(pow(10,k) < N){
if(k == 1) counter += 9;
else if(k % 2 == 1){
counter += (pow(10,k) - 1 - pow(10,(k - 1)));
}
k++;
}
k--;
if(k % 2 == 0) counter += (N + 1 - pow(10,k));
cout << counter << endl;
}
