CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp \
	   file.cpp \
	   replaceTool.cpp

INC = file.hpp \
	  replaceTool.hpp

NAME = replace

OBJS_DIR = objects/
OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
