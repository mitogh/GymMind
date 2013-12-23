#Problem B - Find the Telephone

###Time Limit: 1 second

In some places is common to remember a phone number associating its digits to letters. In this way the expression **MY LOVE** means **69 5683**. Of course there are some problems, because some phone numbers can not form a word or a phrase and the digits **1** and **0** are not associated to any letter.

Your task is to read an expression and find the corresponding phone number based on the table below. An expression is composed by the capital letters (**A**-**Z**), hyphens (-) and the numbers **1** and **0**.

	Letters		Number
	------------------
	ABC			2
	DEF			3
	GHI			4
	JKL			5
	MNO			6
	PQRS		7
	TUV			8
	WXYZ		9
	
##Input

The input consists of a set of expressions. Each expression is in a line by itself and has C characters, where 1 ≤ C ≤ 30. The input is terminated by enf of file (EOF).

##Output

For each expression you should print the corresponding phone number.

###Sample Input

	1-HOME-SWEET-HOME
	MY-MISERABLE-JOB
	
###Sample Output

	1-4663-79338-4663
	69-647372253-562
	
*Problem setter: Sérgio Queiroz de Medeiros*
