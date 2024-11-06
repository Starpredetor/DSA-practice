 
public class matrix_transpose {
    public static void main(String[] args) {
        int A[][] = {{1,2,3},{4,5,6},{7,8,9}};
        int B[][] = new int[3][3];

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                B[i][j] = A[j][i];
            }
        }

        System.out.println("Matrix A:");
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                System.out.print(A[i][j]+" ");
            }
            System.out.println();
        }

        System.out.println("Matrix B:");
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                System.out.print(B[i][j]+" ");
            }
            System.out.println();
        }
    }   
}
