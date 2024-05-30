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
    int lim,lines;
    str password;
    bool flag;
 
    flag = true;
 
    cin >> lim;
    REP(i,1,lim) {
        cin >> lines;
        cin >> password;
        REP(j,0,password.size() - 1) {
            if (isalnum(password[j])) {
                if (j > 0 && isdigit(password[j - 1]) && isdigit(password[j])) {
                    if (password[j - 1] > password[j]) {
                        cout << "NO" <<endl;
                        flag = false;
                        break;
                    }
                } elif (j > 0 && isalpha(password[j - 1]) && isdigit(password[j])) {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                } elif (j > 0 && isalpha(password[j - 1]) && isalpha(password[j])) {
                    if (password[j - 1] > password[j]) {
                        cout << "NO" <<endl;
                        flag = false;
                        break;
                    }
                }
            } else {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
        flag = true;
    }
}
