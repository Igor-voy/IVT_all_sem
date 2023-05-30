memory_allocation.o : memory_allocation.c

gcc -c -o memory_allocation.o memory_allocation.c

mult_matrix.o : mult_matrix.c

gcc -c -o mult_matrix.o mult_matrix.c

memory_free.o : memory_free.c

gcc -c -o memory_free.o memory_free.c

main.o : main.c

gcc -c -o main.o main.c

project: memory_free.o mult_matrix.o memory_allocation.o main.o

gcc -o project mult_matrix.o memory_allocation.o memory_free.o main.o