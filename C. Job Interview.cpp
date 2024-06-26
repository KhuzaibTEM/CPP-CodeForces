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


int main(){
    int lim;
    cin >> lim;
    REP(i,1,lim) {
        ll n,m,temp,temp2,m_spare,n_spare,total = 0;
        bool flag = false;
        cin >> n >> m;

        m_spare = m;
        n_spare = n;
        vector<ll> v1,v2,v_bin;
        vector<tuple<ll,ll,ll>> v;
        REP(j,0,n+m) {
            cin >> temp;
            v1.push_back(temp);
        }
        REP(k,0,n+m) {
            cin >> temp2;
            if (!flag && n_spare == 0 && temp2 < v1[k]) {
                v_bin.push_back(0);
                v.push_back({v1[k], temp2,k});
                flag = true;
            }
            elif (!flag && m_spare == 0 && temp2 > v1[k]) {
                v_bin.push_back(1);
                v.push_back({v1[k], temp2, k});
                flag = true;
            }
            elif (temp2 > v1[k]) {
                if (m_spare > 0) {
                    v_bin.push_back(1);
                    total += temp2;
                    m_spare--;
                }
                elif (n_spare > 0) {
                    v_bin.push_back(0);
                    total += v1[k];
                    n_spare--;
                }
                else v_bin.push_back(1);
            }
            else {
                if (n_spare > 0) {
                    v_bin.push_back(0);
                    total += v1[k];
                    n_spare--;
                }
                elif (m_spare > 0) {
                    v_bin.push_back(1);
                    total += temp2;
                    m_spare--;
                }
                else v_bin.push_back(0);
            }
            v2.push_back(temp2);
        }
        REP(l,0,n+m) {
            if (v_bin[l] == 1 && l != get<2>(v[0])) {
                cout << total - v2[l] + get<1>(v[0])  << " ";
            }
            elif (v_bin[l] == 0 && l != get<2>(v[0])) {
                cout << total - v1[l] + get<0>(v[0]) << " ";
            }
            else {
                cout << total << " ";
            }
        }
        cout << "\n";
    }
}
