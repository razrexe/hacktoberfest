//Fastest way to calculate the power of any number
#include <iostream>
using namespace std;
#define MOD 1000000007

int fastPow(int a, int b){
    long  res = 1;
    while(b>0){
        if((b%2)!=0){
            res = (res%MOD * a%MOD)%MOD;
        }
        a = (a%MOD * a%MOD)%MOD;
        b = b / 2;
    }
    return res;
}

int main(){
    cout << fastPow(2, 3) << endl;
    return 0;
}