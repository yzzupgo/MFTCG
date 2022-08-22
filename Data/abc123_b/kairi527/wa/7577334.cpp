#include<bits/stdc++.h>
using namespace std;
int main(){
    int dish[5];
    int mi = INT_MAX, index = 0;
    for(int i = 0; i < 5; i++){
        cin >>  dish[i];
        if(mi > dish[i]%10 && dish[i]%10 != 0){
            mi = dish[i]%10; index = i;
        }
    }
    int sum = 0;
    for(int i = 0; i < 5; i++){
        if(i != index){
            sum += dish[i];
            sum += 10-dish[i]%10;
        }
    }
    sum += dish[index];
    cout << sum  << endl;

}