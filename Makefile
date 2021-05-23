all: clean compileMain test

compileMain: task.c
	gcc -o task functions.c task.c -std=c89 -lm -Werror

runMain: 
	./task
	
test: test.c functions.c
	gcc -ftest-coverage -fprofile-arcs -O0 -o test functions.c test.c -std=c89 -lm
	echo -1 > input.txt
	echo 2 > input.txt
	echo 0 > input.txt
	echo 123456 > input.txt
	echo -1 > input.txt
	echo 20 > input.txt
	echo 0 > input.txt
	echo 0 > input.txt
	echo 1234 > input.txt
	echo 123456 > input.txt
	echo "apple" > input.txt
	echo 13 > input.txt
	echo 123456 > input.txt
	echo "apple" > input.txt
	echo 13 > input.txt
	echo 666666 > input.txt
	echo 123456 > input.txt
	echo 654321 > input.txt
	echo 123456 > input.txt
	echo 1121 > input.txt
	echo -1 > input.txt
	echo 11 > input.txt
	echo 4444 > input.txt
	echo 11 > input.txt
	echo 1121 > input.txt
	echo 11 > input.txt
	echo 4444 > input.txt
	echo 4567 > input.txt
	echo 1121 > input.txt
	echo 4 > input.txt
	echo 1 > input.txt
	echo 666666 > input.txt
	echo 2 > input.txt
	echo 4 > input.txt
	echo 1 > input.txt
	echo 666666 > input.txt
	echo 0 > input.txt
	echo 565656 > input.txt
	echo 0 > input.txt
	echo 0 > input.txt
	echo 4 > input.txt
	echo 1 > input.txt
	echo 2222 > input.txt
	echo 1 > input.txt
	echo 1212 > input.txt
	echo 0 > input.txt
	echo 5555 > input.txt
	echo 11 > input.txt
	./test < input.txt
	gcov -abcfu functions.c

clean:
	rm -rf Lab7