#include "libft.h"

typedef struct s_list 
{
    void *content;
    struct s_list *next;
} t_list;

void ft_lstadd_back(t_list **lst, t_list *new) 
{
    if (lst == NULL || new == NULL)
    {
        return; 
    }
    if (*lst == NULL) 
    {
        *lst = new;
        return;
    }
    t_list *temp = *lst;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = new;
}
