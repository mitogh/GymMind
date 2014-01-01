#Problem E - Parity

**Time Limit: 1 second**

We define the parity of an integer n as the sum of the bits in binary representation computed modulo two. As an example, the number 21 = 101012 has three 1s in its binary representation so it has parity 3 (mod 2), or 1.

In this problem you have to calculate the parity of an integer **1 ≤ I ≤ 2147483647**.

##Input

Each line of the input has an integer I and the end of the input is indicated by a line where I = 0 that should not be processed.

##Output

For each integer I in the inputt you should print a line The parity of B is P (mod 2)., where B is the binary representation of I.

##Sample Input

	1
	2
	10
	21
	0

##Sample Output

	The parity of 1 is 1 (mod 2).
	The parity of 10 is 1 (mod 2).
	The parity of 1010 is 2 (mod 2).
	The parity of 10101 is 3 (mod 2).
	
**Problem setter: Sérgio Queiroz de Medeiros**
