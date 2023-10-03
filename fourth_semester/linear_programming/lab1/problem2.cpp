#include<bits/stdc++.h>
using namespace std;
#if 0
    cout << "Quark0.5:B";
#endif
auto solve = []()
{
    int n;
    cin >> n;
    int a=2, b=3, c=4;
    cout << a << " " << b << " ";
    for(int i=2;i<n;i++){
        while((c*3)%(a+b)==0) c++;
        cout << c << " ";
        a=b;
        b=c;
        c++;
    }
    cout << '\n';
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int test;
    cin >> test;
    while(test--) solve();
    return 0;
}
