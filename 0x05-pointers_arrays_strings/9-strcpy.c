/**
* _strcpy - Copies a string, including the terminating null byte, from src
* to dest.
*
* @dest: A buffer to copy the string to.
* @src: The string to copy.
*
* Return: A pointer to the destination buffer.
*/
char *_strcpy(char *dest, char *src)
{
char *dest_orig = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0'; /* Append terminating null byte */
return (dest_orig);
}
