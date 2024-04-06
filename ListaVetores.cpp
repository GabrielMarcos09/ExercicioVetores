#include <iostream>
#include <string>

using namespace std;

/*Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
Mostre na tela cada valor do vetor A, um em cada linha.


void imprimir_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<< v[i]<<endl;
    }
}

int soma_vetor(int v[], int tam){
    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma = v[0] + v[1] + v[5];
    }
    return soma;
}

int main(){
    int tam = 6;
    int A[] = {1, 0, 5, -2, -5, 7};

    imprimir_vetor(A, tam);

    int soma = soma_vetor(A, tam);
    cout<<"A soma dos valores na posicao A[0] + A[1] + A[5] eh igual ah " << soma << endl;

    A[4] = 100;
    cout<<"Novo vetor"<<endl;
    imprimir_vetor(A, tam);


}

*/

/* Ler um conjunto de números reais, armazenando-o em um vetor e calcular o quadrado das componentes deste vetor,
armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.


void ler_vetor(double v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<"Digite um valor: ";
        cin>>v[i];
    }
    cout<<endl;
}

void imprimir_vetor(double v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<v[i]<< " | ";
    }
    cout<<endl;
}

void calcular_quadrado(double v[], double v1[], int tam){
    for(int i = 0; i < tam; i++){
        v1[i] = v[i] * v[i];
    }
}

int main(){
    const int tam = 10;
    double vetor[tam];
    double vetor1[tam];

    ler_vetor(vetor, tam);
    imprimir_vetor(vetor, tam);

    cout<<"Agora o quadrado do vetor"<<endl;

    calcular_quadrado(vetor, vetor1, tam);
    imprimir_vetor(vetor1, tam);
}
*/

/* Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.


void ler_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<"Digite um valor: ";
        cin>>v[i];
    }
    cout<<endl;
}

void imprimir_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<v[i]<< " | ";
    }
    cout<<endl;
}

int checar_pares(int v[], int tam){
    int cont = 0;
    for(int i = 0; i < tam; i++){
        if(v[i] % 2 == 0){
            cont++;
        }
    }
    return cont;
}

int main(){
    const int tam = 10;
    int vetor[tam];


    ler_vetor(vetor, tam);
    imprimir_vetor(vetor, tam);

    int cont = checar_pares(vetor, tam);
    cout<<"A quantidade de numeros pares nesse vetor eh: "<<cont;

}

*/

/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
Imprima o vetor, o maior elemento e a posição que ele se encontra


void ler_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<"Digite um valor: ";
        cin>>v[i];
    }
    cout<<endl;
}

void imprimir_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<v[i]<< " | ";
    }
    cout<<endl;
}

int Maior_Valor(int v[], int tam){
    int maior = v[0];
    int posicao = 0;
    for(int i = 1; i < tam; i++){
        if(v[i] > v[0]){
            maior = v[i];
            posicao = i;
        }
    }
    cout<<"O maior valor eh "<< maior <<" e esta na posicao "<< posicao;
    return maior;
}

int main(){
    const int tam = 10;
    int vetor[tam];



    ler_vetor(vetor, tam);
    imprimir_vetor(vetor, tam);

    int maior = Maior_Valor(vetor, tam);

}
*/

/*Deseja-se publicar o número de acertos um aluno em uma prova.
A prova consta de 10 questões, cada uma com cinco alternativas identificadas por A, B, C, D e E. Para isso são dados:
o cartão gabarito;
o cartão de respostas do aluno, contendo suas respostas para cada questão.
Informe quantas questões o aluno acertou, de acordo com o gabarito.


void gabarito_prova(char v[], int tam){
        cout<<"Professor, insira o gabarito correto\n";
    for(int i = 1; i <= tam; i++){
        cout<<"Questao" <<i<<":";
        cin>>v[i];
    }
}

void gabarito_aluno(char v[], int tam){
        cout<<"Aluno, insira o seu gabarito\n";
    for(int i = 1; i <= tam; i++){
        cout<<"Questao" <<i<<":";
        cin>>v[i];
    }
}

void imprimir_vetor(char v[], int tam){
    for(int i = 1; i <= tam; i++){
        cout<<v[i]<< " | ";
    }
    cout<<endl;
}

int checar_questoes(char v1[], char v2[], int tam){
    int cont = 0;
    for(int i = 1; i <= tam; i++){
        if(v1[i] == v2[i]){
            cont++;
        }
    }
    return cont;
}

int main(){
    const int tam = 10;
    char vetor1[tam];
    char vetor2[tam];

    gabarito_prova(vetor1, tam);
    imprimir_vetor(vetor1, tam);

    gabarito_aluno(vetor2, tam);
    imprimir_vetor(vetor2, tam);

    int contador = checar_questoes(vetor1, vetor2, tam);
    cout<<"Voce acertou " <<contador<< " Questoes";

}
*/


/*Ler um vetor de 10 elementos. Crie um segundo vetor, com todos os elementos na ordem inversa,
ou seja, o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante.
Imprima os dois vetores.


void ler_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<"Informe um valor: ";
        cin>>v[i];
    }
    cout<<endl;
}

void imprimir_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<v[i]<< " | ";
    }
    cout<<endl;
}

void inverter(int v[], int tam){
    for(int i = 0; i < tam/2; i++){
        int aux = v[i];
        v[i] = v[tam-1-i];
        v[tam-1-i] = aux;
    }
}

int main(){
    int tam = 10;
    int vetor1[tam];

    ler_vetor(vetor1, tam);
    imprimir_vetor(vetor1, tam);

    inverter(vetor1, tam);

    cout<<"Vetor invertido\n";
    imprimir_vetor(vetor1, tam);

}
*/

/*Faça um programa que leia e monte dois vetores de números inteiros com 20 números cada.
Depois de montados gere um terceiro vetor formado pela diferença dos dois vetores lidos,
um quarto vetor formado pela soma dos dois vetores lidos e por último um quinto vetor
formado pela multiplicação dos dois vetores lidos.


void ler_vetor(double v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<"Informe um valor: ";
        cin>>v[i];
    }
    cout<<endl;
}

void imprimir_vetor(double v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<v[i]<< " | ";
    }
    cout<<endl;
}

void soma_vetores(double v1[], double v2[], double result_soma[], int tam){
    for(int i = 0; i < tam; i++){
       result_soma[i] = v1[i] + v2[i];
    }
}

void sub_vetores(double v1[], double v2[], double result_subt[], int tam){
    for(int i = 0; i < tam; i++){
        result_subt[i] = v1[i] - v2[i];
    }
}

void mult_vetores(double v1[], double v2[], double result_mult[], int tam){
    for(int i = 0; i < tam; i++){
       result_mult[i] = v1[i] * v2[i];
    }
}

int main(){
    int tam = 5;
    double vetor1[tam];
    double vetor2[tam];
    double resultado_soma[tam];
    double resultado_subt[tam];
    double resultado_mult[tam];

    ler_vetor(vetor1, tam);
    imprimir_vetor(vetor1, tam);

    ler_vetor(vetor2, tam);
    imprimir_vetor(vetor2, tam);

    soma_vetores(vetor1, vetor2, resultado_soma, tam);
    cout<<"A soma dos vetores eh"<<endl;
    imprimir_vetor(resultado_soma, tam);

    sub_vetores(vetor1, vetor2, resultado_subt, tam);
    cout<<"A subtracao dos vetores eh"<<endl;
    imprimir_vetor(resultado_subt, tam);

    mult_vetores(vetor1, vetor2, resultado_mult, tam);
    cout<<"A multiplicacao dos vetores eh"<<endl;
    imprimir_vetor(resultado_mult, tam);

}
*/

/*Dados dois vetores de tamanho N, faça um programa que diga se os mesmos possuem conteúdo igual.

void ler_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<"Informe um valor: ";
        cin>>v[i];
    }
    cout<<endl;
}

void imprimir_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<v[i]<< " | ";
    }
    cout<<endl;
}

void checar_igualdade(int v1[], int v2[], int tam){
    for(int i = 0; i < tam; i++){
        if(v1[i] != v2[i]){
            cout<<"O conteudo da posicao "<<i<<" eh diferente\n";
        }
        else{
            cout<<"O conteudo da posicao "<<i<<" eh igual\n";
        }
    }
}


int main(){
    int tam;
    cout<<"Digite o tamanho dos vetores: ";
    cin>>tam;
    int vetor1[tam];
    int vetor2[tam];

    ler_vetor(vetor1, tam);
    imprimir_vetor(vetor1, tam);

    ler_vetor(vetor2, tam);
    imprimir_vetor(vetor2, tam);

    checar_igualdade(vetor1, vetor2, tam);


}
*/

/*Faça um programa que leia uma quantidade de números determinada pelo usuário e armazene em um vetor.
Crie outros dois vetores, um para os valores pares e outro para os ímpares.


 void ler_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<"Informe um valor: ";
        cin>>v[i];
    }
    cout<<endl;
}

void imprimir_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<v[i]<< " | ";
    }
    cout<<endl;
}

int pares(int v[], int vp[], int tam, int contP){
    contP = 0;
    for(int i = 0; i < tam; i++){
        if(v[i] % 2 == 0){
            vp[contP] = v[i];
            contP++;
        }
    }
    return contP;
}

int impares(int v[], int vi[], int tam, int contI){
    contI = 0;
    for(int i = 0; i < tam; i++){
        if(v[i] % 2 != 0){
            vi[contI] = v[i];
            contI++;
        }
    }
    return contI;
}

int main(){
    int tam;
    cout<<"Digite o tamanho do vetor: ";
    cin>>tam;
    int vetor1[tam];
    int vetorPar[tam];
    int vetorImpar[tam];
    int contP, contI;

    ler_vetor(vetor1, tam);
    imprimir_vetor(vetor1, tam);

    contP = pares(vetor1, vetorPar, tam, contP);
    imprimir_vetor(vetorPar, contP);

    contI = impares(vetor1, vetorImpar, tam, contI);
    imprimir_vetor(vetorImpar, contI);

}
*/

/*Faça um programa que leia um vetor de 10 posições e verifique se existem valores repetidos e os escreva na tela.
*/

void ler_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<"Informe um valor: ";
        cin>>v[i];
    }
    cout<<endl;
}

void imprimir_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<v[i]<< " | ";
    }
    cout<<endl;
}

void checar_igualdade(int v[], int tam){
    for(int i = 0; i < tam; i++){
        for(int j = i + 1; j < tam; j++){
            if(v[i] == v[j]){
                cout<<"o valor esta sendo repetido: " << v[i]<<endl;
            }
        }
    }
}

int main(){
    const int tam = 10;
    int vetor1[tam];

    ler_vetor(vetor1, tam);
    imprimir_vetor(vetor1, tam);

    checar_igualdade(vetor1, tam);

}

