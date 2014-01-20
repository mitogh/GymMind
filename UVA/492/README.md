#Pig-Latin 

You have decided that PGP encryptation is not strong enough for your email. You have decided to supplement it by first converting your clear text letter into Pig Latin before encrypting it with PGP.

##Input and Output

You are to write a program that will take in an arbitrary number of lines of text and output it in Pig Latin. Each line of text will contain one or more words. A ``word'' is defined as a consecutive sequence of letters (upper and/or lower case). Words should be converted to Pig Latin according to the following rules (non-words should be output exactly as they appear in the input):

1. Words that begin with a vowel (a, e, i, o, or u, and the capital versions of these) should just have the string \`\`ay'' (not including the quotes) appended to it. For example, \`\`apple'' becomes ``appleay''.
2. Words that begin with a consonant (any letter than is not A, a, E, e, I, i, O, o, U or u) should have the first consonant removed and appended to the end of the word, and then appending \`\`ay'' as well. For example, \`\`hello'' becomes ``ellohay''.
3. Do not change the case of any letter.

##Sample Input

	This is the input.

##Sample Output

	hisTay isay hetay inputay.