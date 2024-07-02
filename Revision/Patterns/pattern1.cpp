// \  /
//  \/  
//  we will be making this type of pattern in cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        for(int k = 2*4; k >= 2*i; k--) {
            cout << "  ";
        }
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


