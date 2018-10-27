# LP1 2018.2 - 27/10/2018
# Makefile - Questão 4
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
OBJS= $(BUILD)/data.o $(BUILD)/testeData.o   

# Make--> Chama o primeiro alvo (INICIO) o qual chamará os alvos "criarDiretórios" e "PROGRAMAS"
INICIO: criarDiretorios PROGRAMAS

# Criação dos subdiretórios BUILD e BIN
criarDiretorios:
	if exist $(BUILD) (echo pasta ja existe) else md $(BUILD)
	if exist $(BIN) (echo pasta ja existe) else md $(BIN)

# Chamará os alvos com os nomes dos binários/executáveis
PROGRAMAS: $(BIN)/questao4

# Gerando o arquivo executável "questao2" na pasta "BIN" apartir dos arquivos objetos
# contidos na variável "OBJS" 
$(BIN)/questao4: $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $(OBJS)


# Gerando o arquivo objeto "data.o" na pasta "build" a partir das dependências "data.cpp" e "data.h"
$(BUILD)/data.o: $(SRC)/data.cpp $(INC)/data.h 
	$(CC) $(CPPFLAGS) -c $< -o $@


# Gerando o arquivo objeto "testeData.o" na pasta "build" a partir das dependências "testeData.cpp", "data.o"
$(BUILD)/testeData.o: $(SRC)/testeData.cpp $(BUILD)/data.o
	$(CC) $(CPPFLAGS) -c $< -o $@


run:
	$(BIN)/questao4
	
# Deletar todos os arquivos das pastas "BIN" e "BUILD"
clean:
	del $(BIN) /q
	del $(BUILD) /q
