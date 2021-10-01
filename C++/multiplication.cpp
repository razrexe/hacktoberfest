#include<iostream>
using namespace std;

int main() {
     int num;
     cout << "Enter the numbers to be multiplied: " << endl;
     cin >> num;

     int result = 1;
     while (num != -1) {
          result *= num;
          cin >> num;
     }
     cout << "Multiplication of all numbers is: " << result << endl;


     return 0;
}
