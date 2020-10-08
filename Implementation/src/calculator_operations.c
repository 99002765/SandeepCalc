#include<calculator_operations.h>

int add(int operand1, int operand2){
    return operand1+operand2;
}
int subtract(int operand1, int operand2){
    return operand1-operand2;
}
int multiply(int operand1, int operand2){
    return operand1*operand2;
}
int divide(int operand1, int operand2){
    return operand1/operand2;
}
int modulus(int operand1, int operand2){
    return operand1%operand2;
}
int factorial(int operand1){
    if(operand1==1) return 1;
    else{
        return operand1*factorial(operand1-1);
    }
}
int permutation(int operand1, int operand2){
    return factorial(operand1)/factorial(operand1-operand2);
}
int combination(int operand1, int operand2){
    return factorial(operand1)/multiply(factorial(operand1-operand2),factorial(operand2));
}
