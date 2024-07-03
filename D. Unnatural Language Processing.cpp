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
        ll size,count = 0;
        str word,ans = "";
        cin >> size;
        cin >> word;
        REP(j,0,size - 1) {
            count++;
            if ((word[j] == 'b' || word[j] == 'c' || word[j] == 'd') && word[j + 1] != 'a' && word[j + 1] != 'e' && count == 3) {
                if (ans[ans.size() - 1] != word[j - 2]) ans.push_back(word[j - 2]); 
                ans.push_back(word[j - 1]); 
                ans.push_back(word[j]);
                if (j != size - 1) ans.push_back('.');
                count = 0;
            }
            elif ((word[j] == 'a' || word[j] == 'e') && count == 3) {
                ans.push_back(word[j - 1]); 
                ans.push_back(word[j]); 
                if (j != size - 1) ans.push_back('.');
                count = 0;
            }
            elif (count == 3) {
                if (ans[ans.size() - 1] != word[j - 2]) ans.push_back(word[j - 2]); 
                ans.push_back(word[j - 1]); 
                ans.push_back('.');
                ans.push_back(word[j]);
                count = 1;
            }
            elif (count == 2 && j == size - 1) {
                if (ans[ans.size() - 1] != word[j - 1]) ans.push_back(word[j - 1]);
                ans.push_back(word[j]);
            }
        }
        cout << ans << endl;
    }
}
