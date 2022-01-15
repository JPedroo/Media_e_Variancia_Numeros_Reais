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

    printf("Digite 10 números reais: ");
    for (i=0;i<10;i++)
      scanf("%f", &num[i]);

    average=media(num);
    var=variancia(num,average);

    printf("A média do conjunto de 10 números reais é de %.2f. \n",average);
    printf("A variância do conjunto de 10 números reais é de %.2f. \n",var);

    return 0;
    system("pause");
}

int media(float *num){
    int i;
    float average,soma;

     for (i=0;i<10;i++)
      soma=(soma+num[i]);

    average=(soma/10); /* O valor da média pode apresentar variações de acordo com o compilador. */

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
    var=(var/10); /* O valor da variância pode apresentar variações de acordo com o compilador. */

    return var;
}
