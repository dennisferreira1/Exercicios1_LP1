# LP1 2018.2 - 27/10/2018
# Makefile - Questão 6
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
OBJS= $(BUILD)/livro.o $(BUILD)/biblioteca.o $(BUILD)/menu_biblioteca.o $(BUILD)/main.o

# Make--> Chama o primeiro alvo (INICIO) o qual chamará os alvos "criarDiretórios" e "PROGRAMAS"
INICIO: criarDiretorios PROGRAMAS

# Criação dos subdiretórios BUILD e BIN
criarDiretorios:
	if exist $(BUILD) (echo pasta ja existe) else md $(BUILD)
	if exist $(BIN) (echo pasta ja existe) else md $(BIN)

# Chamará os alvos com os nomes dos binários/executáveis
PROGRAMAS: $(BIN)/questao6

# Gerando o arquivo executável "questao2" na pasta "BIN" apartir dos arquivos objetos
# contidos na variável "OBJS" 
$(BIN)/questao6: $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $(OBJS)

# Gerando o arquivo objeto "livro.o" na pasta "build" a partir das dependências "livro.cpp" e "livro.h"
$(BUILD)/livro.o: $(SRC)/livro.cpp $(INC)/livro.h 
	$(CC) $(CPPFLAGS) -c $< -o $@

# Gerando o arquivo objeto "biblioteca.o" na pasta "build" a partir das dependências "biblioteca.cpp" e "biblioteca.h"
# e "livro.h".
$(BUILD)/biblioteca.o: $(SRC)/biblioteca.cpp $(INC)/biblioteca.h $(INC)/livro.h 
	$(CC) $(CPPFLAGS) -c $< -o $@

# Gerando o arquivo objeto "menu_biblioteca.o" na pasta "build" a partir das dependências "menu_biblioteca.cpp" e "menu_biblioteca.h"
# e "biblioteca.h".
$(BUILD)/menu_biblioteca.o: $(SRC)/menu_biblioteca.cpp $(INC)/menu_biblioteca.h $(INC)/biblioteca.h 
	$(CC) $(CPPFLAGS) -c $< -o $@


# Gerando o arquivo objeto "main.o" na pasta "build" a partir das dependências "main.cpp", "livro.o",
# "biblioteca.o" e "menu_biblioteca.o"
$(BUILD)/main.o: $(SRC)/main.cpp $(BUILD)/livro.o $(BUILD)/biblioteca.o $(BUILD)/menu_biblioteca.o
	$(CC) $(CPPFLAGS) -c $< -o $@


run:
	$(BIN)/questao6
	
# Deletar todos os arquivos das pastas "BIN" e "BUILD"
clean:
	del $(BIN) /q
	del $(BUILD) /q
