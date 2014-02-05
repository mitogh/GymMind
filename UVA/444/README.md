Encoder and Decoder 
===================

Being in charge of the computer department of the Agency of International Espionage, you are asked to write a program that will allow a spy to encode and decode their messages.

You can assume a spy's message is at most 80 characters long, and it includes all the upper and lowercase letters of the alphabet plus the space, and any of the following characters:

```
!  ,  .  :  ;  ?
```

The following is an ASCII table of the valid characters in a message:

```
     "A"  65   "a"  97   " "  32
     "B"  66   "b"  98   "!"  33
      .         .        ","  44
      .         .        "."  46
      .         .        ":"  58
     "Y"  89   "y"  121  ";"  59
     "Z"  90   "z"  122  "?"  63
```

The algorithm that you should use to encode messages is to take the ASCII value of each character in the message, starting with the last character in the message and ending with the first character in the message. You should then add on to the coded message this ASCII value written in reverse order. For example, if the ASCII value is 123, the encoded message should contain the string "321". There should be no spaces separating the numbers in the encoded message.

Input
-----
The input file consists of one or more lines with a normal (not encoded) or encoded message each.

Output
------
Output file must have the same number of lines with the corresponding encoded message or the decoded one, respectively.

Sample Input
------------
```
abc
798999
Have a Nice Day !
```

Sample Output
-------------
```
998979
cba
332312179862310199501872379231018117927
```