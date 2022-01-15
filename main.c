#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int variancia(float *num, float average);

int main(){
    setlocale (LC_ALL,"portuguese");
    float num[10];
    float average,var;
    int i;

    printf("Digite 10 n�meros reais: ");
    for (i=0;i<10;i++)
      scanf("%f", &num[i]);

    average=media(num);
    var=variancia(num,average);

    printf("A m�dia do conjunto de 10 n�meros reais � de %.2f. \n",average);
    printf("A vari�ncia do conjunto de 10 n�meros reais � de %.2f. \n",var);

    return 0;
    system("pause");
}

int media(float *num){
    int i;
    float average,soma;

     for (i=0;i<10;i++)
      soma=(soma+num[i]);

    average=(soma/10); /* O valor da m�dia pode apresentar varia��es de acordo com o compilador. */

    return average;
}

int variancia(float *num, float average){
    int i;
    float subtracao,var;

    for (i=0;i<10;i++){
      subtracao= (num[i]-average);
      subtracao= pow(subtracao,2);
      var= var+subtracao;
    }
    var=(var/10); /* O valor da vari�ncia pode apresentar varia��es de acordo com o compilador. */

    return var;
}
