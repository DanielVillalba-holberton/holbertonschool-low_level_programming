/**
 * print_name - prints a name calls another function
 * @name: pointer to name string
 * @f: callback pointer to function that prints
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
