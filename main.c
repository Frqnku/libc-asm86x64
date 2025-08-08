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
char    *ft_strdup(const char *s);

int main(void)
{
    char copy_asm[100];
    char copy_c[100];
    char buffer_asm[100];
    char buffer_c[100];
    char *dup_asm;
    char *dup_c;

    printf("asm ft_strlen: %zu\n", ft_strlen("Hello"));
    printf("c strlen: %zu\n", strlen("Hello"));

    ft_strcpy(copy_asm, "Hello World!");
    printf("asm ft_strcpy: %s\n", copy_asm);

    strcpy(copy_c, "Hello World!");
    printf("c strcpy: %s\n", copy_c);

    printf("asm ft_strcmp: %d\n", ft_strcmp("abc", "abc"));
    printf("c strcmp: %d\n", strcmp("abc", "abc"));

    ft_write(1, "asm ft_write: Hello!\n", 21);
    write(1, "c write: Hello!\n", 16);

    printf("asm ft_read: Enter some text:\n");
    ft_read(0, buffer_asm, 10);
    buffer_asm[10] = '\0';
    printf("asm ft_read: %s", buffer_asm);

    printf("c read: Enter some text:\n");
    read(0, buffer_c, 10);
    buffer_c[10] = '\0';
    printf("c read: %s", buffer_c);

    dup_asm = ft_strdup("Duplicate me!");
    printf("asm ft_strdup: %s\n", dup_asm);
    free(dup_asm);

    dup_c = strdup("Duplicate me!");
    printf("c strdup: %s\n", dup_c);
    free(dup_c);

    return 0;
}
