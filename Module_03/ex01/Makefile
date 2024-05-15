NAME = ScavTrap

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

COMPILE = c++

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp
	@${COMPILE} ${FLAGS} -c $< -o $@
	@echo "compilation file src done 	✅"
	@echo "create file object done 	✅"

all : ${NAME}

${NAME} : ${OBJS}
	@${COMPILE} ${OBJS} -o $@
	@echo "create file executable done 	✅"

clean :
	@${RM} ${OBJS}
	@echo "Delete files objects Done 	✅"
fclean : clean
	@${RM} ${NAME}
	@echo "Delete file executable Done 	✅"

re : fclean all