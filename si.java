import java.util.Scanner;

public class si {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter principle: ");
        int p = sc.nextInt();
        System.out.print("Enter rate: ");
        double r = sc.nextDouble();
        System.out.print("Enter time: ");
        int t = sc.nextInt();
        double result = (p*r*t)/100;
        System.out.print("\n"+result);
        sc.close();

    }
    
}
