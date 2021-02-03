import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int x = scn.nextInt();

        for (int i = 0; i < x; i++) {
            int t = scn.nextInt();
            int flag = 1;
            for (int j = 2; j * j <= t; j++) {
                if (t % j == 0) {
                    System.out.println("not prime");
                    flag = 0;
                    break;
                }

            }
            if (flag == 1)
                System.out.println("prime");


        }


        // write ur code here

    }
}
