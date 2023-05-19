#include <stdio.h>
#define N 50

int main(){

    int data[N], elements, temporal, i, j;
    


    puts("##i###i   ##i#######i#######i######i ########i##i ######i ###i   ##i    #######i ######i ######i ########i");
    puts("##i####i  ##i##i----i##i----i##i--##i#--##i--i##i##i---##i####i  ##i    ##i----i##i---##i##i--##i#--##i--i");
    puts("##i##i##i ##i#######i#####i  ######ii   ##i   ##i##i   ##i##i##i ##i    #######i##i   ##i######ii   ##i   ");
    puts("##i##i###i##i#----##i##i--i  ##i--##i   ##i   ##i##i   ##i##i###i##i    #----##i##i   ##i##i--##i   ##i   ");
    puts("##i##i###i##i#----##i##i--i  ##i--##i   ##i   ##i##i   ##i##i###i##i    #----##i##i   ##i##i--##i   ##i   ");
    puts("##i##i #####i#######i#######i##i  ##i   ##i   ##i#######ii##i #####i    #######i#######ii##i  ##i   ##i   ");
    puts("#-i#-i  #---i#------i#------i#-i  #-i   #-i   #-i #-----i #-i  #---i    #------i #-----i #-i  #-i   #-i  ");

    printf("\n\n");
    
    do{

        printf("Select the number of data elements: ");
            scanf("%d",&elements);

        if(elements == 1){

            break;
        }
    }while(elements < 0 || elements > N);
    

    for(i = 0; i < elements; i++){

        printf("data[%d] = ", i + 1);
            scanf("%d",&data[i]);
    }
    system("cls");
    puts("--------------------------");
    puts("Data Input    ");
    puts("--------------------------");
    for (i = 1; i < elements; i++){

            temporal = data[i];
            j = i - 1;

            while ((temporal < data[j]) && (j >= 0))
            {
            data[j + 1] = data[j];
            j = j - 1;
            }
            data[j + 1] = temporal;
    }

    puts("--------------------------");
    puts("Sorted Data");
    puts("--------------------------");
    for(i = 0; i < elements; i++){

        printf("%d\n", data[i]);
    }

    return 0;
}