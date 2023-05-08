#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - function
 * @filename: argument
 * @text_content: next argument
 * Return: integer
*/
int create_file(const char *filename, char *text_content)
{
int fileToCreate;
int writeText;
int strlen;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
strlen = 0;
while (text_content[strlen])
{
strlen++;
}
}
fileToCreate = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fileToCreate < 0)
return (-1);
if (text_content == NULL)
return (1);
writeText = write(fileToCreate, text_content, (strlen));
if (writeText < 0)
return (-1);
close(fileToCreate);
return (1);
}
