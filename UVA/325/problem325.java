import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean loop_again = true;

        while(loop_again) {
            char[] input = new StringBuilder(scanner.nextLine()).toString().toCharArray();
            try {
                loop_again = ! (input[0] == '*' && input.length == 1);
            } catch( ArrayIndexOutOfBoundsException e){
                loop_again = true;
            }

            if( ! loop_again ){
                break;
            }
            boolean legal = false;
            boolean parsing = false;

            int index = 0;
            boolean index_found = false;
            int index_to_start_printing = 0;

            boolean has_a_dot = false;
            boolean has_a_exponent = false;
            boolean start_counting = false;
            int count_signs = 0;

            for(char c : input) {
                if(!index_found && ! Character.isWhitespace(c) ){
                    index_to_start_printing = index;
                    index_found = true;
                }
                if( !parsing){
                    if(is_number(c) || is_sign(c)){
                        parsing = true;
                        legal = true;
                    } else if(is_dot(c)){
                        parsing = true;
                    }
                }

                if( parsing ){
                    if( is_space(c) ){
                        legal = false;
                        break; 
                    } else if( is_dot(c) ){
                        boolean result = parse_expression_with_dot(input, index);
                        if( has_a_dot || has_a_exponent || !result ){
                            legal = false;
                            has_a_dot = false;
                            has_a_exponent = false;
                            break;
                        }
                        has_a_dot = true;
                    } else if( is_sign(c) ){
                        boolean result = parse_expression_with_sign(input, index);
                        if(index == 0){
                            start_counting = true;
                        }
                        if(start_counting){
                            count_signs++;
                        }
                        if(count_signs == 2 && index > 1 && is_exponent(input[index - 1])){
                            count_signs = 1;
                        }
                        if( (has_a_dot && !has_a_exponent) || count_signs == 2 || !result ){
                            legal = false;
                            break;
                        }
                    } else if( is_exponent(c) ){
                        boolean result = parse_expression_with_exponent(input, index);
                        if( has_a_exponent || !result ){
                            legal = false;
                            break;
                        } else {
                            try{
                                if( is_sign(input[index + 1]) ){
                                    start_counting = true;
                                }
                            }catch(ArrayIndexOutOfBoundsException e){
                            }
                        }
                        has_a_exponent = true;
                    }
                }
                index++;
            }
            if( ! ( has_a_dot || has_a_exponent )){
                legal = false;
            } 
            // System.out.print(index_to_start_printing + "==>" + input.length + "<==");
            if( index_found ){
                for(int i = index_to_start_printing, j = input.length; i < j; i++){
                    System.out.print(input[i]);
                }
            }
            System.out.println(message(legal));
        }
    }

    public static boolean parse_expression_with_dot(char[] input, int index){
        try {
            if( !( is_number(input[index-1]) && is_number(input[index + 1]) ) ){
                return false;
            }else{
                return true;
            }
        } catch( ArrayIndexOutOfBoundsException e){
            return false;
        }
    }

    public static boolean parse_expression_with_exponent(char[] input, int index){
        try {
            if( !( is_number(input[index - 1]) && ( is_number(input[index + 1]) || is_sign(input[index +1]) ) ) ){
                return false;
            } else {
                return true;
            }
        } catch( ArrayIndexOutOfBoundsException e){
            return false;
        }
    }

    public static boolean parse_expression_with_sign(char[] input, int index){
        try {
            if( !( is_number(input[index + 1]) ) ){
                return false;
            }else{
                return true;
            }
        } catch( ArrayIndexOutOfBoundsException e){
            return false;
        }
    }

    public static boolean is_number(char c){
        switch(c){
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                return true;
            default:
                return false;
        }
    }

    public static boolean is_space(char c){
        return is_char(c, ' ');
    }

    public static boolean is_dot(char c){
        return is_char(c, '.');
    }

    public static boolean is_sign(char c){
        return is_char(c, '-') || is_char(c, '+');
    }

    public static boolean is_exponent(char c){
        return is_char(c, 'e') || is_char(c, 'E');
    }

    public static boolean is_char(char value, char compare) {
        return value == compare;
    }

    public static final String message(boolean legal) {
        return (legal == true)
            ? " is legal."
            :" is illegal.";
    }
}
