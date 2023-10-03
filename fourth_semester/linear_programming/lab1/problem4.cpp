#include<bits/stdc++.h>
using namespace std;
#if 0 
    cout << "Quark0.5:A";
#endif
auto solve = []()
{
    int n;
    cin >> n;
    int data[n];
    for(int &x:data) cin >> x;
    int find;
    if(data[0]>1){
        find = 1;
    }else{
        find = 2;
    }
    for(int i=1;i<n;i++)
    {
        if((data[i]-find)==1){
            find += 2;
        }else{
            find++;
        }
    }
    cout << find << '\n';
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
