abstract class Shape {
    abstract void draw();

    abstract void arinjay();
}

// In real scenario, implementation is provided by others i.e. unknown by end
// user
class Rectangle extends Shape {
    void draw() {
        System.out.println("drawing rectangle");

    }

    void arinjay() {
    };
}

class Circle1 extends Shape {
    void draw() {
        System.out.println("drawing circle");
    }

    void arinjay() {
    };
}

class demo {
    void arinjay() {
        System.out.println("adesh");
    };
}

// In real scenario, method is called by programmer or user
class abstractClass {
    public static void main(String args[]) {
        Shape s = new Circle1();// In a real scenario, object is provided through method, e.g., getShape()
                                // method
        Shape obj = new Rectangle();
        obj.draw();
        s.draw();
        Circle1 t = new Circle1();
        t.draw();
        demo t1 = new demo();
        t1.arinjay();
    }
}
