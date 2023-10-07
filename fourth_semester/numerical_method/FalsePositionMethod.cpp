#include<iostream>
#include<cmath>
using namespace std;
#if 0
    cout << "Root finding using false position method\n";
    cout << "Here tolerance meaning how many digit do you want after decimal\n";
#endif 
double function(double x)
{
    double output;
    output = pow(x, 2) - 2*x - 1;
    return output;
};
double FalsePositionMethod(double x0, double x1, double tolerance){
    auto calcuate = [](double x0, double x1)->double
    {
        return (x0-((function(x0)*(x1-x0))/(function(x1)- function(x0))));
    };
    double x2 = calcuate(x0, x1);
    while(fabs(function(x2)) > tolerance){
        x2 = calcuate(x0, x1);
        if(function(x0) * function(x2) > 0){
            x0 = x2;
        }else{
            x1 = x2;
        }
    }
    return x2;
}
double input(double x, double y, double tolerance){

    if((function(x)*function(y)) >= 0){
        throw std::invalid_argument("The root is not in the range of a and b.\nTry again....");
    }else{
        return FalsePositionMethod(x, y, tolerance);
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

