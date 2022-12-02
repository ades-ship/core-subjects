/*
import javax.sound.sampled.SourceDataLine;

public class exceptionHandling {
    public static void main(String args[]) {
        try {
            // code that may raise exception
            int data = 100 / 0;
        } catch (ArithmeticException e) {
            System.out.println(e);
        }
        // rest code of the program
        System.out.println("rest of the code...");

        String obj = null;
        System.out.println(obj.length());
        int a[] = new int[5];
        a[10] = 50;
        System.out.println(+a[10]);
        ;

    }

}

class TryCatchExample1 {

    public static void main(String[] args) {
        try {
            int data = 50 / 25; // may throw exception
        } catch (Exception e) {
            System.out.println(e);
        }

        System.out.println("rest of the code");

        System.out.println("adesh");

    }

}

class TryCatchExample5 {

    public static void main(String[] args) {
        try {
            int data = 50 / 0; // may throw exception
        }
        // handling the exception
        catch (Exception e) {
            // displaying the custom message
            System.out.println("Can't divided by zero");
        }
    }

}

class TryCatchExample7 {

    public static void main(String[] args) {

        try {
            // int data1=50/0; //may throw exception

        }
        // handling the exception
        catch (Exception e) {
            // generating the exception in catch block
            int data2 = 50 / 0; // may throw exception

        }
        System.out.println("rest of the code");
    }
}

class TryCatchExample8 {

    public static void main(String[] args) {
        try {
            int data = 50 / 0; // may throw exception

        }
        // try to handle the ArithmeticException using ArrayIndexOutOfBoundsException
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        }
        System.out.println("rest of the code");
    }

}

*/

import java.io.FileNotFoundException;
import java.io.PrintWriter;

class TryCatchExample10 {

    public static void main(String[] args) {

        PrintWriter pw;
        try {
            pw = new PrintWriter("ab.txt"); // may throw exception
            pw.println("saved");
        }
        // providing the checked exception handler
        catch (FileNotFoundException e) {

            System.out.println(e);
        }
        System.out.println("File saved successfully");
    }
}

class MultipleCatchBlock5 {
    public static void main(String args[]) {
        try {
            int a[] = new int[5];
            a[5] = 30 / 0;
            System.out.println(a[67]);
        } catch (Exception e) {
            System.out.println("common task completed");
        } catch (ArithmeticException e) {
            System.out.println("task1 is completed");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("task 2 completed");
        }
        System.out.println("rest of the code...");
    }
}

class TestFinallyBlock {
    public static void main(String args[]) {
        try {
            // below code do not throw any exception
            int data = 25 / 5;
            System.out.println(data);
        }
        // catch won't be executed
        catch (NullPointerException e) {
            System.out.println(e);
        }
        // executed regardless of exception occurred or not
        finally {
            System.out.println("finally block is always executed");
        }

        System.out.println("rest of phe code...");
    }
}



class exceptionHandling {
    public static void main(String args[]) {

        try {

            System.out.println("Inside the try block");

            // below code throws divide by zero exception
            int data = 25 / 0;
            System.out.println(data);
        }
        // cannot handle Arithmetic type exception
        // can only accept Null Pointer type exception
        catch (NullPointerException e) {
            System.out.println(e);
        }

        // executes regardless of exception occured or not
        finally {
            System.out.println("finally block is always executed");
        }

        System.out.println("rest of the code...");
    }
}