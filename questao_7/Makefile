# LP1 2018.2 - 27/10/2018
# Makefile - Questão 7
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
OBJS= $(BUILD)/sorteadora.o $(BUILD)/cartela.o $(BUILD)/jogador.o $(BUILD)/bingo.o $(BUILD)/testeBingo.o

# Make--> Chama o primeiro alvo (INICIO) o qual chamará os alvos "criarDiretórios" e "PROGRAMAS"
INICIO: criarDiretorios PROGRAMAS

# Criação dos subdiretórios BUILD e BIN
criarDiretorios:
	if exist $(BUILD) (echo pasta ja existe) else md $(BUILD)
	if exist $(BIN) (echo pasta ja existe) else md $(BIN)

# Chamará os alvos com os nomes dos binários/executáveis
PROGRAMAS: $(BIN)/questao7

# Gerando o arquivo executável "questao2" na pasta "BIN" apartir dos arquivos objetos
# contidos na variável "OBJS" 
$(BIN)/questao7: $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $(OBJS)

# Gerando o arquivo objeto "sorteadora.o" na pasta "build" a partir das dependências "sorteadora.cpp" e "sorteadora.h"
$(BUILD)/sorteadora.o: $(SRC)/sorteadora.cpp $(INC)/sorteadora.h 
	$(CC) $(CPPFLAGS) -c $< -o $@

# Gerando o arquivo objeto "cartela.o" na pasta "build" a partir das dependências "cartela.cpp" e "cartela.h"
# e "sorteadora.h".
$(BUILD)/cartela.o: $(SRC)/cartela.cpp $(INC)/cartela.h $(INC)/sorteadora.h
	$(CC) $(CPPFLAGS) -c $< -o $@

# Gerando o arquivo objeto "jogador.o" na pasta "build" a partir das dependências "jogador.cpp" e "jogador.h"
# e "cartela.h".
$(BUILD)/jogador.o: $(SRC)/jogador.cpp $(INC)/jogador.h $(INC)/cartela.h
	$(CC) $(CPPFLAGS) -c $< -o $@

# Gerando o arquivo objeto "bingo.o" na pasta "build" a partir das dependências "bingo.cpp" e "bingo.h"
# e "sorteadora.h" e jogador.h.
$(BUILD)/bingo.o: $(SRC)/bingo.cpp $(INC)/bingo.h $(INC)/sorteadora.h $(INC)/jogador.h
	$(CC) $(CPPFLAGS) -c $< -o $@


# Gerando o arquivo objeto "testeBingo.o" na pasta "build" a partir das dependências "testeBingo.cpp" e "bingo.h"
$(BUILD)/testeBingo.o: $(SRC)/testeBingo.cpp $(INC)/bingo.h
	$(CC) $(CPPFLAGS) -c $< -o $@


run:
	$(BIN)/questao7
	
# Deletar todos os arquivos das pastas "BIN" e "BUILD"
clean:
	del $(BIN) /q
	del $(BUILD) /q
