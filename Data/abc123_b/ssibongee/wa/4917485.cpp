#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[5];
    int sum = 0;
    for(int i = 0; i<5;i++){
        cin >> a[i];
    }
    for(int i = 4; i>0; i--){
        for(int j = 0; j<i; j++){
            if(a[j] % 10 < a[j+1] % 10)
                swap(a[j], a[j+1]);
        }
    }
    for(int i = 0; i<4; i++){
        sum += a[i];
        if(sum % 10 != 0)
            sum += (10 - sum % 10);
    }
    sum += a[4];
    cout << sum << endl;
    return 0;
}