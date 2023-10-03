#include<iostream>
using namespace std;
#if 0
    cout << "Quark0.5:A";
#endif 
auto solve = []
{
    int n;
    cin >> n;
    int ps, pe, result = -1;
    auto check = [](int s, int e, int ps, int pe)->int
    {
        return ((ps<=s && pe<=e)?-1:ps);
    };
    bool bl = false;
    for(int i=0;i<n;i++)
    {
        int s, e;
        cin >> s >> e;
        if(i==0){
            ps = s;
            pe = e;
        }
        else{
            int x = check(s, e, ps, pe);
            if(x==-1){
                bl = true;
            }else{
                result = x;
            }
        }
    }
    cout << (bl?-1:result) << '\n';
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
