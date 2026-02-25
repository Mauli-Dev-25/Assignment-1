import java.util.Scanner;

public class question_9 {
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Number:-");
        int num=sc.nextInt();

        System.out.println("\n given number:-"+num);
        System.out.println("binary equivalent:-"+ Integer.toBinaryString(num));
        System.out.println("Ocatal equivalent:-"+ Integer.toOctalString(num));
        System.out.println("Hexadecimal Equivalent:-"+ Integer.toHexString(num));

    }
}
