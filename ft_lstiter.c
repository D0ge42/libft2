#include "ft_lstnew.c"
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	if (!lst)
		return ;
	else
	{
		(f)(lst->content);
		ft_lstiter(lst->next, (f));
	}
}
