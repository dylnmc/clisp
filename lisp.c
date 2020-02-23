#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

/**
 * clisp
 * -----
 *  another lisp interpretter in C
 *
 * author: Dylan McClure <dylnmc at gmail dot com>
 * date: Feb 23 2020 <23/02/20>
 * version: 0.0
 */

char* READ(char prompt[]);

int main(void) {
    char prompt[101];
    snprintf(prompt, sizeof(prompt), "%s", "λ> ");

    for (;;) {
        char *line;
        line = READ(prompt);
        if (!line)
            return 0;
        printf("%s\n", line);
        free(line);
    }
}

char* READ(char prompt[]) {
    char *line;
    line = readline(prompt);
    if (!line)
        return NULL;
    add_history(line);
    return line;
}

