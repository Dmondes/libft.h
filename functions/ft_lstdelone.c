#include "libft.h"

typedef struct s_list 
{
    void *content;
    struct s_list *next;
} t_list;

void ft_lstdelone(t_list *lst, void (*del)(void *)) 
{
    if (lst == NULL || del == NULL) 
    {
        return;
    }
    if (lst->content != NULL) 
    {
        del(lst->content);
    }
    free(lst);
}
