Test Input
==========

- **Input file**: INPUT.md
- **Size**: 15.5 MB

Execution
---------
```
$gcc getchar.c -o getchar.out && ./getchar.out < INPUT.md
```

Results (only reading): char by char
-----------------------------

	Program 	|	Function	| 	Times
	-------------------------------------------------
	getchar.c		getchar()		1.649957, 1.626656,
									1.644488, 1.644473
									1.660783, 1.665575
	-------------------------------------------------
	getc.c			getc(stdin)		1.583306, 1.605868
									1.603475, 1.581651
									1.592054, 1.595314
									
	
	
Tested machine
--------------
- System: OS X: 10.9.1
- Processor: 2.4 GHz, Intel Core i5
- Memory: 8GB 
