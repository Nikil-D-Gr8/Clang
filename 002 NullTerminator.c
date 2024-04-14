#include <stdio.h>

int main() {
    char str_with_null[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Null terminator '\0'
    char str_with_empty[] = {'H', 'e', 'l', 'l', 'o', ''};  // Error: Empty character ''
    
    // Print characters in str_with_null until null terminator '\0' is encountered
    printf("String with null terminator: ");
    for (int i = 0; str_with_null[i] != '\0'; i++) {
        printf("%c", str_with_null[i]);
    }
    printf("\n");
    
    // Print characters in str_with_empty (Error: Empty character '' is not allowed)
    printf("String with empty character: ");
    for (int i = 0; str_with_empty[i] != '\0'; i++) {  // Error: Loop will not terminate
        printf("%c", str_with_empty[i]);
    }
    printf("\n");
    
    return 0;
}
