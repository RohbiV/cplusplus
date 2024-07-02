#include <bits/stdc++.h>
using namespace std;

bool isPrime(int);


int main() {
    int num;
    cin >> num;
    bool res = isPrime(num);

    if(res) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}

bool isPrime(int num) {
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) return false;
    }

    return true;
}
