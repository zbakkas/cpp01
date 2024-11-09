CPP = c++
CFLAGS =  -Wall -Wextra -Werror -std=c++98
FILES = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp
NAME=Zombie

OBJ=$(FILES:.cpp=.o)



all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)
	
%.o:%.cpp Zombie.hpp
	$(CPP) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all