
public class area_rect_sqr {
    public static void main(String[] args) {
        Area obj = new Area();
        System.out.println("Area of rectangle: "+obj.rect(5, 6));
        System.out.println("Area of square: "+obj.sqr(5));
    }
}

class Area {
    int rect(int l, int b){
        return l*b;
    }
    int sqr(int s){
        return s*s;
    }
}