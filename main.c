#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

size_t  ft_strlen(const char *s);
char    *ft_strcpy(char *dst, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);
// char    *ft_strdup(const char *s);

int main(void)
{
    char copy[100];
    char buffer[100];
    //char *dup;
    printf("ft_strlen: %zu\n", ft_strlen("Hello"));
    ft_strcpy(copy, "Hello World!");
    printf("ft_strcpy: %s\n", copy);
    printf("ft_strcmp: %d\n", ft_strcmp("abc", "abc"));
    ft_write(1, "ft_write: Hello!\n", 17);
    ft_read(0, buffer, 10);
    buffer[10] = '\0';
    printf("ft_read: %s", buffer);
    // dup = ft_strdup("Duplicate me!");
    // printf("ft_strdup: %s\n", dup);
    // free(dup);
    return 0;
}
