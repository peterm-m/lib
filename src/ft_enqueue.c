#include "libft.h"

void ft_enqueue(t_queue *q, void *content)
{
    t_list* new; 
    
	new = ft_lstnew(content);
	if (new != NULL )
	{
		if (q->rear == NULL)
		{
			q->front = new;
			q->rear = new;
			return ;
		}
		q->rear->next = new;
		q->rear = new;
	}
}

