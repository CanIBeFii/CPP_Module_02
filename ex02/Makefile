NAME = ex02

HEADERS_LIST = Fixed.hpp
HEADERS_DIRECTORY = ./includes/
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_LIST))

SOURCES_LIST = main.cpp Fixed.cpp
SOURCES_DIRECTORY = ./sources/
SOURCES = $(addprefix $(SOURCES_DIRECTORY), $(SOURCES_LIST))

OBJECTS_LIST = $(patsubst %.cpp, %.o, $(SOURCES_LIST))
OBJECTS_DIRECTORY = objects/
OBJECTS = $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST))

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -g3

INCLUDES = -I $(HEADERS_DIRECTORY)

# RULES

all: ## Compiles the whole project
	@make -s $(NAME)

$(NAME): $(OBJECTS_DIRECTORY) $(OBJECTS)
	@$(CC) $(FLAGS) $(INCLUDES) $(OBJECTS) -o $(NAME)

$(OBJECTS_DIRECTORY): ## Creates the objects directory
	@mkdir -p $(OBJECTS_DIRECTORY)

$(OBJECTS_DIRECTORY)%.o : $(SOURCES_DIRECTORY)%.cpp ## Compiles each '*.cpp'
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@

clean: ## Cleans all the '*.o' files and deletes the objects directory
	@rm -rf $(OBJECTS_DIRECTORY)

fclean: clean ## Calls clean and deletes all executables and compiled libs
	@rm -f $(NAME)

re: ## Deep cleans the project and recompiles it
	@make -s fclean
	@make -s all
	
help: ## Shows all the options and it's uses
	@echo "usage: make [target]"
	@echo ""
	@egrep "^(.+)\:\ .*##\ (.+)" ${MAKEFILE_LIST} | sed 's/:.*##/#/' | column -t -c 2 -s '#'
	@curl -L https://raw.githubusercontent.com/keroserene/rickrollrc/master/roll.sh | bash

.PHONY	: re fclean clean all