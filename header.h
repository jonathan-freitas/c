// O HEADER deverá conter todos os includes que serão utilizados no projeto,
// também a declaração de cada função do projeto, para que as mesmas possam ser chamadas a partir do Main

// Bibliotecas
#include <iostream>
#include <opencv2\opencv.hpp>


// using namespace é um comando que serve para não precisarmos digitar esses nomes todas as vezes que chamarmos
// um método existente na classe.
//`Por exemplo:
//   No modo padrão para exibirmos uma imagem na tela deveríamos fazer da sequinte maneira: 
//     cv::imshow("Janela", imagem);
//  Após o uso do using namespace:
//     imshow("Janela", imagem);
using namespace cv;
using namespace std;

// Declarando as Funções
// Para cada exercício é sugerido que um arquivo novo .cpp seja criado
// e dentro desse arquivo a função seja implementada. Entretanto o Main apenas
// reconhecerá as funções que forem declaradas aqui no cabeçalho.
void Exemplo_QuadradoVermelho();
void ManipulandoPixels();
void Degrade();
void InverterCor();
void EscalaMultipla();
void Threshould();
void Embacamento();
void Histograma();
void Subtracao();
void LinhaAnderson();
Mat TracarLinha(Mat img, int x1, int y1, int x2, int y2);
void TracarRetangulo();
int Positivar(int arg);