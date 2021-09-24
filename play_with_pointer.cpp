#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int x = 10;
    int *s = &x;

    cout << x << endl;
    cout << s << endl;

    return 0 ;
}