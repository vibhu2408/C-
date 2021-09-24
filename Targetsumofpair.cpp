#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    int n ;
    cin >> n;

    int arr[n];
    for(int  i = 0; i < n ; i++) 
        cin >> arr[i];

    sort(arr, arr+n);
    int s;
    cin >> s;
    int lo = 0, hi = n - 1;
    while (lo < hi){
        if(arr[lo] + arr[hi] > s) {
            hi--;
        }   else if(arr[lo] + arr[hi] < s) { 
                lo++;
        } else {
            cout << "Pair found"<<endl;
            return 0;
        }
    }

    cout << "Pair not found"<<endl;
    return 0 ;
}