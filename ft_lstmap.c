#include "ft_lstadd_back.c"
#include "ft_lstclear.c"
#include "ft_lstnew.c"
#include "libft.h"
#include <stdio.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_list;
	t_list	*tmp;
	t_list	*orig;

	new_list = NULL;
	orig = new_list;
	while (lst)
	{
		tmp = lst;
		new = ft_lstnew(f(lst->content));
		(del)(lst->content);
		lst = tmp->next;
		ft_lstadd_back(&new_list, new);
		free(tmp);
	}
	return (new_list);
}
// void	print_list(t_list *begin)
// {
// 	while (begin)
// 	{
// 		printf("%s\n", (char *)begin->content);
// 		begin = begin->next;
// 	}
// }
//
// void	*to_upper(void *content)
// {
// 	char	*str;
// 	char	*str1;

// 	str = malloc(sizeof(strlen((char *)content)));
// 	str1 = str;
// 	str = strcpy(str, (char *)content);
// 	while (*str)
// 	{
// 		*str -= 32;
// 		str++;
// 	}
// 	return (str1);
// }
// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*new;

// 	list = ft_lstnew(strdup("a"));
// 	list->next = ft_lstnew(strdup("b"));
// 	list->next->next = ft_lstnew(strdup("c"));
// 	new = ft_lstmap(list, to_upper, free);
// 	print_list(new);
//   ft_lstclear(&new, free);
// }
