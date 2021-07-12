#include <stdio.h>

int main(){

int number1, number2, result;
char op;

printf("Choose the operation required: (+,-,/,*)");
scanf("%c", &op);

printf("Enter your first number\n");
scanf("%d", &number1);

printf("Enter your second number\n");
scanf("%d", &number2);


if (op=='+'){
    result=number1+number2;
    printf("\n %d %c %d=%d", number1, number2, op, result);
}
else if(op=='-'){
    result=number1-number2;
    printf("\n %d %c %d=%d", number1, number2, op, result);
}
else if(op=='*'){

    result=number1*number2;
    printf("\n %d %c %d=%d", number1, number2, op, result);
}

else if (op=='/'){

    result=number1/number2;
    printf("\n %d %c %d=%d", number1, number2, op, result);
}
else{
    printf("invalid input");
}

}
