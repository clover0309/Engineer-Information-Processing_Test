class Parent {
    int x,y;
    
    // 인자값을 받는 기본생성자.
    Parent(int x, int y) {
        this.x = x;
        this.y = y;
    }

    int getA() {
        return x*y;
    }
}

class Child extends Parent {
    int x;
    
    // 인자값을 받는 기본생성자.
    Child(int x) {
        super(x+1, x);
    }

    int getA() {
        return x+x;
    }
}

public class test_2024_10 {
    public static void main(String[] args) {
        Parent parent = new Child(3);
        System.out.println(parent.getA());
    }
}
