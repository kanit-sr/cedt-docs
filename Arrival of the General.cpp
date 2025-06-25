#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int mxpos = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[mxpos]) {  
            mxpos = i;
        }
    }
    
    int mnpos = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[mnpos]) {  
            mnpos = i;
        }
    }
    
    int swapmx = mxpos;
    int swapmn = (n - 1) - mnpos;  
    
    int totalswap; 
    if (mxpos > mnpos) { 
        totalswap = swapmx + swapmn - 1;
    } else {
        totalswap = swapmx + swapmn;
    }
    
    cout << totalswap << endl;
    
    return 0;
}
