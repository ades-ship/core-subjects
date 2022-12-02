interface printable {
    abstract void print();
}

class inter implements printable {
    public void print() {
        System.out.println("Hello");
    }

    public static void main(String args[]) {
        inter obj = new inter();
        obj.print();
        printable obj1 = new inter();
        obj1.print();
    }
}

interface Bank {
    float rateOfInterest();
}

class SBI implements Bank {
    public float rateOfInterest() {
        return 9.15f;
    }
}

class PNB implements Bank {
    public float rateOfInterest() {
        return 9.7f;
    }
}

class inter1 {
    public static void main(String[] args) {
        Bank b = new SBI();
        System.out.println("ROI: " + b.rateOfInterest());
        Bank pnb = new PNB();
        SBI ob=new SBI();
        System.out.println(pnb.rateOfInterest());

    }
}