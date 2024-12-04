#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	if (!(*lst)->next)
	{
		(*lst)->next = new;
		return ;
	}
	ft_lstadd_back(&(*lst)->next, new);
}
