#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valid(char name)
{
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name))
        {
            return 0;
        }
    }
}

int main()
{
    char name() = "Ani4321";

    if (valid(name))
    {
        printf("Valid String");
    }
    else
    {
        printf("In Valid String");
    }
    return 0;
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int isValidString(const char *str) {
//     int i;
//     for (i = 0; i < strlen(str); i++) {
//         if (!isalnum(str[i]) && str[i] != '_') {
//             return 0; // string is not valid
//         }
//     }
//     return 1; // string is valid
// }

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strlen(str) - 1] = '\0'; // remove the newline character

//     if (isValidString(str)) {
//         printf("The string is valid.\n");
//     } else {
//         printf("The string is not valid.\n");
//     }

//     return 0;
// }