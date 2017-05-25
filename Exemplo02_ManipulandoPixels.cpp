#include "header.h"

void ManipulandoPixels(){
	Mat imagem = Mat(300, 300, CV_8U, 1);
	for(int i = 0; i< imagem.cols; i++){
		for(int j = 0; j < imagem.rows; j++){
			imagem.data[j * imagem.cols + i] = 128;
		}
	}
	imshow("Imagem", imagem);
	waitKey(0);
}