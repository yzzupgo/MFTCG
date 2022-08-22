#include <iostream>
using namespace std;

int main(){

    int a[4];
    int b[4];
    int sum = 0;
    int c[4];
    int han = 0;

    for (int i = 0; i < 5; i++){
        cin >> a[i];

        b[i] = a[i] % 10;
        c[i] = a[i] / 10;
    }    

    for (int j = 0; j < 5; j++){
        
        if (b[j] == 0){

            sum += c[j] * 10;
        }else {

            sum += c[j] * 10 + 10;
        }

    }
    
    cout << sum << endl;

    return 0;
    
}