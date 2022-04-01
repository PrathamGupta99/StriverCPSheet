#include <bits/stdc++.h> 
using namespace std;

void solve() {
    int n, ans = 0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if(s[0]=='+' || s[0]=='X'&&s[1]=='+')
            ans++;
        else
            ans--;
    }
    cout<<ans<<endl;
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
