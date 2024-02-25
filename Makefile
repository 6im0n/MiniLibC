##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## AN ASM makefile
##

# PARAM
NAME			=		libasm.so
_SRC			=		strlen.asm \
						strchr.asm \
						strrchr.asm \
						strcmp.asm \
						strstr.asm \
						strncmp.asm \
						strcasecmp.asm \
						strpbrk.asm \
						strcspn.asm \
						memset.asm \


SRCDIR			=		src/
SRC 			=		$(addprefix $(SRCDIR), $(_SRC))
OBJ				=		$(SRC:.asm=.o)


# MAKEFILE
WARNING			=		-W -Wall -Wextra
INCLUDE_DIR 	=		-I ./include
CFLAGS			=		$(INCLUDE_DIR) $(WARNING)
CFLAGS_TEST		= 		$(CFLAGS) -lcriterion --coverage -g3
SRC_TESTS		=		$(wildcard $(addprefix tests/, *).c)
CC				=		gcc


#ASM FLAGS
ASM				=		nasm
LD 				=		ld
LDFLAGS			=		-fPIC -shared
NASMFLAGS		=		-f elf64 -Werror



all:		$(NAME)

$(NAME):	$(OBJ)
			@$(LD) $(LDFLAGS) -o $(NAME) $(OBJ) 							\
			&& echo -e "$(GREEN)-------- COMPILED --------$(END)"			\
			|| echo -e "$(RED)-------- $(BOLD)ERROR$(END)$(RED) --------$(END)"

%.o:		%.asm
			@$(ASM) $(NASMFLAGS) -o $@ $<									\
			&& echo -e "$(GREEN)[OK]$(BOLD)" $< "$(END)"					\
			|| echo -e "$(RED)[KO]$(BOLD)" $< "$(END)"

clean:
			@rm -rf $(OBJ)
			@echo -e "$(RED)[DELETE] $(OBJ)$(END)"

fclean:		clean
			@rm -rf $(NAME)
			@echo -e "$(RED)[DELETE] $(NAME)$(END)"
			@echo -e "$(RED)--------  CLEANED  --------$(END)\n"

re:			fclean all
			@rm -f $(OBJ)

tests_run: 	fclean all $(NAME)
			@$(CC) -o tests/test.out $(SRC_TESTS) $(CFLAGS_TEST)
			./tests/test.out --verbose
			# gcovr --exclude tests/

tests_clean:
			rm -f *.gcda
			rm -f *.gcno
			rm -f tests/test.out*

ftest_run:
			@echo -e "\n$(GREEN)-------- FTEST --------$(END)"
			@cp libasm.so ftest/
			@cd ftest/ && ftest -f .ftest.toml


.PHONY: all clean fclean re tests_run tests_clean

# TEXT COLOR AND STYLE

END			=	\x1b[0m
BOLD		=	\x1b[1m
GREY		=	\x1b[30m
RED			=	\x1b[31m
GREEN		=	\x1b[32m
YELLOW		=	\x1b[33m
BLUE		=	\x1b[34m
PURPLE		=	\x1b[35m
CYAN		=	\x1b[36m
WHITE		=	\x1b[37m