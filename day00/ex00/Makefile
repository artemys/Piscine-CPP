CC = g++
CFLAGS = -Wall -Wextra -Werror -Wno-used
NAME = megaphone
# INCLUDES =
# LIBS =
OBJ_FILES = megaphone.o

all : $(NAME)

clean :
	rm $(NAME) $(OBJ_FILES)

$(NAME) : $(OBJ_FILES)
	$(CC) -o $(NAME) $(OBJ_FILES) $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

%.o: %.cc
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

%.o: %.c
	gcc $(CFLAGS) $(INCLUDES) -o $@ -c $<