//Feito por:
//Jonathan Freitas Ferreira

#include "header.h"

void LinhaAnderson(){

	Mat img = Mat(500, 500, CV_8UC1, Scalar(255));

	int step, fabsx, fabsy, py, px; //inicia a variavel para receber o proximo ponto
	int x1 = 1, y1 = 1, x2 = -50, y2 = 40;
	float x, y, xinc, yinc;

	fabsx = x2 - x1;//calcula o fator absoluto do eixo x
	fabsy = y2 - y1;//calcula o fator absoluto do eixo y
	step = fabsx; //a variavel step1 recebe o fator absoluto1
	step = (step < 0) ? (step * -1) : step; //condição que calcula se o fator absoluto de x for negativo ele multiplica por -1 para ficar positivo
	fabsy = (fabsy < 0) ? (fabsy * -1) : fabsy; //condição que calcula se o fator absoluto de y for negativo ele multiplica por -1 para ficar positivo

	if (fabsy > step){ //condição que verificar se o fator absoluto do eixo y e maior que o valor absoluto do eixo x
		step = fabsy;
	}
	xinc = (float)((x2 - x1) / step);
	yinc = (float)((y2 - y1) / step);

	x = x1;
	y = y1;

	while(x < x2){
		
		img.data[ ((int) y)*img.rows + (int) x] = 0;//pega a imagem em branco e faz o arredondamento dos pontos flutuantes
		x = x + xinc;
		y = y + yinc;
	}

	/*
	void DDA(int X1,Y1,X2,Y2)
		int step;
	float X, Y, Xinc, Yinc;
	step = fabs(X2 - X1);
	if (fabs(Y2 - Y1) > step)
	step = fabs(Y2-Y1);
	Xinc = (X2 - X1)/step;
	Yinc = (Y2 - Y1)/step;
	X = X1;
	Y = Y1;

		while(X<X2){
	putpixel(Round(X),Round(Y),9);
	X = X + Xinc;
	Y = Y + Yinc;
	
	*/


	imshow("Linha", img);
	waitKey(0);

}