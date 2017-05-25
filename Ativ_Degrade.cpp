//By: Jonathan Freitas

#include "header.h"

void Degrade(){
	Mat imagem = Mat(500, 500, CV_8U, 1);
	for(int i = 0; i< imagem.cols; i++){
		for(int j = 0; j < imagem.rows; j++){
			int p = (i * 100 / imagem.cols);
			imagem.data[j * imagem.cols + i] = (255 * p / 100);
		}
	}
	imshow("Imagem", imagem);
	waitKey(0);
}
