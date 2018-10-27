#include "pessoa.h"
#include "empregado.h"
#include "aluno.h"
#include "gerente.h"
#include "vendedor.h"

int main (int argc , char const * argv [])
{
	Aluno a("Maria de Lourdes",22, "98765432-1");
	Gerente g("Emiliano Emilio",45, "666000666-1",5780.00,"Departamento Financeiro",7.5) ;
	Empregado b("Dennis", 30, "1111-1", 5000.00);
	Vendedor v("Dennis", 30, "1111-1", 5000.00, 10000.00, 1000.00);

	g.imprimeDados ();

	return 0;
}

