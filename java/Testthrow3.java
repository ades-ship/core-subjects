
// class represents user-defined exception  
import java.io.*;
import java.util.*;

class UserDefinedException extends Exception {
    public UserDefinedException(String str) {
        // Calling constructor of parent Exception
        super(str);
    }
}

// Class that uses above MyException
public class Testthrow3 {
    public static void main(String args[]) {
        try {
            // throw an object of user defined exception
            throw new UserDefinedException("This is user-defined exception");
        } catch (UserDefinedException ude) {
            System.out.println("Caught the exception");
            // Print the message from MyException object
            System.out.println(ude.getMessage());
        }
    }
}

// import java.io.*;
class M {
    void method() throws IOException {
        throw new IOException("device error");
    }
}

class Testthrows4 {
    public static void main(String args[]) throws IOException {// declare exception
        M m = new M();
        m.method();

        System.out.println("normal flow...");
    }
}

class TestThrow {
    // defining a method
    public static void checkNum(int num) {
        if (num < 1) {
            throw new ArithmeticException("\nNumber is negative, cannot calculate square");
        } else {
            System.out.println("Square of " + num + " is " + (num * num));
        }
    }

    // main method
    public static void main(String[] args) {
        TestThrow obj = new TestThrow();
        obj.checkNum(-3);
        System.out.println("Rest of the code..");
    }
}