#include <bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int a, b, n;
    cin >> a >> b >> n;
    int data[n];
    for(auto &x:data) cin >> x;
    long long int time_delay = b;
    for(int i=0;i<n;i++) static_cast<long long> (time_delay+=min(data[i], a-1));
    cout << time_delay << '\n';
};
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int test;
    cin >> test;
    while(test--) solve();
    return 0;
}
