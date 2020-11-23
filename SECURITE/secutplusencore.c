#include <stdio.h>
#include <string.h>

/*


*/

#define BUFFER_SIZE 5
//juste un exemple n'est pas du tout sécurisé

void flush_input_buffer(void)
{
    int c = 0;

    while (c != '\n' && c != EOF)
        c = getchar();
}

char *input_read(char *str, int size)
{
    char *data;

    data = fgets(str, size, stdin);

    if (data)
    {
        size_t len = strlen(str) - 1;

        if (str[len] == '\n')
            str[len] = '\0';
        else
        {
            fscanf(stdin, "%*[^\n]");
            fgetc(stdin);
        }
    }

    return data;
}

int main(void)
{
    char buffer[BUFFER_SIZE + 1];

    printf("Mot en 5 lettres : ");
    input_read(buffer, BUFFER_SIZE + 1);

    printf("%s\n", buffer);

    return 0;
}
