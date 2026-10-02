#include <stdio.h>
#include <string.h>

int main(void) {
    int i;
    scanf("%d", &i);
    getchar();

    char line[101];
    char output[101];

    int count = 0;
    char type = '\0';
    int x, y;
    int result;

    while (count < i && fgets(line, sizeof(line), stdin)) {
        if (line[0] == 'a' || line[0] == 'b' || line[0] == 'c') {
            sscanf(line, "%c %d %d", &type, &x, &y);
        } else {
            sscanf(line, "%d %d", &x, &y);
        }

        if (type == 'a') {
            result = x + y;
            sprintf(output, "%d+%d=%d", x, y, result);
        } else if (type == 'b') {
            result = x - y;
            sprintf(output, "%d-%d=%d", x, y, result);
        } else {
            result = x * y;
            sprintf(output, "%d*%d=%d", x, y, result);
        }

        printf("%s\n", output);
        printf("%zu\n", strlen(output));

        count++;
    }

    return 0;
}