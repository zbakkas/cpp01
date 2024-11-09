CPP = c++
CFLAGS =  -Wall -Wextra -Werror -std=c++98
FILES = main.cpp  
NAME= replace
OBJ=$(FILES:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp 
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all