MANDATORY = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_toupper.c ft_tolower.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c
OBJS_MANDATORY = $(MANDATORY:.c=.o)
BONUS = ft_lstnew.c
OBJS_BONUS =  $(BONUS:.c=.o)
CC = gcc
CC_FLAGS = -Wall -Werror -Wextra
RM_RF = rm -rfv
NAME = libft.a
NAME2= main
DEPS= libft.h

all: $(NAME)
$(NAME):	$(OBJS_MANDATORY)    
			ar crs $(NAME) $(OBJS_MANDATORY)
$(NAME2): $(DEPS) 
	$(CC) $(CC_FLAGS) -o $(NAME2) $(MANDATORY) main.c

clean:
			$(RM_RF) $(OBJS_MANDATORY)   
fclean:		clean
			$(RM_RF) $(NAME) $(NAME2)
re:			fclean all
.PHONY:		all clean fclean re  
