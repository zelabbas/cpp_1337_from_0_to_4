NAME = zombie

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

COMPILE = c++ 

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp Zombie.hpp
	@${COMPILE} ${FLAGS} -c $< -o $@
	@echo "compilation files src done 	✅"
	@echo "create files objects done 	✅"

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