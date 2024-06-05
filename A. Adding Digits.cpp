//This code could be made shorter and at this time of my journey I can do it but I am too lazy

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
    ll b,n,count = 0,whil_count = 0;
    str a;
    bool flag = false;
    cin >> a >> b >> n;
    if (stoi(a) > b) {
        REP(j,0,9) {
            count++;
            if (stoll(a + to_string(j)) % b == 0) {
                a += to_string(j);
                if (n >= 2) {
                    REP(k,1,n - 1) {
                        a += '0';
                    }
                }
                cout << a << endl;
                break;  
            }
            elif (count == 10) cout << -1 << endl;
        }
    }
    else {
        if (a.size() + n < to_string(b).size()) cout << -1 << endl;
        else {
            while (whil_count < 10) {
                count++;
                if (b % stoll(a + to_string(whil_count)) == 0) {
                    a += to_string(whil_count);
                    if (to_string(b).size() <= a.size()) {
                        REP(k,1,n - 1) {
                            a += '0';
                        }
                        cout << a << endl;
                        break; 
                    }
                    else {
                        if (whil_count == 0 && to_string(b)[whil_count + 1] != '0') a.pop_back();
                    }
                    
                }
                elif (stoll(a + to_string(whil_count)) % b == 0) {
                    a += to_string(whil_count);
                    if (n >= 2) {
                        REP(k,1,n - 1) {
                            a += '0';
                        }
                    }
                    cout << a << endl;
                    break; 
                }
                elif (count == 10) cout << -1 << endl;
                whil_count++;
            } 
        }
    }
}
