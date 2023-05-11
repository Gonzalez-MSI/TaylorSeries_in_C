#include <stdio.h>
#define MSG_CHARACTERS_MAX 30
#define ASCII_LIMIT 52

int main(){
    
    char msg[MSG_CHARACTERS_MAX], msg_c[MSG_CHARACTERS_MAX], msg_ce[MSG_CHARACTERS_MAX];
    char msg_dc[MSG_CHARACTERS_MAX], msg_d[MSG_CHARACTERS_MAX];
    int a, b, ai;
    int i, n, m;

    do{
        printf("Ingrese el valor de a: ");
        scanf("%d", &a);
    } while ((a < 1 || a >= ASCII_LIMIT) || (a % 2 == 0) || (a % 13 == 0));
    
    do{
        printf("Ingrese el valor de b: ");
        scanf("%d", &b);
    } while (b < 0 || b > ASCII_LIMIT);
    printf("Ingrese el mensaje: ");
    getchar();

    i = 0;
    do{
        msg[i] = getchar();
        i++;
        if (i > MSG_CHARACTERS_MAX)
            break;
    } while (msg[i - 1] != 10);
    m = i - 1;
    
    msg[m] = '\0';
    for (i = 0; i < m; i++) {
        
        if (msg[i] >= 'A' && msg[i] <= 'Z')
            msg_c[i] = msg[i] - 'A';
        else if (msg[i] >= 'a' && msg[i] <= 'z')
            msg_c[i] = msg[i] - 'a' + ASCII_LIMIT / 2;
        else
            msg_c[i] = msg[i];
        printf("%d ", msg_c[i]);
    }
    printf("\n");
    for (i = 0; i < m; i++) {

        msg_ce[i] = (a * msg_c[i] + b) % ASCII_LIMIT;
        printf("%d ", msg_ce[i]);
    }
    printf("\n");

    for(i=0;i<m;i++) {

        msg_ce[i] += ( msg_ce[i] < 26 ? 65: 71 );
    }
    printf("%s\n",msg_ce);


    return 0;
}