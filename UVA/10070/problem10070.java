import java.io.*;
import java.util.*;
import java.math.*;

class Main {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int counter = 0;

        while( scanner.hasNextLine() ){
            String input = new StringBuilder(scanner.nextLine()).toString();
            BigInteger year = new BigInteger(input);
            boolean isOrdinaryNumber = true;

            if( counter != 0 ){
                System.out.println();
            }

            boolean isALeapYear = isLeapYear( year );
            if( isALeapYear ){
                System.out.println("This is leap year.");
                isOrdinaryNumber = false;
            }

            if( isHuluculu( year ) ){
                System.out.println("This is huluculu festival year.");
                isOrdinaryNumber = false;
            }

            if( isALeapYear && isBulukulu(isALeapYear, year ) ){
                System.out.println("This is bulukulu festival year.");
                isOrdinaryNumber = false;
            }

            if( isOrdinaryNumber ){
                System.out.println("This is an ordinary year.");
            }

            counter++;
        }
    }

    public static boolean isLeapYear( BigInteger year ) {
        return (year.mod(new BigInteger("4")).equals(BigInteger.ZERO) && ! year.mod(new BigInteger("100")).equals(BigInteger.ZERO))
                || year.mod(new BigInteger("400")).equals(BigInteger.ZERO);
    }

    public static boolean isHuluculu( BigInteger year ){
        return year.mod(new BigInteger("15")).equals(BigInteger.ZERO);
    }

    public static boolean isBulukulu( boolean isLeapYear, BigInteger year ){
        return isLeapYear && year.mod(new BigInteger("55")).equals(BigInteger.ZERO);
    }
}
