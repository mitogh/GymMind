A. How old are you?
===================

- **Time limit: 1 second**  

```
...
- Here are the filled form.
- Thank you. Let me check... hum... OK, OK, OK... Wait, how old are you?
- 20. Did I forget to fill it?
- No. It says here that you'll be born next month! The year is wrong...
- Oh... Sorry!
```

The process is going to be automatic and to avoid some human errors there will be a calculated field that informs the age based in the current date and the birth date given. This is your task, calculate the age, or say if there's something wrong.

Input
-----

The first line of input gives the number of cases, T (1 ≤ T ≤ 200). T test cases follow. Each test case starts with a blank line, then you will have 2 lines corresponding to the current date and the birth date, respectively. The dates are in the format **DD/MM/YYYY**, where **DD** is the day, **MM** the month and **YYYY** the year. All dates will be valid.

Output
------

The output is comprised of one line for each input data set and should be as follow (quotes for clarifying only):

"Case #**N: AGE**", where **N** is the number of the current test case and **AGE** is one of the 3 following options:

- *"Invalid birth date"*, if the *calculated age* is impossible (still going to be born).
- *"Check birth date"*, if the *calculated age* is more than 130.
- the *calculated age* (years old only), otherwise.

Sample input
------------
	4

	01/01/2007
	10/02/2007

	09/06/2007
	28/02/1871

	12/11/2007
	01/01/1984

	28/02/2005
	29/02/2004
	
Sample output
-------------

	Case #1: Invalid birth date
	Case #2: Check birth date
	Case #3: 23
	Case #4: 0
----

*Problem setter: Diego Caminha Barbosa de Oliveira.*  
*Universidade Federal do Rio Grande do Norte Qualifying Contest IV, June 9th, 2007.* 