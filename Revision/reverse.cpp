#include <bits/stdc++.h>
using namespace std;

int reverseNum(int);

int main() {
    int num;
    cin >> num;
    int rev = reverseNum(num);
    cout << "Reverse of " << num << " is: " << rev << endl;

    return 0;
}

int reverseNum(int num) {         //function for reversing the number
    int rev = 0;
    while(num != 0) {                      
        int rem = num % 10;          //finding rem
        rev = rev * 10 + rem;       // making the reverse number
        num = num/10;
    }
    return rev;
}