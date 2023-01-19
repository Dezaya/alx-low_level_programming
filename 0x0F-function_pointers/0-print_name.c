/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function that doesn't return anything
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
