// alínea 1
//  Defininindo no ficheiro source dict.c o dicionario, podemos declarar o char *dicionario no ficheiro header
// da forma "extern char *dicionario", visto que assim qualquer ficheiro source que inclua o header file dict.h
// já vai ter o dicionário "importado".


// alínea 2
//  gcc -Wall -o dicionario dict.c main.c dict.h