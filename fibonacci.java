import java.util.Scanner;

public class fibonacci {
    public static void main(String[] args) {
        int j=0,k=1,i,series;
        int num=0;
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        System.out.printf("\n%d\n%d\n",j,k);
        for(i=1;i<=num-2;i++)
        {
            series = j+k;
            System.out.println(series);
            j=k;
            k=series;
        }
        sc.close();
    }
    
}
