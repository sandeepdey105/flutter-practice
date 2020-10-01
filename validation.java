import java.util.Scanner;

public class validation {

    public static int chkspc(String str)  {
        
        for(int i=0;i<=str.length();i++) {
            if(str.charAt(i)==' ') {
                return 1;
            }
            else {
                return 0;
            }
        }
        return 0;
    }

    public static int chkatr(String str) {
        for(int i=0;i<=str.length();i++) {
            if(str.charAt(i)=='@') {
                return 0;  }
            else {
                return 1;
            }     
            
        }
        return 0;
        
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
    }
    
}
