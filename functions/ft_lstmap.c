#include "libft.h"

typedef struct s_list 
{
    void *content;
    struct s_list *next;
} t_list;

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) 
{
    if (lst == NULL || f == NULL) 
    {
        return NULL;
    }

    t_list *new_list = NULL;
    t_list *current = lst;

    while (current != NULL) 
    {
        void *new_content = f(current->content);
        if (new_content == NULL) 
        {
            ft_lstclear(&new_list, del);
            return NULL;
        }
        t_list *new_node = ft_lstnew(new_content);
        if (new_node == NULL) 
        {
            del(new_content);
            ft_lstclear(&new_list, del);
            return NULL;
        }
        ft_lstadd_back(&new_list, new_node);
        current = current->next;
    }
    return new_list;
}
