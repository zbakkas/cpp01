CPP = c++
CFLAGS =  -Wall -Wextra -Werror -std=c++98
FILES =  Zombie.cpp main.cpp zombieHorde.cpp
NAME=Zombies
OBJ=$(FILES:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp Zombie.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all