CPP = c++
CFLAGS =  -Wall -Wextra -Werror -std=c++98
FILES = main.cpp Harl.cpp
NAME= HARL
OBJ=$(FILES:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp Harl.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all