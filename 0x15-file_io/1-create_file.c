#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

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

    if (filename == NULL)
    {
        return (-1);
    }

    fileToCreate = open(filename, O_CREAT | O_RDWR);

    if (fileToCreate < 0)
    {
        return (-1);
    }

    if (text_content == NULL)
    {
        close(fileToCreate);
        return (1);
    }

    writeText = write(fileToCreate, text_content, 10000);

    close(fileToCreate);

    return (1);


}
