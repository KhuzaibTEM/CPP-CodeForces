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
 
 
 
int solve() {
    return 0;
}
 
int main() {
    int lim;
    cin >> lim;
    REP(i,1,lim) {
        ll a,b,temp,row = 1,column = 1;
        vector<tuple<ll,ll,ll>> v;
        cin >> a >> b;
        REP(j,1,a * b) {
            cin >> temp;
            v.push_back({column,row,temp});
            row++;
            if (row > b) {
                row = 1;
                column++;
            }
        }
        ll max_num = 0;
        REP(k,0, a * b - 1) {
            max_num = 0;
            if (get<0>(v[k]) == 1) {
                if (get<1>(v[k]) != 1) {
                    if (get<1>(v[k]) == b) {
                        if (get<2>(v[k - 1]) < get<2>(v[k]) && get<2>(v[k + b]) < get<2>(v[k]) && k + b <= a * b - 1) {
                            max_num = max(max_num,get<2>(v[k - 1]));
                            max_num = max(max_num,get<2>(v[k + b]));
                            cout << max_num << " ";
                        }
                        elif (a == 1 && get<2>(v[k - 1]) < get<2>(v[k])) {
                            max_num = max(max_num,get<2>(v[k - 1]));
                            cout << max_num << " ";
                        }
                        else cout << get<2>(v[k]) << " ";
                    }
                    elif (get<2>(v[k - 1]) < get<2>(v[k]) && get<2>(v[k + 1]) < get<2>(v[k]) && get<2>(v[k + b]) < get<2>(v[k]) && k + b <= a * b - 1 && k + 1 <= a * b - 1) {
                        max_num = max(max_num,get<2>(v[k - 1]));
                        max_num = max(max_num,get<2>(v[k + 1]));
                        max_num = max(max_num,get<2>(v[k + b]));
                        cout << max_num << " ";
                    }
                    else {
                        if (a == 1 && get<2>(v[k - 1]) < get<2>(v[k]) && get<2>(v[k + 1]) < get<2>(v[k]) && k + 1 <= a * b - 1) {
                            max_num = max(max_num,get<2>(v[k - 1]));
                            max_num = max(max_num,get<2>(v[k + 1]));
                            cout << max_num << " ";
                        }
                        else cout << get<2>(v[k]) << " ";
                    }
                }
                elif (get<1>(v[k]) == 1) {
                    if (a == 1 && get<2>(v[k + 1]) < get<2>(v[k]) && k + 1 <= a * b - 1) {
                        max_num = max(max_num,get<2>(v[k + 1]));
                        cout << max_num << " ";
                    }
                    elif (get<2>(v[k + b]) < get<2>(v[k]) && get<2>(v[k + 1]) < get<2>(v[k]) && k + b <= a * b - 1 && k + 1 <= a * b - 1) {
                        max_num = max(max_num,get<2>(v[k + 1]));
                        max_num = max(max_num,get<2>(v[k + b]));
                        cout << max_num << " ";
                    }
                    else cout << get<2>(v[k]) << " ";
                }
            }
            elif (get<0>(v[k]) == a) {
                if (get<1>(v[k]) != 1) {
                    if (get<1>(v[k]) == b) {
                        if (get<2>(v[k - b]) < get<2>(v[k]) && get<2>(v[k - 1]) < get<2>(v[k])) {
                            max_num = max(max_num,get<2>(v[k - b]));
                            max_num = max(max_num,get<2>(v[k - 1]));
                            cout << max_num << " ";
                        }
                        else cout << get<2>(v[k]) << " ";
                    }
                    elif (get<2>(v[k - 1]) < get<2>(v[k]) && get<2>(v[k + 1]) < get<2>(v[k]) && get<2>(v[k - b]) < get<2>(v[k]) && k + 1 <= a * b - 1) {
                        max_num = max(max_num,get<2>(v[k - 1]));
                        max_num = max(max_num,get<2>(v[k + 1]));
                        max_num = max(max_num,get<2>(v[k - b]));
                        cout << max_num << " ";
                    }
                    else cout << get<2>(v[k]) << " ";
                }
                elif (get<1>(v[k]) == 1) {
                    if (b == 1 && get<2>(v[k - b]) < get<2>(v[k])) {
                        max_num = max(max_num,get<2>(v[k - b]));
                        cout << max_num << " ";
                    }
                    elif (get<2>(v[k - b]) < get<2>(v[k]) && get<2>(v[k + 1]) < get<2>(v[k]) && k + 1 <= a * b - 1) {
                        max_num = max(max_num,get<2>(v[k + 1]));
                        max_num = max(max_num,get<2>(v[k - b]));
                        cout << max_num << " ";
                    }
                    else cout << get<2>(v[k]) << " ";
                }
                
            }
            elif (get<1>(v[k]) == 1) {
                if (get<2>(v[k + 1]) < get<2>(v[k]) && get<2>(v[k - b]) < get<2>(v[k]) && get<2>(v[k + b]) < get<2>(v[k]) && k + b <= a * b - 1 && k + 1 <= a * b - 1) {
                    max_num = max(max_num,get<2>(v[k + 1]));
                    max_num = max(max_num,get<2>(v[k - b]));
                    max_num = max(max_num,get<2>(v[k + b]));
                    cout << max_num << " ";
                }
                else cout << get<2>(v[k]) << " ";
            }
            elif (get<1>(v[k]) == b) {
                if (get<2>(v[k - 1]) < get<2>(v[k]) && get<2>(v[k - b]) < get<2>(v[k]) && get<2>(v[k + b]) < get<2>(v[k]) && k + b <= a * b - 1) {
                    max_num = max(max_num,get<2>(v[k - 1]));
                    max_num = max(max_num,get<2>(v[k - b]));
                    max_num = max(max_num,get<2>(v[k + b]));
                    cout << max_num << " ";
                }
                else cout << get<2>(v[k]) << " ";
            }
            else {
                if ((get<2>(v[k + 1]) < get<2>(v[k])) && (get<2>(v[k - 1]) < get<2>(v[k])) && (get<2>(v[k + b]) < get<2>(v[k])) && (get<2>(v[k - b]) < get<2>(v[k])) && k + b <= a * b - 1 && k + 1 <= a * b - 1) {
                    max_num = max(max_num,get<2>(v[k + 1]));
                    max_num = max(max_num,get<2>(v[k - 1]));
                    max_num = max(max_num,get<2>(v[k + b]));
                    max_num = max(max_num,get<2>(v[k - b]));
                    cout << max_num << " ";
                }
                else cout << get<2>(v[k]) << " ";
            }
            if (get<1>(v[k]) == b) cout << "\n";
        }
    }
}
