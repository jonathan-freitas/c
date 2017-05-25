//Feito por:
//Jonathan Freitas Ferreira

#include "header.h"

//Função para remover número negativos
int Positivar(int arg){
	
	//Caso o elemento seja menor que 0, multiplique-o por -1 e retorne-o
	if(arg < 0){
		arg = arg * -1;
		return arg;
	} else { //Caso seja maior que 0, retorne-o direto
		return arg;
	}

}