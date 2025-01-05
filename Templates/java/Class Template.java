public class MyClass {
    private String name;

    public MyClass(String name) {
        this.name = name;
    }

    public void greet() {
        System.out.println("Hello, " + name + "!");
    }

    public static void main(String[] args) {
        MyClass obj = new MyClass("User");
        obj.greet();
    }
}

