J: Square Sums
==============
- **Input:** Standard Input
- **Output:** Standard Output

Do you know that there are squares within a square. This might seem confusing, but take a look at this.
 
Suppose you have a square grid of size 5 X 5 completely filled with integers.

``` 
5 3 2 7 9
1 7 4 2 4
5 3 2 4 6
1 3 4 5 1
1 4 5 6 3
``` 

You can make three squares from the table above… well there are more but we will consider only concentric squares. The squares are denoted using different fonts.

In this problem you have to find the sum of the numbers of each square.

For the above case the sums are: 

```
5 + 3 + 2 + 7 + 9 + 1 + 4 + 5 + 6 + 1 + 1 + 1 + 4 + 5 + 6 + 3 = 63
7 + 4 + 2 + 3 + 4 + 3 + 4 + 5 = 32
2 = 2
```
 
Input
-----
There will be several lines in the input file. Each case starts with an integer **n**(**n**<=10) that determines the dimension of the square grid. Each of the next n lines will contain n integers each that will fill the square table in row major order. Input is terminated by a case where **n** == 0.
 
Output
------
Each line of output will start with “Case #:” where # is replaced by the case number. Then you have to output **ceil(n/2)** space separated numbers that will represent the sums from outer to inner. Follow the sample for exact details.
 
Sample Input
------------
```
5
5 3 2 7 9
1 7 4 2 4
5 3 2 4 6
1 3 4 5 1
1 4 5 6 3
1
1
0
```

Output for Sample 
-----------------
```
Case 1: 63 32 2
Case 2: 1
```

---- 
*Problem Setter: Sohel Hafiz*
 