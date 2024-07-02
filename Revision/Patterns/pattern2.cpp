
//    /\      /\
//   /  \    /  \
//  /    \  /    \
// /      \/      \
// now drawing the zig zag pattern 

// observed and finded a pattern to print the pattern that:-.
        // -if (i+j) % 4 == 0 && if((i == 2) & (j % 4 == 0)) then print("/")

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= n; j++) {
            if( (((i+j) % 4) == 0) || ( (i == 2 && (j % 4 == 0)) ) ) {
                cout << "*"; 
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
