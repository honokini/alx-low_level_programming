/**
 * print_name - Prints a name.
 * @name: Pointer to name.
 * @f: function pointer.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
