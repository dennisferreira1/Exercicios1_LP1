# LP1 2018.2 - 27/10/2018
# Makefile - Questão 2
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
OBJS= $(BUILD)/pessoa.o $(BUILD)/main.o   

# Make--> Chama o primeiro alvo (INICIO) o qual chamará os alvos "criarDiretórios" e "PROGRAMAS"
INICIO: criarDiretorios PROGRAMAS

# Criação dos subdiretórios BUILD e BIN
criarDiretorios:
	if exist $(BUILD) (echo pasta ja existe) else md $(BUILD)
	if exist $(BIN) (echo pasta ja existe) else md $(BIN)

# Chamará os alvos com os nomes dos binários/executáveis
PROGRAMAS: $(BIN)/questao2

# Gerando o arquivo executável "questao2" na pasta "BIN" apartir dos arquivos objetos
# contidos na variável "OBJS" 
$(BIN)/questao2: $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $(OBJS)


# Gerando o arquivo objeto "pessoa.o" na pasta "build" a partir das dependências "pessoa.cpp" e "pessoa.h"
$(BUILD)/pessoa.o: $(SRC)/pessoa.cpp $(INC)/pessoa.h 
	$(CC) $(CPPFLAGS) -c $< -o $@


# Gerando o arquivo objeto "main.o" na pasta "build" a partir das dependências "main.cpp", "pessoa.o"
$(BUILD)/main.o: $(SRC)/main.cpp $(BUILD)/pessoa.o
	$(CC) $(CPPFLAGS) -c $< -o $@


run:
	$(BIN)/questao2
	
# Deletar todos os arquivos das pastas "BIN" e "BUILD"
clean:
	del $(BIN) /q
	del $(BUILD) /q
