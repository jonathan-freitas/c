//Feito por:
//Jonathan Freitas Ferreira

#include "header.h"

Mat TracarLinha(Mat img, int x1, int y1, int x2, int y2){

	//Variaveis 
	float x, y, dx, dy;

	//Caso algum valor seja negativo
	x1 = Positivar(x1);
	x2 = Positivar(x2);
	y1 = Positivar(y1);
	y2 = Positivar(y2);

	//Caso o Axis X final seja maior que o X inicial
	if(x1 > x2){
		int aux = x1;

		x1 = x2;
		x2 = aux;
	}

	//Caso o Axis Y final seja maior que o Y inicial
	if(y1 > y2){
		int aux = y1;

		y1 = y2;
		y2 = aux;
	}

	//Auxiliares
	int i, length;

	//Eixos absolutos
	dx = x2 - x1;
	dy = y2 - y1;

	//Auxiliar
	if(dx >= dy){
		length = dx;
	}else{
		length = dy;
	} 

	dx = dx/(float) length;
	dy = dy/(float) length;

	x = x1;
	y = y1;
	i = 1;

	while(i <= length){
		//putpixel(x,y,WHITE);
		img.data[((int) y) * img.rows + (int) x] = 0;
		x = x + dx;
		y = y + dy;
		i++;
	}

	return img;

	/*
	//Mostrando resultados
	imshow("Linha Mágico", img);
	waitKey(0);
	*/
}