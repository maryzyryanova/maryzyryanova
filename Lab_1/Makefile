useful: buildTest test
buildMain: task.c
	gcc -o task task.c -std=c89 -lm

buildTest: task_test.c
	gcc -o task_test -Dmain=_main task.c task_test.c -std=c89 -pedantic -lm

test:
	./task_test

.PHONY: clean
clean:
	rm -rf Lab_1/
	
