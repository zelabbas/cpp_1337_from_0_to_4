NAME = fixed

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

COMPILE = c++ 

SRCS = Fixed.cpp main.cpp Point.cpp bsp.cpp
OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp Fixed.hpp Point.hpp
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