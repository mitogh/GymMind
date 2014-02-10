Given N, print the largest number that can be achieved by taking gcd (greatest common divisor) of
any two i and j where i ̸= j and 1  i; j N.

Input
-----

First line of input will contain the number of test cases, T  2000. Then T cases follow. For each case,
there is a line containing one integer N where 2 <= N  <= 10^18.


Output
------

For each case, print one line containing a single integer which is the largest gcd of all pairs of numbers between 1 to N.

**Output Explanation**

In the second case the GCD table is: 

```
	[ ]  [ 1 ][ 2 ][ 3 ][ 4 ][ 5 ]
	[ 1 ][ - ][ - ][ - ][ - ][ - ]
	[ 2 ][ 1 ][ - ][ - ][ - ][ - ]
	[ 3 ][ 1 ][ 1 ][ - ][ - ][ - ]
	[ 4 ][ 1 ][ 2 ][ 1 ][ - ][ - ]
	[ 5 ][ 1 ][ 1 ][ 1 ][ 1 ][ - ]
```

Here the largest gcd of all pairs of numbers between 1 to 5 is 2.

Sample Input
------------
	2
	2
	5
	
Sample Output
------------------
	1
	2