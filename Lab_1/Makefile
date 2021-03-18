useful: buildTest test
buildMain: task.c
	gcc -o task task.c -std=c89 -lm

buildTest: task_test.c
	gcc -o task_test -Dmain=_main task.c task_test.c -std=c89 -pedantic -lm

test:
	./task_test
valgrind_check:
	echo "20\n2.2032" > input.txt
	valgrind ./main < input.txt

.PHONY: clean
clean:
	rm -rf Lab_1/
	
