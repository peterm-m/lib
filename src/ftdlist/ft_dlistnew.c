
t_dlist	*ft_dlstnew(void *content)
{
	t_dlist	*new;

	new = (t_dlist *)malloc(sizeof(t_dlist));
	if (!new)
		return (new);
	new->content = content;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
