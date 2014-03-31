import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int count = 1;
        while(true){
            int N = scanner.nextInt();
            int F = scanner.nextInt();

            if(N == 0 && F == 0){
                break;
            }
            BigInteger sum = BigInteger.valueOf(0);
            for(int i = 0; i < N; i++){
                sum = sum.add(scanner.nextBigInteger());
            }

            System.out.println("Bill #" + (count++) + " costs " + sum + ": each friend should pay " + sum.divide(BigInteger.valueOf(F)));
            System.out.println();
        } 
    }
}
