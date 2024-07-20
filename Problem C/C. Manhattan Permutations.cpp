#include <bits/stdc++.h>
using namespace std;
 
#define REP(i,a,b) for (ll i = a; i <= b; i++)
#define REV(i,a,b) for (ll i = a; i >= b; i--)
#define elif else if
#define lb lower_bound
#define ub upper_bound
 
//#define or ||          \\                //    ||    ||    \\    //
//#define and &&          \\      /\      //     ||    ||     \\  //
//                         \\    //\\    //      ||____||      \\//
//                          \\  //  \\  //       ||____||       //
//                           \\//    \\//        ||    ||      //
//                            \/      \/         ||    ||     //
 
typedef string str;
typedef long long ll;
typedef long double ld;
typedef vector<int> vti;
typedef vector<str> vts;



int main() {
    int lim;
    cin >> lim;
    
    REP(i,1,lim) {
        ll n,k,max_total = 0;
        cin >> n >> k;

        ll max_count = n, min_count = 1, arr[n + 1];
        for (ll j = 1,l = n; j <= n, l > 0; j++,l--) {
            arr[j] = j;
            max_total += abs(l - j);
        }

        if (k % 2 != 0 || k > max_total) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            ll total = (n + n - 2);
            while (k > 0) {
                if (total <= k) {
                    k -= total;
                    total -= 4;
                    swap(arr[max_count], arr[min_count]);
                    min_count++;
                    max_count--;
                }
                else {
                    total -= 2;
                    min_count++;
                }
            }
            REP(m,1,n) cout << arr[m] << " ";
            cout << "\n";
        }
    }
}
