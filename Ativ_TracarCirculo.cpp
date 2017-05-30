//Feito por:
//Jonathan Freitas Ferreira

#include "header.h"

void TracarCirculo(){

	//Imagem resultado
	Mat img = Mat(500, 500, CV_8UC1, Scalar(255));

	//Coordenadas X e Y
	//diferente da linha ou do retangulo que são mais "flexiveis" na questao dos pontos, 
	//atente-se ao tamanho do raio antes de inserir as coordenadas, pois se o circulo ultrapassar as bordas
	//o programa acusará erro.
	int x = -250; 
	int y = -250; 

	//Raio do circulo
	int raio = -200;

	//Caso algum valor seja negativo
	x = Positivar(x);
	y = Positivar(y);
	raio = Positivar(raio);

	//Auxiliares
	int dx = 0; 
	int dy = raio - 1;
	float i = 0; 
	float raioInvertido = 1 / (float)raio;	

	//Enquanto o auxiliar X for menor ou igual ao auxiliar Y
	for(dx = 0; dx <= dy; dx++){

		//Tracando o circulo
		//Recebe a posicao e pinta o pixel de preto
		img.data[(x + dy) * img.rows + (y - dx)] = 0;
		img.data[(x + dx) * img.rows + (y - dy)] = 0;
		img.data[(x - dx) * img.rows + (y - dy)] = 0;
		img.data[(x - dy) * img.rows + (y - dx)] = 0;
		img.data[(x - dy) * img.rows + (y + dx)] = 0;
		img.data[(x - dx) * img.rows + (y + dy)] = 0;
		img.data[(x + dx) * img.rows + (y + dy)] = 0;
		img.data[(x + dy) * img.rows + (y + dx)] = 0;

		i += raioInvertido;

		dy = raio * sin(acos(i));

	}

	//Mostrando resultados
	imshow("Circulo Mágico", img);
	waitKey(0);

}