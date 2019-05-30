CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
NAME = ex00

all : $(NAME)

clean :
	rm -rf $(NAME)
re : clean all

$(NAME) :
	$(CC) $(CFLAGS) -o $@ *.cpp