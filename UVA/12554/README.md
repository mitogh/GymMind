Problem A: A Special "[H]appy Birthday" Song!!!
===============================================

There are n people (excluding myself) in my 30th birthday party. They sing the traditional "happy birthday" song:

	Happy birthday to you! Happy birthday to you! Happy birthday to Rujia! Happy birthday to you!!!

Since I love music, I want to hear something more interesting, not that everyone sings together. Ah yes, I want one person to sing one word!

For example, there are three people: Mom, Dad, Girlfriend, I'd like them to sing like this:

```
Mom: Happy
Dad: birthday
Girlfriend: to
Mom: you
Dad: Happy
Girlfriend: birthday
Mom: to
Dad: you
Girlfriend: Happy
Mom: birthday
Dad: to
Girlfriend: Rujia
Mom: Happy
Dad: birthday
Girlfriend: to
Mom: you
```

Very nice, right? What if there are more than 16 people? That's easy: repeat the song until everyone has sung at least once :)  

Please, don't stop in the middle of the song.

Input
-----

There is only one test case. The first line contains a single integer n (1<=n<=100). Then each of the next n lines contains a capitalized name (i.e. one upper-case letter followed by zero or more lower-case letters). Each name contains at most 100 characters and do not have whitespace characters inside.

Output
------

Output the song, formatted as above.

Sample Input
------------
```
3
Mom
Dad
Girlfriend
```

Output for the Sample Input
---------------------------
```
Mom: Happy
Dad: birthday
Girlfriend: to
Mom: you
Dad: Happy
Girlfriend: birthday
Mom: to
Dad: you
Girlfriend: Happy
Mom: birthday
Dad: to
Girlfriend: Rujia
Mom: Happy
Dad: birthday
Girlfriend: to
Mom: you
```
---
*Rujia Liu's Present 6: Happy 30th Birthday to Myself*  
*Special Thanks: All of you, for participating in this contest; Mom and Dad, for giving birth to me :)*  