# LP1 2018.2 - 27/10/2018
# Makefile - Questão 3
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
CPPFLAGS1= -Wall -g -pedantic -O0 -std=c++11 -I../questao_2/$(INC)

#Lista dos arquivos objetos (.o) que formam o binario/executavel final 
OBJS= $(BUILD)/pessoa.o $(BUILD)/agenda.o $(BUILD)/testeAgenda.o

# Make--> Chama o primeiro alvo (INICIO) o qual chamará os alvos "criarDiretórios" e "PROGRAMAS"
INICIO: criarDiretorios PROGRAMAS

# Criação dos subdiretórios BUILD e BIN
criarDiretorios:
	if exist $(BUILD) (echo pasta ja existe) else md $(BUILD)
	if exist $(BIN) (echo pasta ja existe) else md $(BIN)

# Chamará os alvos com os nomes dos binários/executáveis
PROGRAMAS: $(BIN)/questao3

# Gerando o arquivo executável "questao2" na pasta "BIN" apartir dos arquivos objetos
# contidos na variável "OBJS" 
$(BIN)/questao3: $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $(OBJS)

# Gerando o arquivo objeto "pessoa.o" na pasta "build" a partir das dependências "pessoa.cpp" e "pessoa.h"
$(BUILD)/pessoa.o: ../questao_2/$(SRC)/pessoa.cpp ../questao_2/$(INC)/pessoa.h 
	$(CC) $(CPPFLAGS1) -c $< -o $@

# Gerando o arquivo objeto "agenda.o" na pasta "build" a partir das dependências "agenda.cpp" e "agenda.h"
$(BUILD)/agenda.o: $(SRC)/agenda.cpp $(INC)/agenda.h ../questao_2/$(INC)/pessoa.h 
	$(CC) $(CPPFLAGS) -I../questao_2/$(INC) -c $< -o $@


# Gerando o arquivo objeto "testeAgenda.o" na pasta "build" a partir das dependências "testeAgenda.cpp", "pessoa.o"
# e "agenda.o"
$(BUILD)/testeAgenda.o: $(SRC)/testeAgenda.cpp $(BUILD)/pessoa.o $(BUILD)/agenda.o
	$(CC) $(CPPFLAGS) -I../questao_2/$(INC) -c $< -o $@


run:
	$(BIN)/questao3
	
# Deletar todos os arquivos das pastas "BIN" e "BUILD"
clean:
	del $(BIN) /q
	del $(BUILD) /q
