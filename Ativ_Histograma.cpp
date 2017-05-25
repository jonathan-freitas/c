/*

By:
Jonathan Freitas

Program in C++ that reads an image, and do a Histogram of it.

*/

#include "header.h"

void Histograma(){

	//Recebendo imagem
	Mat img = imread("twd.jpg", 0);

	//Variáveis Lógicas
	int Hist[256];

	//Percorrendo o Array
	for(int k = 0; k < 256; k++){
		Hist[k] = 0;
	}
	
	//Colunas e Linhas
	for(int i = 0; i < img.cols; i++){
		for(int j = 0; j < img.rows; j++){

			Hist[img.data[j*img.cols+i]]++;
		}
	}
	
	//Preenchendo o array
	for(int z = 0; z < 256; z++){
		printf("%d-", Hist[z]);
	}

	//Mostrando resultados
	imshow("Imagem Original", img);
	waitKey();
}
