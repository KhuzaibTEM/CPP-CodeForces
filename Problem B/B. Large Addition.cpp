#include <bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for (int i = a; i <= b; i++)
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
    cin >> lim;
    REP(i,1,lim) {
        str num;
        ll size;
        bool flag,check = false;

        cin >> num;
        size = num.size() - 1;
        
        REP(j,0,size) {
            REP(k,5,9) {
                flag = false;
                REP(l,5,9) {
                    if (num == "") {
                        flag = true;
                        break;
                    }
                    elif (to_string(stoll(num) - (k + l)).back() == '0') {
                        num = to_string(stoll(num) - (k + l));
                        num.pop_back();
                        flag = true;
                        break;
                    }
                }
                if (flag) break;
            }
            if (flag == false) {
                cout << "NO" << endl;
                check = true;
                break;
            }
        }
        if (num == "") cout << "YES" << endl;
        elif (!check) cout << "NO" << endl;
        check = false;
    }
}
