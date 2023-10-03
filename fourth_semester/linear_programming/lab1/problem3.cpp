#include<bits/stdc++.h>
using namespace std;
#if 0
    cout << "Quark0.5:A";
#endif
auto solve = []()
{
    int n, k;
    cin >> n >> k;
    int count_k=0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a==k){
            count_k++;
        }
    }
    cout << ((count_k)?"YES":"NO") << '\n';
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
