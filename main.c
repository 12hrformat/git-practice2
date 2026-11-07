#include <stdio.h>

int main() {

    char name[30] = " ";
    char usr[30] = " ";
    char root_password[20] = " ";
    char root_password2[20] = " ";
    char host[6] = "copper";
    char if_root_sym[1] = " ";
    char if_root[5] = " ";

    printf("\tWelcome to Copper Linux!");
    printf("\tCouple of question(s) and you're in");

    printf("\tWhat should be your name: ");
    scanf(" %c\n", &name);

    if (name=="sparsh")
        if_root=="True";
    else
        if_root=="False";
    

    printf("\tWhat should be your username: ");
    scanf(" %c\n", &usr);

    printf("\tWhat should be the root password: ");
    scanf(" %c\n", &root_password);

    printf("\tPlease enter it again: ");
    scanf(" %c\n", &root_password2);

    if (root_password==rootpassword2);
        printf("All done! Please enjoy [Copper Linux (Ingot v1.2.0)]\n");
        if (if_root=="True")
            if_root_sym=="#";
        else
            if_root_sym=="$";
        scanf("%c@%c %c~%c ", usr, host, pwd, if_root_sym);

    return 0;
}