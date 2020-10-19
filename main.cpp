#include "Engenheiro.cpp"
#include "Vendedor.cpp"

void print_eng_dados(Engenheiro eng){
  std::cout << "Nome: " << eng.nome << std::endl;
  std::cout << "Salario Mes: " << eng.pagamentoMes(eng.horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << eng.projetos << std::endl;
  std::cout << std::endl;
}

Engenheiro cria_engenheiro(std::string nome, double salarioHora, int proj, double horasTrabalhadas){
  Engenheiro eng;
  eng.nome = nome;
  eng.salarioHora = salarioHora;
  eng.projetos = proj;
  eng.horasTrabalhadas = horasTrabalhadas;
  return eng;
}

void print_vend_dados(Vendedor vend){
  std::cout << "Nome: " << vend.nome << std::endl;
  std::cout << "Salario Mes: " << vend.pagamentoMes(vend.horasTrabalhadas) << std::endl;
  std::cout << "Quota vendas: " << vend.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
}

Vendedor cria_vendedor(std::string nome, double salarioHora, double quota, double horasTrabalhadas){
  Vendedor vend;
  vend.nome = nome;
  vend.salarioHora = salarioHora;
  vend.quotaMensalVendas = quota;
  vend.horasTrabalhadas = horasTrabalhadas;
  return vend;
}

int main() {

  Engenheiro eng1 = cria_engenheiro("Joao Snow", 35, 3, 9.5);
  print_eng_dados(eng1);
  
  Engenheiro eng2 = cria_engenheiro("Daniela Targaryen", 30, 1, 8);
  print_eng_dados(eng2);

  Engenheiro eng3 = cria_engenheiro("Bruno Stark", 30, 2, 8);
  print_eng_dados(eng3);
  
  
  Vendedor vend1 = cria_vendedor("Tonho Lannister", 20, 5000, 6);
  print_vend_dados(vend1);
  
  Vendedor vend2 = cria_vendedor("Jose Mormont", 25, 3000, 8);
  print_vend_dados(vend2); 
	
  Vendedor vend3 = cria_vendedor("Sonia Stark", 30, 4000, 8);
  print_vend_dados(vend3);
  
  return 0;	
}