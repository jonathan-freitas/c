/*

By:
Jonathan Freitas Ferreira

Program in C++ that inverts the color of an image.

*/

#include "header.h"

void InverterCor(){

	Mat imagem = imread("Batman.jpg");

	for(int i = 0; i < imagem.cols; i++){
		for(int j = 0; j < imagem.rows; j++){

			int posicao = (j * imagem.cols + i) * imagem.channels();

			imagem.data[posicao] = 255 - imagem.data[posicao]; //Blue
			imagem.data[posicao + 1] = 255 - imagem.data[posicao + 1]; // Green
			imagem.data[posicao + 2] = 255 - imagem.data[posicao + 2]; //Red

			//printf("%d", imagem.channels());

		}
	}

	imshow("Batman", imagem);
	waitKey();
}
