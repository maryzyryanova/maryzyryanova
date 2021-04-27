all: buildTest test valgrind_check linter_check
buildMain: task.c
	gcc -o task_1 task_1.c -std=c89 -lm

buildTest: test.c
	gcc -o test -Dmain=_main task.c test.c -std=c89 -pedantic -lm

test:
	./test
	
valgrind_check:
	echo "" > input.txt
	valgrind ./test < input.txt
	
linter_check:
	cpp task.c