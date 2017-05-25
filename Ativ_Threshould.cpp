#include "header.h"

void Threshould(){
	Mat img = imread("twd.jpg",0);

	Mat t16 = Mat(img.rows, img.cols, CV_8U, 1);
	Mat t32 = Mat(img.rows, img.cols, CV_8U, 1); 
	Mat t64 = Mat(img.rows, img.cols, CV_8U, 1); 
	Mat t96 = Mat(img.rows, img.cols, CV_8U, 1); 
	Mat t128 = Mat(img.rows, img.cols, CV_8U, 1); 

	for(int i = 0; i < img.cols; i++){
		for(int j = 0; j < img.rows; j++){

			int posicao = (j * img.cols + i) * img.channels();

			int g = img.data[posicao];

			int b = img.data[posicao]; //Blue
			int gr = img.data[posicao + 1]; // Green
			int r = img.data[posicao + 2]; //Red

			t16.data[posicao] =  (g > 16) ? 255 : 0; //if
			t32.data[posicao] =  (g > 32) ? 255 : 0; //if
			t64.data[posicao] =  (g > 64) ? 255 : 0; //if
			t96.data[posicao] =  (g > 96) ? 255 : 0; //if
			t128.data[posicao] = (g > 128) ? 255 : 0; //if
		}
	}

	imshow("TWD t16", t16);
	imshow("TWD t32", t32);
	imshow("TWD t64", t64);
	imshow("TWD t96", t96);
	imshow("TWD t128", t128);
	waitKey();
}