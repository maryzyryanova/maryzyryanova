all: clean compileMain test

compileMain: task.c
	gcc -o task functions.c task.c -std=c89 -lm -Werror

runMain: 
	./task
	
test: test.c functions.c 
	gcc -ftest-coverage -fprofile-arcs -O0 -o test functions.c test.c -std=c89 -lm
	echo "-1\n" > input.txt
	echo "2\n" > input.txt
	echo "0\n" > input.txt
	echo "123456\n" > input.txt
	echo "-1\n" > input.txt
	echo "20\n" > input.txt
	echo "0\n" > input.txt
	echo "0\n" > input.txt
	echo "1234\n" > input.txt
	echo "123456\n" > input.txt
	echo "apple\n" > input.txt
	echo "13\n" > input.txt
	echo "123456\n" > input.txt
	echo "apple\n" > input.txt
	echo "13\n" > input.txt
	echo "666666\n" > input.txt
	echo "123456\n" > input.txt
	echo "654321\n" > input.txt
	echo "123456\n" > input.txt
	echo "1121\n" > input.txt
	echo "-1\n" > input.txt
	echo "11\n" > input.txt
	echo "4444\n" > input.txt
	echo "11\n" > input.txt
	echo "1121\n" > input.txt
	echo "11\n" > input.txt
	echo "4444\n" > input.txt
	echo "4567\n" > input.txt
	echo "1121\n" > input.txt
	echo "4\n" > input.txt
	echo "1\n" > input.txt
	echo "666666\n" > input.txt
	echo "2\n" > input.txt
	echo "4\n" > input.txt
	echo "1\n" > input.txt
	echo "666666\n" > input.txt
	echo "0\n" > input.txt
	echo "565656\n" > input.txt
	echo "0\n" > input.txt
	echo "0\n" > input.txt
	echo "4\n" > input.txt
	echo "1\n" > input.txt
	echo "2222\n" > input.txt
	echo "1\n" > input.txt
	echo "1212\n" > input.txt
	echo "0\n" > input.txt
	echo "5555\n" > input.txt
	echo "11\n" > input.txt
	./test < input.txt
	gcov -abcfu functions.c

clean:
	rm -rf Lab7