#include <bits/stdc++.h>
using namespace std;
 
typedef string str;
typedef vector<int> vti;
typedef vector<str> vts;
 
int main(){
    vti ans = {0,0,0};
    int a;
    int b;
    int c;
    int d;
    cin >> a;
    for (int i = 0; i < a; ++i){
        cin >> b;
        cin >> c;
        cin >> d;
        ans[0] += b;
        ans[1] += c;
        ans[2] += d;
    }
    if (ans[0] == 0 && ans[1] == 0 && ans[2] == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
