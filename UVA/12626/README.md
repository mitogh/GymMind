#G - I ❤ Pizza 

##Context

Everybody loves pizza: Margarita, Four cheese, Salami, Caprichosa, Neapolitan, Hawaiian... The famous pizza Margarita is named after the Italian Queen Margarita of Savoy. It is said that the chef Raffaele Esposito gave her to choose from a variety of pizzas he had prepared specially for the Queen. Margarita chose this pizza in honor of the colors of the Italian flag: red tomato, white cheese, and green basil.


However, some people argue that, in fact, Queen Margarita did not like onion, and as all the other pizzas had onion, she had no choice but that pizza.

##The Problem

In our particular computerized kitchen, ingredients are named by capital letters: A, B, C, D... Thus, to make a pizza MARGARITA we need as many ingredients as their letters, i.e. one M, three A, two R, one G, one I, and one T.

For example, if we have the ingredients:

```
AAAAAAMMRRTITIGGRRRRRRRR
```

Then we can make 2 pizzas MARGARITA, and still spare some R.

Given a set of ingredients, you have to say how many pizzas MARGARITA can be made. Note that there may be leftover ingredients, and also there may be unnecessary ingredients, such as B.

##The Input

The first line contains a natural number, N, which indicates the number of test cases.

Each test case is given in one line. This line contains a series of capital letters from A to Z, which can be messy and may be repeated. At most one line can have 600 characters.

##The Output

For each test case, you must indicate how many pizzas MARGARITA can be made with the letters available, taking into account that there may be spare letters.

##Sample Input

```
5
MARGARITA
AAAAAAMMRRTITIGGRRRRRRRR
AMARGITA
BOLOGNESACAPRICHOSATOMATERA
ABCDEFGHIJKLMNOPQRSTUVWXYZ
```

##Sample Output
```
1
2
0
1
0
```
---
OMP'13  
Facultad de Informática  
Universidad de Murcia  
