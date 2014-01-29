
Test Input
==========

This test is only made for reading, not include nothing else like print or something like that.

- **Input file**: INPUT.txt
- **Size**: 15.5 MB

Execution
---------
```
$gcc getchar.c -o getchar.out && ./getchar.out < INPUT.txt
```

**Note**: The result is an avarage of 6 execution times of the same function.

Results (only reading): char by char
-----------------------------

	Program 	|	Function	| 	Times
	-------------------------------------------------
	getchar.c		getchar()		1.648655333
	-------------------------------------------------
	getc.c			getc(stdin)		1.593611333
									
Results (only reading): line by line
-----------------------------

	Program 	|	Function	| 	Times
	-------------------------------------------------
	scanf.c			scanf()			0.157692
	-------------------------------------------------
	fgets.c			fgets()			0.081063833
	-------------------------------------------------
	getline.cpp		getline()		2.759894667
									

	
Tested machine
--------------
- System: OS X: 10.9.1
- Processor: 2.4 GHz, Intel Core i5
- Memory: 8GB 
