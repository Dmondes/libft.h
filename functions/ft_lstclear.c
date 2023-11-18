#include "libft.h"

typedef struct s_list 
{
    void *content;
    struct s_list *next;
} t_list;

void ft_lstclear(t_list **lst, void (*del)(void *)) 
{
    if (lst == NULL || del == NULL) 
    {
        return;
    }
    t_list *current = *lst;
    t_list *temp;
    while (current != NULL) 
    {
        temp = current->next;
        if (current->content != NULL)
        {
            del(current->content);
        }
        free(current);
        current = temp;
    }
    *lst = NULL;
}
