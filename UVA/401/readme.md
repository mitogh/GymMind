#Palindromes 

A regular palindrome is a string of numbers or letters that is the same forward as backward. For example, the string ``"ABCDEDCBA"`` is a palindrome because it is the same when the string is read from left to right as when the string is read from right to left.


A mirrored string is a string for which when each of the elements of the string is changed to its reverse (if it has a reverse) and the string is read backwards the result is the same as the original string. For example, the string ``"3AIAE"`` is a mirrored string because "A" and ``"I"`` are their own reverses, and ``"3"`` and ``"E"`` are each others' reverses.


A mirrored palindrome is a string that meets the criteria of a regular palindrome and the criteria of a mirrored string. The string ``"ATOYOTA"`` is a mirrored palindrome because if the string is read backwards, the string is the same as the original and because if each of the characters is replaced by its reverse and the result is read backwards, the result is the same as the original string. Of course, ``"A"``, ``"T"``, ``"O"``, and ``"Y"`` are all their own reverses.

A list of all valid characters and their reverses is as follows.


	Character	| Reverse	
	---------------------
	A				A	
	B			
	C		
	D		
	E				3	
	F		
	G		
	H				H	
	I				I	
	J				L	
	K		
	L				J	
	M				M	
	N		
	O				O	
	P		
	Q		
	R		
	S				2	
	T				T	
	U				U	
	V				V	
	W				W	
	X				X	
	Y				Y	
	Z				5
	1				1
	2				S
	3				E
	4	
	5				Z
	6
	7
	8				8
	9
	

**Note** that O (zero) and 0 (the letter) are considered the same character and therefore **ONLY** the letter ``"0"`` is a valid character.

##Input 

Input consists of strings (one per line) each of which will consist of one to twenty valid characters. There will be no invalid characters in any of the strings. Your program should read to the end of file.

##Output 

For each input string, you should print the string starting in column 1 immediately followed by exactly one of the following strings.

	STRING	|						 CRITERIA
	-------------------------------------------------------------------------------------
	" -- is not a palindrome."	 		if the string is not a palindrome and is not a
										mirrored string
	
	" -- is a regular palindrome."	 	if the string is a palindrome and is not a
										mirrored string
	
	" -- is a mirrored string."	 		if the string is not a palindrome and is a
										mirrored string
	
	" -- is a mirrored palindrome."	 	if the string is a palindrome and is a mirrored
										string
	
**Note** that the output line is to include the -'s and spacing exactly as shown in the table above and demonstrated in the Sample Output below.

In addition, after each output line, you must print an empty line.

##Sample Input 

	NOTAPALINDROME 
	ISAPALINILAPASI 
	2A3MEAS 
	ATOYOTA

##Sample Output 

	NOTAPALINDROME -- is not a palindrome.
	 
	ISAPALINILAPASI -- is a regular palindrome.
 
	2A3MEAS -- is a mirrored string.
 
	ATOYOTA -- is a mirrored palindrome.

---
*Miguel Revilla 2001-04-16*