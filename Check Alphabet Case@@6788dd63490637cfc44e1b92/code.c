// #include <stdio.h>
// int main(){
//     char ch;
//     scanf("%c",&ch);
//     if((ch >= "A") && (ch <= "Z")){
//         printf("Uppercase\n");
//     }
//     else if((ch >= "a") && (ch <= "z")){
//         printf("Lowercase");
//     }
//     else{
//         printf("Not an alphabet");
//     }
// }
#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    }
    // Check if the character is lowercase
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    }
    // If not an alphabet
    else {
        printf("Not an alphabet\n");
    }

    return 0;
}
