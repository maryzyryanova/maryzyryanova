all: buildTest

buildMain: task.c
	gcc -o task task.c -std=c89 -lm

buildTest: task_test.c
	gcc -o task_test -Dmain=_main task.c task_test.c -std=c89 -lm

runTest:
	./task_test
	
valgrind_check:
	mkdir -p bin/temp
	echo "2, 2" > bin/temp/input.txt
	valgrind ./bin/program/main < bin/temp/input.txt

clean:
	rm -rf Lab_1/
	
