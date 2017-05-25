//Feito por:
//Jonathan Freitas Ferreira

#include "header.h"

void TracarRetangulo(){

	//Imagem resultado
	Mat img = Mat(500, 500, CV_8UC1, Scalar(255));

	//Axis X e Y iniciais
	int x1 = -184; 
	int y1 = 445; 

	//Axis X e Y finais
	int x2 = -10; 
	int y2 = 220; 

	TracarLinha(img, x1, y1, x2, y1);
	TracarLinha(img, x2, y1, x2, y2);
	TracarLinha(img, x2, y2, x1, y2);
	TracarLinha(img, x1, y2, x1, y1);

	//Mostrando resultados
	imshow("Retângulo Mágico", img);
	waitKey(0);

}