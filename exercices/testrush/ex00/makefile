all:	rush02
	
rush02: rush.o atoi.o countlines.o ft_read_file.o ft_read_line.o ft_write.o ft_print_number_rush.o strlen.o
	gcc atoi.o countlines.o ft_read_file.o ft_read_line.o ft_write.o ft_print_number_rush.o rush.o strlen.o -o rush02

rush.o: main.c
	gcc -Wall -Wextra -Werror -c main.c -o rush.o

atoi.o: atoi.c
	gcc -Wall -Wextra -Werror -c atoi.c -o atoi.o

countlines.o: countlines.c
	gcc -Wall -Wextra -Werror -c countlines.c -o countlines.o

ft_read_file.o: ft_read_file.c
	gcc -Wall -Wextra -Werror -c ft_read_file.c -o ft_read_file.o

ft_read_line.o: ft_read_line.c
	gcc -Wall -Wextra -Werror -c ft_read_line.c -o ft_read_line.o

ft_write.o: ft_write.c
	gcc -Wall -Wextra -Werror -c ft_write.c -o ft_write.o

ft_print_number_rush.o: ft_print_number_rush.c
	gcc -Wall -Wextra -Werror -c ft_print_number_rush.c -o ft_print_number_rush.o

strlen.o: strlen.c
	gcc -Wall -Wextra -Werror -c strlen.c -o strlen.o

clean:
	rm *.o

fclean:
	rm rush02