
public class prime {
    boolean isprime(int n){
        for(int i=2; i <= n/2; i++){
            if(n == 1){
                return false;
            }
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {

        prime obj = new prime();

        for (int i=1; i<=100; i++){
            if(obj.isprime(i)){
                System.out.println(i);
            }
        }
    }    
}
