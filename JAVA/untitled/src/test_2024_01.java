class Soojebi {
    static private Soojebi instance = null;
    private int count = 0;
    static public Soojebi get() {
        if (instance == null) {
            instance = new Soojebi();
            System.out.println(instance);
        }
        return instance;
    }
    
    public void count() { count++; }
    public int getCount() { return count; }
}

public class test_2024_01 {
    public static void main(String[] args) {
        Soojebi s1 = Soojebi.get();
        s1.count();
        System.out.println("s1 : " + s1);
        System.out.println(s1.getCount());
        
        Soojebi s2 = Soojebi.get();
        s2.count();
        System.out.println("s2 : " + s2);
        System.out.println(s2.getCount());
        
        Soojebi s3= Soojebi.get();
        s3.count();
        System.out.println("s3 : " + s3);
        System.out.println(s3.getCount());
        
        System.out.println("s1 : " + s1 + " s2 : " + s2 + " s3 : " + s3);

        System.out.println(s1.getCount());
    }
}
