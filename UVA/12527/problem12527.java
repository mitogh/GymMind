import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while(true) {
            int N;
            int M;
            try {
                N = scanner.nextInt();
                M = scanner.nextInt();
            } catch( NoSuchElementException e ){
                break;
            }

            int count = 0;
            for(int i = N; i<= M; i++) {
                if( !hasRepetedNumbers(i) ) {
                    count++;
                }
            }
            System.out.println(count);
        }
    }

    public static boolean hasRepetedNumbers(int number){
        String numberAsString = String.valueOf(number);
        int length = numberAsString.length();

        if(length == 1){
            return false;
        }else{
            for(int i = 0; i < length - 1; i++) {
                for(int j = length - 1; j >= 0; j--){
                    if( j == i ) {
                        continue;
                    } else {
                        if( numberAsString.charAt(i) == numberAsString.charAt(j) ){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }
}
