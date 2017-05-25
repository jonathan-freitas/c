//Feito por:
//Jonathan Freitas Ferreira

#include "header.h"

void Embacamento(){
	
	//Recebendo as imagens
	//img = Imagem original
	//alt = Imagem clonada da original
    IplImage* img = cvLoadImage("C:/Users/stark/Documents/Visual Studio 2010/OpenCV/OpenCV/twd.jpg", 0);
    IplImage* alt = cvCloneImage(img);

	//Inicializando variaveis das imagens
    int height, width, step, channels;
    int heightAlt, widthAlt, stepAlt, channelsAlt;

	//Alimentando as variaveis da imagem original
    height = img->height;						//Rows da imagem original
    width = img->width;							//Cols da imagem original	
    step = img->widthStep;						//Tamanho da imagem alinhada em linha em bytes da imagem original
    channels = img->nChannels;					//img.channels da imagem original
    uchar* data = (uchar *)img->imageData;		//img.data da imagem original

	//Alimentando as variaveis da imagem clonada
    heightAlt = alt->height;					//Rows da imagem clonada
    widthAlt = alt->width;						//Cols da imagem clonada
    stepAlt = alt->widthStep;					//Tamanho da imagem alinha em linha em bytes da imagem clonada
    channelsAlt = alt->nChannels;				//img.channels da imagem clonada
    uchar* altData = (uchar *)alt->imageData;	//img.data da imagem clonada

	//Variaveis lógicas
    int total = 0;
    int i, j, mi, mj, x, y;

    //Clunas e Linhas
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {   

			//Vizinhaca
            int masc = 3; // 3x3

			//Reiniciando o total
            total = 0;

			//Recuperando os pixels nos arredores
            for (mi = -masc/2; mi <=masc/2; mi++)
                for (mj = -masc/2; mj <=masc/2; mj++){

                    x = i + mi;
                    y = j + mj;

					//Não fugindo da imagem
                    if(x >= 0 && x < height && y >= 0 && y < width){
                        total += data[x * step + y];
                    }
                }

			//Aplicando alteracoes
            altData[i * step + j] = total/masc/masc;
        }
    }

	//Mostrando resultados
    cvShowImage("Imagem original",img);
    cvShowImage("Imagem clonada",alt);
    cvWaitKey(0);
}