// code for converting decimal to binary

#include <bits/stdc++.h>
using namespace std;

string dec_binary(int num) {
    string bin = "";
    while(num > 0) {
        int rem = num%2;
        bin = to_string(rem) + bin;
        num /= 2;
    }

    return bin;
}

int main() {
    int num;
    cout << "Enter decimal number: ";
    cin >> num;

    string res = dec_binary(num);
    cout << res << endl;
    
    return 0;
}