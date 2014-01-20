#Problem A
##GCD

**Input:** Standard Input  
**Output:** Standard Output  
 
Given the value of N, you will have to find the value of G. The definition of G is given below:

![](img/ecuation.gif)
 
Here GCD(i,j) means the greatest common divisor of integer i and integer j.
 
For those who have trouble understanding summation notation, the meaning of G is given in the following code:

<!--language c -->
	G=0;
	for(i=1;i<N;i++)
	for(j=i+1;j<=N;j++)
	{
    	G+=GCD(i,j);
	}
	/*Here GCD() is a function that finds the greatest common 	divisor of the two input numbers*/
 
##Input

The input file contains at most 100 lines of inputs. Each line contains an integer N (1<N<501). The meaning of N is given in the problem statement. Input is terminated by a line containing a single zero.  This zero should not be processed.
 
##Output

For each line of input produce one line of output. This line contains the value of G for corresponding N.
 
	Sample Input	|	Output for Sample Input
	------------------------------------------
	10						67
	100						13015
	500						442011
	0

**Problemsetter: Shahriar Manzoor**  
**Special Thanks: Syed Monowar Hossain**