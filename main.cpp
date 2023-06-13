#include <iostream>
#include <vector>

using namespace std;

void selecionar_produtos(); //informações na linha 42
void administrador (); // informações na linha 80
void retirada_estoque (); // informações na linha 96

int main() {
	
	
	int modo;
	int senhaadm;
	
	//Selecionar modo Usuário ou Administrador

while (true){

cout << "Voce quer acessar como usuario ou administrador?\n";
cout << "1 - Usuario \n";
cout << "2 - Administrador\n ";
cin >> modo;

//Se o modo selecionado for usuario para a opção de selecionar_produtos
//Se o modo selecionado for administrador inserir a senha 1234 para mais acessos

if (modo == 1) {
	selecionar_produtos();
} else if (modo == 2) {
	cout << "Inserir a senha de administrador: \n";
	cin >> senhaadm;
		if (senhaadm == 1234) {
		  administrador();
	}   else 
	      cout << "Senha incorreta\n";
}
}
}

//Aqui o usuario seleciona os produtos que deseja, informa o valor que esta pagando
void selecionar_produtos() {
	
	int produto_usuario;
	double valor_inserido;
	double valor_produto;
	double troco;
	
	cout << "Selecione o produto desejado: \n";
	cout << "1 - Achocolatado R$ 2,00 \n";
	cout << "2 - Salgadinho de milho R$ 4,00 \n";
	cout << "3 - Pipoca doce R$ 3,00 \n";
	cout << "4 - Pipoca salgada R$ 3,00 \n";
	cout << "5 - Refrigerante R$ 5,00 \n";
	cin >> produto_usuario;
	
	cout << "Qual valor foi inserido na maquina?\n";
	cin >> valor_inserido;
	
	switch (produto_usuario){
		case 1: valor_produto = 2;
		break;
		case 2: valor_produto = 4;
		break;
		case 3: valor_produto = 3;
		break;
		case 4: valor_produto = 3;
		break;
		case 5: valor_produto = 5;
	}
	
	if ((troco = valor_inserido - valor_produto) <0) {
		cout << "Por favor, inserir um valor maior\n";
		} else
		retirada_estoque ();
		cout << "Retire o seu produto e seu troco de R$" << troco << "\n" "\n" "\n";
		} 
	

void administrador () {
	
	int dados_atual;
	
	cout << "O que você gostaria de fazer? \n";
	cout << "1 - Inventario o estoque\n";
	cout << "2 - Ver faturamento\n";
	cin >> dados_atual;
	
switch 	(dados_atual) {
	 //case 1 : vetor para a quantidade de estoque
	 //break;
	 //case 2 : vetor para faturamento
	 //break;
}
}
void retirada_estoque () {
//açao para reduzir itens do estoque
}
