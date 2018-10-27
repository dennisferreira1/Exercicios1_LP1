# LP1 2018.2 - 27/10/2018
# Makefile - Questão 8
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
OBJS= $(BUILD)/tempo.o $(BUILD)/teste_tempo.o   

# Make--> Chama o primeiro alvo (INICIO) o qual chamará os alvos "criarDiretórios" e "PROGRAMAS"
INICIO: criarDiretorios PROGRAMAS

# Criação dos subdiretórios BUILD e BIN
criarDiretorios:
	if exist $(BUILD) (echo pasta ja existe) else md $(BUILD)
	if exist $(BIN) (echo pasta ja existe) else md $(BIN)

# Chamará os alvos com os nomes dos binários/executáveis
PROGRAMAS: $(BIN)/questao8

# Gerando o arquivo executável "questao2" na pasta "BIN" apartir dos arquivos objetos
# contidos na variável "OBJS" 
$(BIN)/questao8: $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $(OBJS)


# Gerando o arquivo objeto "tempo.o" na pasta "build" a partir das dependências "tempo.cpp" e "tempo.h"
$(BUILD)/tempo.o: $(SRC)/tempo.cpp $(INC)/tempo.h 
	$(CC) $(CPPFLAGS) -c $< -o $@


# Gerando o arquivo objeto "teste_tempo.o" na pasta "build" a partir das dependências "teste_tempo.cpp", "tempo.o"
$(BUILD)/teste_tempo.o: $(SRC)/teste_tempo.cpp $(BUILD)/tempo.o
	$(CC) $(CPPFLAGS) -c $< -o $@


run:
	$(BIN)/questao8
	
# Deletar todos os arquivos das pastas "BIN" e "BUILD"
clean:
	del $(BIN) /q
	del $(BUILD) /q
