CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes
RM = rm -f
NAME = push_swap
NAME_BONUS = checker

SRCS =  src/deque_utils1.c		\
		src/deque_utils2.c		\
		src/ft_atoi.c			\
		src/ft_memcpy.c			\
		src/ft_split.c			\
		src/ft_strchr.c			\
		src/ft_strcmp.c			\
		src/ft_strdup.c			\
		src/ft_strlen.c			\
		src/ft_substr.c			\
		src/main_utils.c		\
		src/main.c				\
		src/pa_pb.c				\
		src/push_swap_utils.c	\
		src/push_swap.c			\
		src/ra_rb_rr.c			\
		src/rra_rrb_rrr.c		\
		src/sa_sb_ss.c			\
		src/sort_utils.c

SRCS_BONUS = bonus/deque_utils1_bonus.c				\
			bonus/deque_utils2_bonus.c				\
			bonus/ft_atoi_bonus.c					\
			bonus/ft_memcpy_bonus.c					\
			bonus/ft_split_bonus.c					\
			bonus/ft_strchr_bonus.c					\
			bonus/ft_strcmp_bonus.c					\
			bonus/ft_strdup_bonus.c					\
			bonus/ft_strlen_bonus.c					\
			bonus/ft_substr_bonus.c					\
			bonus/main_bonus.c						\
			bonus/main_utils_bonus.c				\
			bonus/pa_pb_bonus.c						\
			bonus/push_swap_bonus.c					\
			bonus/push_swap_utils_bonus.c			\
			bonus/ra_rb_rr_bonus.c					\
			bonus/rra_rrb_rrr_bonus.c				\
			bonus/sa_sb_ss_bonus.c					\
			get_next_line/get_next_line_utils.c		\
			get_next_line/get_next_line.c			

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all : $(NAME)
bonus : $(NAME_BONUS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean :
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME) $(NAME_BONUS)

re : fclean all

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

$(NAME_BONUS) : $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAME_BONUS)

.PHONY : all clean fclean re bonus
