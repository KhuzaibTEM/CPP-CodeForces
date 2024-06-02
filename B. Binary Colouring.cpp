#include <bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for (int i = a; i <= b; i++)
#define REV(i,a,b) for (int i = a; i >= b; i--)
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



int solve(){
    return 0;
}

int main(){
    int lim;
    ll x;
    cin >> lim;
    REP(i,1,lim) {
        ll remain;
        cin >> x;
        remain = x;

        ll value = pow(2,ll(log2(x)));
        int arr[ll(log2(x)) + 2];
        arr[0] = 0;
        

        REP(j,1,ll(log2(x)) + 1) {
            if (remain >= pow(2,ll(log2(x)) - j + 1)) {
                remain -= pow(2,ll(log2(x)) - j + 1);
                arr[j] = 1;
            } else arr[j] = 0;
        }
        ll count = 0, k = ll(log2(x)) + 1;
        while (k >= 0) {
            
            if (arr[k] == 1 && arr[k - 1] == -1 && k >= 1) {
                arr[k] = -1;
                arr[k - 1] = 0;
                count = 0;
            } 
            elif (arr[k] == -1 && arr[k - 1] == 1 && k >= 1) {
                arr[k] = 1;
                arr[k - 1] = 0;
                count = 0;
            } 
            else {
                if (arr[k] == 1) count++;
                if (arr[k] == 0 || (k == 0 && arr[k] == 1)) {
                    if (count > 1) {
                        REV(l,count,0) {
                            if (l == count) arr[k + l] = -1;
                            elif (l == 0) arr[k] = 1;
                            else arr[k + l] = 0;
                        }
                        count = 0;
                    }
                    else count = 0;
                }
            }
            k--;
            if (k < 0) {
                REV(m,ll(log2(x)), 0) {
                    if ((arr[m] == -1 && arr[m - 1] == 1 && m >= 1) || (arr[m] == 1 && arr[m - 1] == -1 && m >= 1) || (arr[m] == 1 && arr[m - 1] == 1 && m >= 1)) {
                        k = ll(log2(x));
                        break;
                    }
                }
            }
        }
        ll arrlen = sizeof(arr) / sizeof(arr[0]);
        if (arr[0] == 0) cout << arrlen - 1 << endl;
        else cout << arrlen << endl;
        
        REV(n,ll(log2(x)) + 1, 0) {
            if (arr[0] == 0) {
                if (n != 0) cout << arr[n] << " ";
            } 
            else cout << arr[n] << " ";
            
        }
        cout << "\n";
    }
}
