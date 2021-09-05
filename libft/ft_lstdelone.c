#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* To delete one list node.
 del is function pointed by user to remove the memory pointed by content.
 Do not free next is because next is pointing to next node,
 freeing it will free the node. */
