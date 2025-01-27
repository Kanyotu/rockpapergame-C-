import java.util.Scanner;

public class rockpaper {
    public static String compdecision() {
        String[] choices = { "rock", "paper", "scissors" };
        int random = (int) (Math.random() * 3);
        return choices[random];
    }

    public static String userdeci() {
        Scanner ax = new Scanner(System.in);
        System.out.print("Enter your choice: ");
        String choice = ax.nextLine();
        choice = choice.toLowerCase();
        return choice;
    }

    public static String compare(String user, String comp) {
        String result = new String();
        if (user == comp) {
            result = "It's a tie!";

        }
        if (user.equals("rock")) {
            if (comp.equals("scissors")) {
                result = "You win!";

            } else {
                result = "You lose!";

            }
        }
        if (user.equals("paper")) {
            if (comp.equals("rock")) {

                result = "You win!";
            } else {
                result = "You lose!";
            }
        }
        if (user.equals("scissors")) {
            if (comp.equals("paper")) {
                result = "You win!";
            } else {
                result = "You lose!";
            }
        }
        return result;

    }

    public static void main(String[] args) {
        int count = 0;
        int compcount = 0;
        int usercount = 0;
        System.out.println("Welcome to the rock paper scissors game!");
        System.out.println("rock beats scissors, scissors beats paper, paper beats rock");
        while (count < 3) {
            String user = userdeci();
            if (!user.equals("rock") && !user.equals("paper") && !user.equals("scissors")) {
                System.out.println("Invalid choice, try again");
                continue;
            }
            String comp = compdecision();
            System.out.println("Computer chose: " + comp);
            System.out.println(compare(user, comp));
            if (compare(user, comp).equals("You win!")) {
                usercount++;
            } else {
                compcount++;
            }
            count++;
            System.out.println("chances left: " + (3 - count));
        }
        System.out.println("**Game over!**");
        System.out.println("User score: " + usercount);
        System.out.println("Computer score: " + compcount);
        if (usercount > compcount) {
            System.out.println("You win the game!");
        } else if (usercount < compcount) {
            System.out.println("Computer wins the game!");

        } else {
            System.out.println("It's a tie!");
        }

    }
}
