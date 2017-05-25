/*

By: 
Jonathan Freitas Ferreira

Program in C++ that separates each channel of an image (Red, Blue and Green), plus it also will create a gray scale of that image.

*/

#include "header.h"

void EscalaMultipla(){
	Mat img = imread("fasam.jpg");

	Mat gray = Mat(img.rows, img.cols, CV_8U, 1); //8 bits que comporta até 256 de cor
	Mat red = Mat(img.rows, img.cols, CV_8U, 1);
	Mat green = Mat(img.rows, img.cols, CV_8U, 1);
	Mat blue = Mat(img.rows, img.cols, CV_8U, 1);

	for(int i = 0; i < img.cols; i++){
		for(int j = 0; j < img.rows; j++){
			
			int posicao = (j * img.cols + i) * img.channels();

			int b = img.data[posicao]; //Blue
			int g = img.data[posicao + 1]; // Green
			int r = img.data[posicao + 2]; //Red

			gray.data[j * img.cols + i] = r * 0.3 + g * 0.59 + b * 0.11;
			red.data[j * img.cols + i] = r;
			green.data[j * img.cols + i] = g;
			blue.data[j * img.cols + i] = b;

			//gray(i, j) = r * 0,3 + g * 0,59 + b * 0,11;
		}
	}

	imshow("Fasam cinza", gray);
	imshow("Fasam vermelho", red);
	imshow("Fasam verde", green);
	imshow("Fasam azul", blue);
	waitKey();

}
