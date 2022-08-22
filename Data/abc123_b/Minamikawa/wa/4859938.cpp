#include<iostream>

using namespace std;

int main(void){
    int a[5];
    int b,b_b=10;
    int last;
    int val; 
    int time=0;

    for(int i=0;i<5;i++){
      cin >> a[i];
        }

    for(int i=0;i<5;i++){
        b = a[i]%10;
        if((b_b > b) && (b != 0)){
            b_b = b;
           last = b;
            cout << "#" << last << endl;
           }
           }

    for(int i=0;i<5;i++){
        val = a[i] % 10;
        cout  << "1 " << val << endl;
        if(val == 0){
            val = 0;
        }else{
            val = 10 - val;
            }
            cout << "2 " << val << endl;
        val = a[i] + val;

        time = time + val;
        cout << "!" << time << endl;
        }

        time = time - last;

        cout << time << endl;

return 0;
        }
