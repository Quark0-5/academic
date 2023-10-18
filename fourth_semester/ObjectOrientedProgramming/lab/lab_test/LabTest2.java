class compution{
    final double pi = 3.1416;
    double Area(double x, double y){
        return x*y;
    }
    int Area(int x){
        return x*x;
    }
    double Area(double r){
        return pi*r*r;
    }
}
public class LabTest2{
    public static void main(String[] args) {
        compution x = new compution();
        System.out.println("Area of Rectangle = "+ x.Area(5.0, 6.0));
        System.out.println("Area of Square = " +x.Area(5));
        System.out.println("Area of circle = " + x.Area(7.0));
        
    }
}