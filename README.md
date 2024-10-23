# Semantic-Analysis----Bool-to-Int-Int-to-Bool

Laboratório 02 - Análise Semântica: Conversões automáticas entre os tipos Bool e Int.

Foi utilizado como código-base o analisador semântico disponibilizado no material de laboratório 10 de Compiladores do professor Judson Santos Santiago. [https://github.com/JudsonSS/Compiladores/tree/2e1b81ba859e18e938ea149d1cef2edea04dde36/Labs/Lab10/Ast](Link aqui.)

O Lexer agora:

Ignora corretamente comentários de linha e de bloco, independentemente de se estenderem por múltiplas linhas.

Processa múltiplas linhas de entrada, permitindo que o usuário insira todo o código desejado antes de iniciar o processamento, encerrando a entrada ao inserir uma linha em branco.

Lida adequadamente com o EOF, evitando erros e a impressão de caracteres inválidos ao final da entrada.
