#include<bits/stdc++.h>
using namespace std;
#if 0
    cout << "Newton Rapson Method";
#endif
double functionofx(double x)
{
    return (pow(x, 2) - 7*x + 2);
}
double derivative_function(double x)
{
    return (2*x - 7);
}
double NewtonRaphsonMethod(double x0, double tolerence)
{
    double x1;
    while(true){
        x1 = (x0 - ((functionofx(x0))/derivative_function(x0)));
        if(fabs(x1-x0) < tolerence){
            return x1;
        }
        x0 = x1;
    }
}
int main()
{
    double intial_value;
    cout << "Enter Intial Value: ";
    cin >> intial_value;
    cout << "The Root is " << NewtonRaphsonMethod(intial_value, 0.000001) << endl;
    //cout << fixed << setprecision(5) << functionofx(NewtonRaphsonMethod(intial_value, 0.000001)) << endl;
    return 0;
}