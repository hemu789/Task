interface print{
    void print();
}

class A implements print{
    public void printMeth(){
        System.out.println("Hello");
    }

    public static void main(String args[]){
        A obj = new A();
        obj.printMeth();
    }
}