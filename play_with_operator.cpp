#include <bits/stdc++.h>

using namespace std;
//play_with_operator 1:37
int main() {
    
    int x=10;
   // cin>>x;
    int a= x++;
    int b= ++x;
    int c= x--;
    int d= --x;

    int rem= 12 % x;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<rem<<endl;
    //Boolean operator
    bool condition1 = 10 <= 3;
    bool condition2 = 10 < 3;
    bool condition3 = 10 == 3;
    bool condition4 = 10 >= 3;
    bool condition5 = 10 > 3;
    bool condition6 = 10 != 3;

    bool log1 = condition6 && condition5;
    bool log2 = condition3 || condition2;
    bool log3 = condition2 and condition1;
    bool log4 = condition4 or condition5;

    bool log5  = !condition2;
    bool log6 =  not condition2;

    cout<<log1<<" "<<log2<<" "<<log3<<" "<<log4<<" "<<log5<<" "<<log6<<endl;

    int m;
    int s = 10;
    int q = s + 3;
    //s += 3;
    //s  *= 3;
    //s %= 3;
     m /= 3;

    cout<<q<<" "<<m<<endl;

    //bitwise operator
    int y = 10 ^ 3;
    int z = 10 << 5;
    int k = 5 >> 1;
    int j = 5;
    int l ;
    l = ~j;

    cout<<y<<" "<<z<<" "<<k<<" "<<j<<" "<<l<< endl;
    //ternary operator
    int r = (10 <= 3) ? 5 : 6;
    cout<<r<<endl;
    return 0;

}