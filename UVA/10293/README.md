Problem K: Word Length and Frequency
====================================
- **Input:** standard input
- **Output:** standard output
- **Time Limit:** 1 second
- **Memory Limit:** 32 MB
 
A Queen's graduate student is writing her thesis in Computer Science. She's very worried that her advisor will be displeased because she isn't using enough big words. Being the cunning computer scientist that she is, she decides to write an application that will count the length of her words.

Words can be separated by blanks, question marks, exclaimation marks, commas and periods (the punctuation is not to add to the length of the word). Words with apostrophes, such as \`\`**I'm**'' and \`\`**You've**'', and hyphenated words are treated as one word. For example, \`\`**you've**'' is a 5-letter word. Hyphenation may occur across two lines.

Input
-----
Input file contains several blocks of input. Each block is terminated by a line containing a ‘#’ as its first character. You should not consider this line within the block. There is no space at the end of a line. You may assume each word has no more than **30** characters, and each line has no more than 80 characters. You may assume the entire text of a block will not end with a hyphen.

Output
------

The output for each block will consist of two columns of numbers. The first column will represent the length of the word (They appear in ascending order) and the second column will represent the frequency of that length of word. The output should not have any word length that has no word in the input. Print a blank line after the output for each block of input.

Sample Input:
-------------
```
This is fun-
ny!  Mr.P and I've never seen
this ice-cream flavour
before.Crazy eh?
#
This is fun-
ny!  Mr.P and I've never seen
this ice-cream flavour
before.Crazy eh?
#
```
Sample Output:
--------------
```
1 1
2 3
3 2
4 3
5 3
6 1
7 1
8 1
 
1 1
2 3
3 2
4 3
5 3
6 1
7 1
8 1
```

---
*(Math Lovers’ Contest, Source: Queens University & University of Toronto Local Contest)*