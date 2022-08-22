#include <iostream>
using namespace std;

int main(){

    int a[5];
    int b[5];
    int sum = 0;
    int c[5];

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

    int min = b[0];
    
    for (int k = 1; k < 5; k++) {

        if (b[k] < min && b[k] != 0) {
            min = b[k];
        }
    }

    sum -= (10 - min);

    cout << sum << endl;

    return 0;
    
}