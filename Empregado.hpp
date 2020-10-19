#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    std::string nome;
    double horasTrabalhadas;
    double salarioHora;

    double pagamentoMes(double horasTrabalhadas) {
      int carga_h = 8;
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > carga_h) {
        double x = horasTrabalhadas - carga_h;
        t += x / 2;
      }
	  return t * salarioHora;
    }
	
};

#endif