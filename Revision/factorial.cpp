//code for factorial of given number

#include <bits/stdc++.h>
using namespace std;

int fact(int);

int main() {
    int num;

    cin >> num;

    int res = fact(num);

    cout << "Factorial of " << num << " is: " << res << "\n";
    return 0;
}


int fact(int num) {
    int fact = 1;

    if(num == 0) return 1;
    else if(num == 1) return 1;
    else {
        for(int i = num; i >= 2; i--) {
            fact *= i;
        }
    }

    return fact;
} 