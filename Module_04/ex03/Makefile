NAME = interfaces

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

COMPILE = c++

SRCS =  main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Cure.cpp Ice.cpp
OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp AMateria.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp Cure.hpp Ice.hpp
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