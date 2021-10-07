#include <iostream>
using namespace std;
int main()
 {
    string s, rev, temp = "";
    cout << "Enter a string" << endl;
    getline(cin, s);
    
    string :: iterator.it;
    for(it = s.begin(); it = s.end(); i++) {
    rev = *it + rev;
    }
    
    cout << "Reverse of string" << rev << endl;
    
    temp = reverse(s.begin(), s.end());
    cout << "Reverse of string" << temp << endl;
    return 0;
}
    
