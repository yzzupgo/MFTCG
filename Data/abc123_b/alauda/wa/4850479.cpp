#include<iostream>
#include<algorithm>
using namespace std;
int main(){
        int a[5];
        int flag,souwa = 0;
        int kettei =10;
        int last = 0;
        for(int i = 0; i < 5; i++){
                cin >> a[i];
                if(a[i] % 10 < kettei){
                        kettei = flag;
                        last = i;
                }
        }
        if(kettei == 10){
                kettei = 0;
        }
        for(int j = 0; j < 5; j++){
                if(j != last){
                        a[j] = a[j] + (10 - a[j] % 10);
                }
                souwa = souwa + a[j];
        }
        cout << souwa << "\n";
}