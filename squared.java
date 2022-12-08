
import java.util.Scanner;
public class squared {

  public static void main(String[] args) {
    
    Scanner input = new Scanner(System.in);
    int L = input.nextInt();
    
    if(L < 2000)
        System.out.print(L*L);
  }

}
