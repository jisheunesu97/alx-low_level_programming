#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

void free_grid(int **grid, int height);
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *create_array(unsigned int size, char c);
char *argstostr(int ac, char **av);

#endif
