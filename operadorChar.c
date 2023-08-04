#include <stdio.h>

void operacao_int(int a, int b, char op, int* res) {
    if(op == '+'){*res = a+b}
    if(op == '-'){*res = a-b}
    if(op == '*'){*res = a*b}
    if(op == '/'){*res = a/b}
    if(op == '%'){*res = a%b}
    if(op == '|'){*res = a|b}
    if(op == '&'){*res = a&b}
    if(op == '^'){*res = a^b}
}