mv class Student{
    String name;
    int id;
    static String university_name = "NUBTK";
    Student(String name, int id) {
        this.name = name;
        this.id = id;
    }
    void display()
    {
        System.out.println("Name "+ name);
        System.out.println("ID " + id);
    }
    static void display1(){
        System.out.println("Thsis is first static method");
        university_name = "KU";
    }
    static void display2(){
        System.out.println("this is second static method");
    }

}
public class Practice{
    public static void main(String[] args) {
        Student student = new Student("Rahul", 819);
        System.out.println("Student university "+ Student.university_name);
    }
}