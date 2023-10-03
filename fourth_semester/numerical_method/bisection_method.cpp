#include<iostream>
#include<cmath>
using namespace std;
#if 0
    cout << "Root finding using bisection method\n";
    cout << "Here tolerance meaning how many digit do you want after decimal\n";
#endif 
double function(double x)
{
    double output;
    output = pow(x, 2) - 2*x - 1;
    return output;
};
double bisection(double a, double b, double tolerance){
    while ((b-a)>tolerance){
        double mid = (a+b)/2;
        double function_output = function(mid);
        if(abs(function_output)<tolerance){
            return mid;
        }else{
            if((function(a) * function(mid)) < 0){
                b = mid;
            }else{
                a = mid;
            }
        }
    }
    return (a+b)/2;
}
double input(double x, double y, double tolerance){

    if((function(x)*function(y)) >= 0){
        throw std::invalid_argument("The root is not in the range of a and b.\nTry again....");
    }else{
        return bisection(x, y, tolerance);
    }
}
int main()
{
    while(true){
        try{
        double x, y, tolerance;
        cout << "Enter [a, b]:";
        cin >> x >> y;
        cout << "Enter tolerence:";
        cin >> tolerance;
        if(input(x, y, tolerance)){
            cout << input(x, y, tolerance) << "\n";
            break;
        }
        }catch(const std::exception& e){
            cerr << e.what() << '\n';
        }
    }
    return 0;
}
