import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        while(scanner.hasNextInt()){
            int t = scanner.nextInt();
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            BigInteger left = BigInteger.valueOf(t);
            BigInteger right = BigInteger.valueOf(t);
            left = left.pow(a);
            right = right.pow(b);

            left = left.subtract(BigInteger.valueOf(1));
            right = right.subtract(BigInteger.valueOf(1));

            BigInteger[] values =  left.divideAndRemainder(right);

            System.out.print("(" + t + "^" + a +"-1)/("+ t +"^" + b + "-1) ");
            if(values[0].toString().length() < 100 && values[1].compareTo(BigInteger.valueOf(0)) == 0){
                System.out.println(values[0]);
            }else{
                System.out.println("is not an integer with less than 100 digits.");
            }
        }
    }
}
