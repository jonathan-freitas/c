#include "header.h"

void Exemplo_QuadradoVermelho(){
	//Criando um quadrado vermelho
	Mat quadrado = Mat(500, 500, CV_8UC3, Scalar(0, 0, 255));
	//Mostrando o quadrado vermelho na tela
	imshow("Quadrado Vermelho", quadrado);
	waitKey(0);
}