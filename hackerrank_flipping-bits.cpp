#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned int flipDaBits(unsigned int n) {
    return ~n;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    unsigned int in;
    cin >> T;
    for (int i=0; i<T; i+=1) {
        cin >> in;
        cout << flipDaBits(in) << endl;
    }
    return 0;
}
