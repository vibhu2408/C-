//you will be given N number when N is odd among those number ,every no. appears twice but only one no.appears once
//find the unique number

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int result = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        result ^= x;
    }
    cout << result;
    return 0;
}