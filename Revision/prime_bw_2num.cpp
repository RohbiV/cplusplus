//in this we will need to print all the prime numbers that comes in the range of 2 numbers

#include <bits/stdc++.h>
using namespace std;

void printPrime(int);

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    for(int i = n1; i <= n2; i++) {
        printPrime(i);
    }

    return 0;
}

void printPrime(int num) {
    int flag = 0;
    for(int i = 2; i < sqrt(num); i++) {
        if(num % i == 0) flag = 1;
    }

    if(flag == 0) {
        cout << num << endl;
    }
}
