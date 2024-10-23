/* teste da implementação de conversão automática entre int e bool */

int main() {
    int a;
    int b;
    bool resultado;

    a = 10;
    b = 0;  // deve ser convertido para false
    resultado = a > 5 && b;  // b é convertido para false

    // outro teste
    a = 0;  // a será convertido para false
    resultado = a || b;  // tanto a quanto b são false
    resultado = 2 * resultado;
}
