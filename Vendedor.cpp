#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
	double quotaMensalVendas;

	double quotaTotalAnual() {
		int meses = 12;
		return quotaMensalVendas * meses;
	}
	
};

