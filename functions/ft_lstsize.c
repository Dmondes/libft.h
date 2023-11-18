#include "libft.h"

typedef struct s_list 
{
    void *content;
    struct s_list *next;
} t_list;

int ft_lstsize(t_list *lst)
 {
    int count = 0;
    while (lst != NULL) 
    {
        count++; 
        lst = lst->next; 
    }
    return count;
}

