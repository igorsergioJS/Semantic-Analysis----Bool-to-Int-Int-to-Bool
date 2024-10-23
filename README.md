# Semantic-Analysis----Bool-to-Int-Int-to-Bool

Laboratório 02 - Análise Semântica: Conversões automáticas entre os tipos Bool e Int.

Foi utilizado como código-base o analisador semântico disponibilizado no material de laboratório 10 de Compiladores do professor Judson Santos Santiago. [Link aqui.](https://github.com/JudsonSS/Compiladores/tree/2e1b81ba859e18e938ea149d1cef2edea04dde36/Labs/Lab10/Ast)

O AST agora:

- Conversão de int para bool: Em expressões lógicas, condicionais e relacionais, int é automaticamente convertido para bool.

- Conversão de bool para int: Em expressões aritméticas e atribuições, bool é automaticamente convertido para int.

- Verificação de Tipos: Verifica tipos e lança erros para operandos incompatíveis, exceto quando são convertíveis entre int e bool.

- Atribuição Flexível: Permite a atribuição entre variáveis de tipos int e bool com conversão automática.

- Operações Aritméticas Flexíveis: Suporta operações aritméticas entre int e bool, convertendo bool para int.

- Operações Relacionais Flexíveis: Permite comparações entre int e bool, convertendo ambos para int para comparação.
