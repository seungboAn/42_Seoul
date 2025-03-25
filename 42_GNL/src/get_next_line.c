#include "get_next_line.h"

static int ft_process_line(char **storage, char **line)
{
    char    *tmp;
    char    *newline_pos;

    if (!*storage)
        return (0);
    if ((newline_pos = ft_strchr(*storage, '\n')))
    {
        *line = ft_substr(*storage, 0, newline_pos - *storage);
        tmp = ft_strdup(newline_pos + 1);
        free(*storage);
        *storage = tmp;
        return (1);
    }
    else
    {
        *line = ft_strdup(*storage);
        free(*storage);
        *storage = NULL;
        return (0);
    }
}

static int ft_read_file(int fd, char **storage, char *buffer)
{
    char    *tmp;
    int     bytes_read;

    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[bytes_read] = '\0';
        if (!*storage)
            *storage = ft_strdup(buffer);
        else
        {
            tmp = ft_strjoin(*storage, buffer);
            free(*storage);
            *storage = tmp;
        }
        if (ft_strchr(buffer, '\n'))
            break;
    }
    return (bytes_read);
}

int get_next_line(int fd, char **line)
{
    static char *storage[1024];
    char        buffer[BUFFER_SIZE + 1];
    int         bytes_read;

    if (fd < 0 || !line || BUFFER_SIZE <= 0)
        return (-1);
    bytes_read = ft_read_file(fd, &storage[fd], buffer);
    if (bytes_read < 0)
        return (-1);
    return (ft_process_line(&storage[fd], line));
} 