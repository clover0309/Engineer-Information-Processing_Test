class a{
    int num = 50;
    public a() {
        System.out.println("X");
    }
    public a(int n) {
        System.out.println("Y");
    }
    public void printnum() {
        System.out.println(num);
    }

class b extends a {
        int num = 100;
        public b() {
            System.out.println("A");
        }
        public b(int n) {
            super(n);
            System.out.println("B");
        }
        public void printnum(){
            System.out.println(num);
        }
class c extends b {
            int num = 200;
            public c(){
                System.out.println("C");
            }
            public c(int n){
                super(n);
                System.out.println("D");
            }
            public void printnum(){
                System.out.println(num);
            }
            public void show(){
                System.out.println("E");
            }
}

    public static void main(String[] args) {
        a a1 = new c();
        b b1 = new c(5);
        
    }
}
}

public class hochul {
}
