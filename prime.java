import java.util.Scanner;

public class prime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i,j,flag=0;
        for(j=n;j<=1000;j++) {
            for(i=2;i<j/2;i++) {
                if(j%i==0) {
                    flag=1;
                }
            }
            if(flag==0) {
                System.out.println(j);
            }
            flag=0;
        }



    }
        
}
