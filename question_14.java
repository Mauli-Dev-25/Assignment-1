 public class question_14 {
        public static void main(String[] args) {

            String str = "1111";   // hard-coded string
            String rev = "";

            for(int i = str.length() - 1; i >= 0; i--) {
                rev = rev + str.charAt(i);
            }

            if(str.equals(rev))
                System.out.println("Palindrome");
            else
                System.out.println("Not Palindrome");
        }
    }

  

