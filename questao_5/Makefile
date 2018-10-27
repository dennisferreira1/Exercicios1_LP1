# LP1 2018.2 - 27/10/2018
# Makefile - Questão 5
# Dennis Ferreira Silva


# Variaveis para os subdiretorios
BIN= bin
BUILD= build
INC= include
SRC= src


# Compilador
CC= g++

# Opcoes de compilação
CPPFLAGS= -Wall -g -pedantic -O0 -std=c++11 -I$(INC)

#Lista dos arquivos objetos (.o) que formam o binario/executavel final 
OBJS= $(BUILD)/livro.o 

# Make--> Chama o primeiro alvo (INICIO) o qual chamará os alvos "criarDiretórios" e "$(BUILD)/livro.o"
INICIO: criarDiretorios $(BUILD)/livro.o

# Criação dos subdiretórios BUILD e BIN
criarDiretorios:
	if exist $(BUILD) (echo pasta ja existe) else md $(BUILD)


# Gerando o arquivo objeto "livro.o" na pasta "build" a partir das dependências "livro.cpp" e "livro.h"
$(BUILD)/livro.o: $(SRC)/livro.cpp $(INC)/livro.h 
	$(CC) $(CPPFLAGS) -c $< -o $@

	
# Deletar todos os arquivos das pastas "BIN" e "BUILD"
clean:
	del $(BUILD) /q
