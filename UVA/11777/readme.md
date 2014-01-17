#Problem G
##Automate the Grades
**Input: Standard Input**

**Output: Standard Output**
 
The teachers of “Anguri Begam Uccha Biddalya”, a school located in the western region of Sylhet, currently follows a manual system for grading their students. The manual process is very time consuming and error prone. From the next semester they have decided to purchase some computers so that the whole grading process can be automated. And yes, you guessed it - they have hired you to write a program that will do the job.

![](img/grades.jpg)

The grading of each course is based on the following weighted scale:

- Term 1 – 20%
- Term 2 – 20%
- Final – 30%
- Attendance – 10%
- Class Tests – 20%
 
The letter grades are given based on the total marks obtained by a student and is shown below:

- A >= 90%
- B >= 80% & < 90%
- C >= 70% & < 80%
- D >= 60% & < 70%
- F  < 60%
 
*Term 1 and Term 2* exams are out of 20 each, Final is out of 30 and *Attendance* given is out of 10. Three class tests are taken per semester and the average of best two is counted towards the final grade. Every class test is out of 20.
 
Example: Say Tara obtained marks of 15, 18, 25 and 8 in *Term 1*, *Term 2*, *Final* and *Attendance* respectively. Her 3 class test marks are 15, 12 and 17. Since average of best 2 will be counted, her *class test* mark will be equal to (15 + 17) / 2 = 16. Therefore, total marks = 15 + 18 + 25 + 8 + 16 = 82 and she will be getting a B.
 
##Input

The first line of input is an integer **T**(**T**<100) that indicates the number of test cases. Each case contains 7 integers on a line in the order **Term1  Term2  Final  Attendance  Class_Test1  Class_Test2  Class_Test3**. All these integers will be in the range [0, total marks possible for that test].
 
##Output

For each case, output the case number first followed by the letter grade {A B C D F}. Follow the sample for exact format.

	Sample Input			| Output for Sample Input
	-----------------------------------------------
	3						
	15 18 25 8 15 17 12			Case 1: B
	20 20 30 10 20 20 20		Case 2: A
	20 20 30 10 18 0 0 			Case 3: B
 
**Problemsetter:** Sohel Hafiz

**Special Thanks to:** Shamim Hafiz