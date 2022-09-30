NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_toupper.c ft_tolower.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ = ${SRC:.c=.o}

SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJ_BONUS = ${SRC_BONUS:.c=.o}

CC_FLAGS = -Wall -Werror -Wextra
COMPILE = gcc $(CC_FLAGS) -c

REMOVE = rm -rfv
LIB = ar rc $(NAME)
RANLIB = ranlib $(NAME)

DEPS= libft.h

ifdef WITH_BONUS
	OBJ_FILES = $(OBJ) $(OBJ_BONUS)
else
	OBJ_FILES = $(OBJ)
endif

all: $(NAME)

$(NAME): $(DEPS)	
	$(COMPILE) $(SRC)
	$(LIB) $(OBJ_FILES)
	$(RANLIB)

bonus:
	@$(MAKE) WITH_BONUS=1 all

clean:
			$(REMOVE) $(OBJ) $(OBJ_BONUS)

fclean:		clean
			$(REMOVE) $(NAME)

re:			fclean all
.PHONY:		all clean fclean re  
