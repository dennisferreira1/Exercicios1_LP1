# LP1 2018.2 - 27/10/2018
# Makefile - Questão 1
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
OBJS= $(BUILD)/carro.o $(BUILD)/main.o   

# Make--> Chama o primeiro alvo (INICIO) o qual chamará os alvos "criarDiretórios" e "PROGRAMAS"
INICIO: criarDiretorios PROGRAMAS

# Criação dos subdiretórios BUILD e BIN
criarDiretorios:
	if exist $(BUILD) (echo pasta ja existe) else md $(BUILD)
	if exist $(BIN) (echo pasta ja existe) else md $(BIN)

# Chamará os alvos com os nomes dos binários/executáveis
PROGRAMAS: $(BIN)/questao1

# Gerando o arquivo executável "questao1" na pasta "BIN" apartir dos arquivos objetos
# contidos na variável "OBJS" 
$(BIN)/questao1: $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $(OBJS)


# Gerando o arquivo objeto "carro.o" na pasta "build" a partir das dependências "carro.cpp" e "carro.h"
$(BUILD)/carro.o: $(SRC)/carro.cpp $(INC)/carro.h 
	$(CC) $(CPPFLAGS) -c $< -o $@


# Gerando o arquivo objeto "main.o" na pasta "build" a partir das dependências "main.cpp", "carro.o"
$(BUILD)/main.o: $(SRC)/main.cpp $(BUILD)/carro.o
	$(CC) $(CPPFLAGS) -c $< -o $@


run:
	$(BIN)/questao1
	
# Deletar todos os arquivos das pastas "BIN" e "BUILD"
clean:
	del $(BIN) /q
	del $(BUILD) /q
