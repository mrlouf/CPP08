# -=-=-=-=-    NAME -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

NAME 		= span

# -=-=-=-=-    FLAG -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

CC			= c++
CFLAGS		= -Werror -Wall -Wextra -std=c++98
DFLAGS		= -Wshadow -Wconversion -pedantic -g#-fsanitize=address -fsanitize=leak

RM			= rm -fr

# -=-=-=-=-    FILES -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

SRC 		= 	main.cpp		\
				Span.cpp

HEADERS		=	Span.hpp

OBJDIR		= .obj
OBJS		= $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

# -=-=-=-=-    TARGETS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

all: $(NAME)

leak:
	valgrind --leak-check=full ./$(NAME)

$(OBJDIR)/%.o: %.cpp Makefile $(HEADERS)
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) $(DFLAGS) -I. -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)

clean: 
	@$(RM) $(OBJDIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

check: $(NAME)
	@$(CC) $(FLAGS) -fsyntax-only $(SRC)

.PHONY: all clean fclean re