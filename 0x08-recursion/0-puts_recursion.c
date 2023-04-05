#include "main.h"
/**
 * _puts_recursion - check the code
 * @s: String
 * Return: Void.
 */

void _puts_recursion(char *s)
{
  _putchar(*s);
  if (*s == '\0')
    return;
  s++;
  _puts_recursion(s);
}
