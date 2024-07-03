// printing sequence of febonaaci

#include <bits/stdc++.h>
using namespace std;

void printFeb(int, int, int);

int main() {
    int num1 = 0;
    int num2 = 1;
    int length;

    cin >> length;
    if(length == 0) {
        cout << "Length of the sequence is 0" << "\n";
    }
    else{
        printFeb(num1,num2,length);
    }

    cout << "\n";

    return 0;
}

void printFeb(int n1, int n2, int len) {
    if(len == 1) cout << n1 << "\n";
    else if(len == 2) cout << n1 << " " << n2 << " ";
    else{
        cout << n1 << " " << n2 << " ";
        for(int i = 2; i < len; i++) {
            int sum = n1+n2;
            cout << n1+n2 << " ";
            n1 = n2;
            n2 = sum;
        }
    }
}

