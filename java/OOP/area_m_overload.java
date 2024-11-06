
public class area_m_overload {
    public static void main(String[] args) {
        Area a = new Area();
        a.area(5, 6);
        a.area(5);
        a.area(5.0f);

    }
}

class Area {
    public void area(int a, int b){
        System.out.println("Area of rectangle is: "+(a*b));
    }

    public void area(int a){
        System.out.println("Area of square is: "+(a*a));
    }

    public void area(float r){
        System.out.println("Area of circle is: "+(3.14*r*r));
    }
}