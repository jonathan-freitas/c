//Feito por:
//Jonathan Freitas

#include "header.h"

void Subtracao(){

	//Recebendo imagens
	Mat img = imread("imagem1.jpg", 0);
	Mat img2 = imread("imagem2.jpg", 0);
	Mat imgSub = Mat(img.rows, img.cols, CV_8U, 1);

	//Variavéis Lógicas
	int posicao = 0;

	//Colunas e Linhas
	for(int i = 0; i < img.cols; i++){
		for(int j = 0; j < img.rows; j++){

			//Recebendo os valores subtraídos
			posicao = img.data[j * img.cols + i] - img2.data[j * img.cols + i];

			//Caso o resultado do pixel seja menor que 0, ele será "positivado" aqui
			if(posicao < 0){
				posicao = posicao * -1;
			}
			
			//Preenchendo o resultado
			imgSub.data[j * img.cols + i] = posicao;
		}
	}

	//Mostrando resultados
	imshow("Imagem 1", img);
	imshow("Imagem 2", img2);
	imshow("Imagem Subtraída", imgSub);
	waitKey();
}