import java.util.Scanner;

class Armstrong {
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter any number:");
    int a = sc.nextInt();
    int sum=0;
    int temp = a;
    while(a>0)
    {
        int b = a%10;
        sum = sum + b*b*b;
        a=a/10;

    }
    if(sum==temp) {
        System.out.println("It is an armstrong number");  }
    else  {
        System.out.println("It is not an armstrong number");  }    
    sc.close();
}
}