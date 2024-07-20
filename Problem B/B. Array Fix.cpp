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
    REP(i, 1, lim) {
        ll size;
        bool flag = false, check = true, sorted = true;;
        cin >> size;

        str arr[size];
        REP(j, 0, size - 1) cin >> arr[j];

        ll b[2 * size];
        ll b_size = 0;
        b[b_size++] = stoll(arr[size - 1]);

        REV(k, size - 1, 1) {
            if (stoll(arr[k - 1]) > b[b_size - 1]) {
                if (arr[k - 1].size() > 1) {
                    b[b_size++] = (arr[k - 1][1] - '0');
                    b[b_size++] = (arr[k - 1][0] - '0');
                } 
                else b[b_size++] = stoll(arr[k - 1]);
            } 
            else b[b_size++] = stoll(arr[k - 1]);
        }

        REP(l,1,b_size - 1) {
            if (b[l] > b[l - 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
