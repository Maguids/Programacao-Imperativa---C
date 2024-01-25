//este ficheiro é criado com o propósito de facilitar o acesso aos dados do enunciado

//como faltavam dados no enunciado vamos adicioná-los
#define MAXDISC 9
#define MAXALUNOS 6
// fim do acrécimo

#define MAX 11
#define MAXNOME 100


typedef struct aluno
{
    char nome[MAXNOME], codigo[MAX];
    int disc[MAX], nd;
} ALUNO;

typedef struct disciplina
{
    char nome[MAXNOME];
    int ano;
} DISCIPLINA;

int NDisc = 9;
DISCIPLINA Disc[MAXDISC] = {
    {"Programacao Imperativa", 1},
    {"Calculo Infinitesimal I", 1},
    {"Programacao Estruturada", 1},
    {"Topologia", 4},
    {"Geometria Computacional", 4},
    {"Probabilidades e Estatistica", 2},
    {"Teoria de Numeros", 3},
    {"Analise Infinitesimal", 3},
    {"Logica", 3}};

int NAlunos = 6;
ALUNO Alunos[MAXALUNOS] = {
    {"Mariana Matias", "2001018003", {2, 1, 9, 5, 3, 7}, 6},
    {"Anabela Moreira", "2000020004", {6, 2, 3, 7, 8, 9}, 6},
    {"Sonia Silva", "2000020005", {5, 6, 1, 8, 9}, 5},
    {"Joao Maria Peixoto", "2000018001", {3, 4, 1, 5}, 4},
    {"Joao Mario Pereira", "2004010005", {8, 1, 2, 3, 4, 5, 6}, 7},
    {"Maria Reis", "2000020050", {5, 6, 1, 7, 3, 9}, 6}
};
