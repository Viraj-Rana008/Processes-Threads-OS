compile1:
	gcc Q1_part1.c -o Q1_part1.out

run1: compile1
	./Q1_part1.out

compile2:
	gcc Q1_part2.c -o Q1_part2.out -pthread

run2: compile2
	./Q1_part2.out