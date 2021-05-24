all: compileMain test

compileMain: task.c
	gcc -o task functions.c task.c -std=c89 -lm -Werror

runMain: 
	./task
	
test: test.c functions.c 
	gcc -ftest-coverage -fprofile-arcs -O0 -o test functions.c test.c -std=c89 -lm
	echo "-1\n2\n0\n123456\n-1\n20\n0\n0\n1234\n123456\napple\n13\n123456\napple\n13\n666666\n123456\n654321\n123456\n1121\n-1\n11\n4444\n11\n121\n11\n4444\n4567\n1121\n4\n1\n666666\n2\n4\n1\n666666\n0\n565656\n0\n0\n4\n1\n2222\n1\n1212\n0\n5555\n11\n" > input.txt
	./test < input.txt
	gcov -abcfu functions.c