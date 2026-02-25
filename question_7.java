 public class question_7 {
    public static void printTable(String[] args) {
        if (args.length == 0) {
            System.out.println("Please provide a number.");
            return;
        }
        int num = Integer.parseInt(args[0]);
        for (int i = 1; i <= 10; i++) {
            System.out.println(num + " * " + i + " = " + (num * i));
        }
    }

    public static void main(String[] args) {
        printTable(args);
    }
} 
    

