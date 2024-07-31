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

    REP(i,0,lim - 1) {
        str s;
        char temp;
        bool flag = true;
        ll num = 0;
        cin >> s;

        vector<char> v(s.size() + 1);
        REP(j,0,s.size()) {
            v[j + num] = s[j];
            if (j > 0 && flag) {
                if (v[j - 1] == v[j]) {
                    if (v[j] != 'a') {
                        temp = v[j];
                        v[j] = 'a';
                        v[j + 1] = temp;
                        num = 1;
                        flag = false;
                        cout << 'a';
                    }
                    else {
                        temp = v[j];
                        v[j] = 'b';
                        v[j + 1] = temp;
                        num = 1;
                        flag = false;
                        cout << 'b';
                    }
                }
                elif (j != s.size() || num == 1) cout << v[j];
            }
            else cout << v[j];
            
        }
        if (num == 0) {
            if (v[s.size() - 1] != 'a') cout << 'a';
            else cout << 'b';
        }
        cout << "\n";
    }
}
