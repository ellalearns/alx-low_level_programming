#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - function
 * @filename: argument
 * @text_content: another argument
 * Return: integer 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int theFile;
int appendText;
int textLength;

if (filename == NULL)
{
return (-1);
}

theFile = open(filename, O_APPEND | O_RDWR | O_CREAT);

if (theFile < 0)
{
return (-1);
}

if (text_content != NULL)
{
textLength = 0;
while (text_content[textLength])
{
textLength++;
}
}

appendText = write(theFile, text_content, textLength);

if (appendText < 1)
{
return (-1);
}

return (1);

}
