#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*allocate;

	allocate = (t_list *)malloc(sizeof(t_list));
	if (!allocate)
		return (NULL);
	allocate->content = content;
	allocate->next = NULL;
	return (allocate);
}
