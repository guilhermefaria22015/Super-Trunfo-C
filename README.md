# Super Trunfo - Países

## Descrição

Este projeto consiste na implementação do jogo **Super Trunfo - Países**, desenvolvido na linguagem C. O sistema permite o cadastro de cartas representando cidades e a comparação de seus atributos para determinar a carta vencedora.

O projeto foi desenvolvido como parte dos estudos de programação em C, aplicando conceitos fundamentais como variáveis, estruturas condicionais, estruturas de repetição, funções, menus interativos e manipulação de dados.

---

## Funcionalidades

### Cadastro de Cartas

O usuário pode cadastrar duas cartas contendo:

* Estado
* Código da carta
* Nome da cidade
* População
* Área
* PIB
* Número de pontos turísticos

### Cálculos Automáticos

O sistema calcula automaticamente:

* Densidade populacional

### Comparação de Cartas

Permite comparar as cartas utilizando os seguintes atributos:

* População
* Área
* PIB
* Número de pontos turísticos
* Densidade populacional

### Regras de Comparação

* Para População, Área, PIB e Pontos Turísticos:

  * O maior valor vence.

* Para Densidade Populacional:

  * O menor valor vence.

### Recursos Avançados

* Menu interativo utilizando `switch`.
* Comparação de dois atributos simultaneamente.
* Tratamento de empates.
* Exibição clara dos resultados.

---

## Tecnologias Utilizadas

* Linguagem C
* GCC (GNU Compiler Collection)

---

## Conceitos Aplicados

* Variáveis e tipos de dados
* Operadores aritméticos
* Operadores relacionais
* Operador ternário
* Estruturas condicionais (`if`, `else if`, `else`)
* Estruturas de decisão (`switch`)
* Entrada e saída de dados (`scanf` e `printf`)
* Cálculos matemáticos
* Lógica de comparação

---

## Estrutura do Projeto

```text
super-trunfo-paises/
│
├── super_trunfo.c
└── README.md
```

---

## Como Compilar

### Linux / macOS

```bash
gcc super_trunfo.c -o super_trunfo
```

### Windows (MinGW)

```bash
gcc super_trunfo.c -o super_trunfo.exe
```

---

## Como Executar

### Linux / macOS

```bash
./super_trunfo
```

### Windows

```bash
super_trunfo.exe
```

---

## Exemplo de Uso

```text
=== CADASTRO CARTA 1 ===
Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25
PIB: 380.5
Pontos Turísticos: 150

=== CADASTRO CARTA 2 ===
Cidade: São Paulo
População: 12300000
Área: 1521.11
PIB: 820.3
Pontos Turísticos: 180

=== ESCOLHA O PRIMEIRO ATRIBUTO ===
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Populacional

=== RESULTADO FINAL ===
Vencedora: São Paulo
```

---

## Objetivos de Aprendizado

Este projeto foi desenvolvido para praticar:

* Programação estruturada
* Manipulação de dados em C
* Estruturas de decisão
* Desenvolvimento de lógica de jogos
* Organização de código
* Boas práticas de programação

---

## Autor

Desenvolvido por Guilherme Faria como parte dos estudos em Ciência da Computação e desenvolvimento de software utilizando a linguagem C.
