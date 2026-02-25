 import java.util.Scanner;

public class question_15 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String str = sc.nextLine();

        str = str.toUpperCase();   // ignore case

        int[] count = new int[26];

        for(int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);

            if(ch >= 'A' && ch <= 'Z') {
                count[ch - 'A']++;
            }
        }

        for(int i = 0; i < 26; i++) {
            if(count[i] > 0) {
                System.out.println((char)(i + 'A') + " : " + count[i]);
            }
        }

        sc.close();
    }
}

 
    

