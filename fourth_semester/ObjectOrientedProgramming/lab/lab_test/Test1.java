class Person{
    String name;
    int age;
    double height;
    int weight;
    public void average_age(int age1, int age2, int age3){
        double x = (double) ((age1 + age2 + age3)/3);
        System.out.println("Average Age:"+ x);
    }
    public void BMI(double height, int weight){
        double x = ((double) weight)/(height*height);
        System.out.println("BMI: "+ x);
    }
    Person(String name, int age, double height, int weight){
        this.name = name;
        this.age = age;
        this.height = height;
        this.weight = weight;
    }

}
public class Test1{
    public static void main(String[] args) {
        Person akash = new Person("Akash", 20, 1.72, 102);
        Person rudra = new Person("Rudra", 19, 1.82, 65);
        Person nazia = new Person("Nazia", 18, 1.5, 50);
        System.out.println("OUTPUT");
        System.out.println("Name: "+akash.name+"\nage: "+ akash.age);
        akash.BMI(akash.height, akash.weight);
        System.out.println("Name: "+rudra.name+"\nage: "+ rudra.age);
        akash.BMI(rudra.height, rudra.weight);
        System.out.println("Name: "+nazia.name+"\nage: "+ nazia.age);
        akash.BMI(nazia.height, nazia.weight);
        akash.average_age(akash.age, rudra.age, nazia.age);
    }
}