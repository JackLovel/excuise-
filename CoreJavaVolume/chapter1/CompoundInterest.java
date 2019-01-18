package com.chapter1;

public class CompoundInterest
{
    public static void main(String[] args)
    {
        final double startRate = 10;
        final int rate = 6;
        final int yearRate = 10;

        // set interest rates to 10%~15%
        double[] interestRate = new double[rate];
        for(int j = 0; j < interestRate.length; j++)
            interestRate[j] = (startRate + j) / 100.0;

        double[][] balances = new double[yearRate][rate];

        // set initial balance to 10000
        for (int j = 0; j < balances[0].length; j++)
            balances[0][j] = 10000;

        for (int i = 1; i < balances.length; i++)
        {
            for (int j = 0; j < balances[i].length; j++)
            {
                // get last year's balances from previous rows
                double oldBalance = balances[i - 1][j];

                // computer interest
                double interest = oldBalance * interestRate[j];

                // computer this year's balances
                balances[i][j] = oldBalance + interest;
            }
        }

        // print one row of interest
        for (int j = 0; j < interestRate.length; j++)
            System.out.printf("%9.0f%%", 100 * interestRate[j]);

        System.out.println();

        // print balance table
        for(double[] row : balances)
        {
            // print table row
            for (double b : row)
                System.out.printf("%10.2f", b);

            System.out.println();
        }
    }
}
