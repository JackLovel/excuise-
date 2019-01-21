import java.util.Arrays;
import java.util.Scanner;

public class LotteryDrawing
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);

        System.out.println("How many numbers do you need to draw?");
        int k = in.nextInt();

        System.out.println("What is the highest number you can draw? ");
        int n = in.nextInt();

        // fill an array with
        int[] numbers = new int[n];
        for(int i = 0; i < numbers.length; i++)
            numbers[i] = i + 1;

        int[] result = new int[k];
        for(int i = 0; i < result.length; i++)
        {
            // make a random index between 0 and n -1
            int r = (int)(Math.random() * n);
            result[i] = numbers[r];

            numbers[r] = numbers[n - 1];
            n--;
        }

        // print the sorted array
        Arrays.sort(result);
        System.out.println("Bet all following combination. It'll make your rich!");
        for(int r : result)
            System.out.println(r);
    }
}