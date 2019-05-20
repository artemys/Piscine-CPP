CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
NAME = phone_book 

all : $(NAME)

clean :
	rm $(NAME)
re : clean all 

$(NAME) :
	$(CC) $(CFLAGS) -o $@ *.cpp