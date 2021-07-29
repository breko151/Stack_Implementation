#include "stack.h"

void procedure();

int main(int argc, char **argv) {
    procedure();
    return 0;
}

void procedure() {
    Stack dish;
    char ans = 'n';
    int opc = 0;
    int value = 0;
    dish = createStack();
    printf("Welcome...");
    while(ans == 'n' || ans == 'N') {
        printf("\nThese are your options:");
        printf("\n1. Add a new value");
        printf("\n2. Consult the last-in value");
        printf("\n3. Delete the last-in value");
        printf("\n4. Consult if the Stack is empty");
        printf("\nYour option is: ");
        scanf("%d", &opc);
        switch (opc) {
        case 1:
            printf("Value to add: ");
            scanf("%d", &value);
            push(&dish, value);
            break;
        case 2:
            printf("\nThe last-in value is: %d", top(dish));
            break;
        case 3:
            printf("\nThe value deleted was: %d", pop(&dish));
            break;
        case 4:
            if(isEmpty(dish)) {
                printf("\nThe Stack is empty");
            }else {
                printf("\nThe Stack is not empty");
            }
            break;
        default:
        printf("\nChoose a right option");
            break;
        }
        fflush(stdin);
        printf("\nDo you want to exit? [y/n]: ");
        scanf("%c", &ans);    
    }
}