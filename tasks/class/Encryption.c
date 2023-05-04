#include <stdio.h>
#define KEY_MAX_CHARACTERS 30
#define MESSAGE_MAX_CHARACTERS 30
#define DASH_LINE puts("--------------------------") 

int main(){

    // --------------------------- //
    // key & message variables
    // --------------------------- //

    char key[KEY_MAX_CHARACTERS];
    char msg[MESSAGE_MAX_CHARACTERS]; 
    char msg_encrypted[MESSAGE_MAX_CHARACTERS];
    char msg_decrypted[MESSAGE_MAX_CHARACTERS];
    int i,characters_of_key,characters_of_msg;

    // --------------------------- //
    // Prompt user for key
    // --------------------------- //
    
    
    DASH_LINE;
    puts("Prompt user for key");
    DASH_LINE;
    printf("\n");

    printf("Enter a key: ");
    
    i = 0;
    do{

        key[i++] = getchar();
        
        if(i>KEY_MAX_CHARACTERS)
            break;

    }while(key[i-1] != 10);
    key[i] = '\0';
    characters_of_key = i;

    printf("Key: %s\n",key);

    // --------------------------- //
    // Prompt user for message
    // --------------------------- //

    printf("\n");
    DASH_LINE;
    puts("Prompt user for message");
    DASH_LINE;
    printf("\n");


    printf("Enter a message: ");
    
    i = 0;
    do{

        msg[i++] = getchar();
        
        if(i>MESSAGE_MAX_CHARACTERS)
            break;

    }while(msg[i-1] != 10);
    msg[i] = '\0';
    characters_of_msg = i;

    // --------------------------- //
    // Message encryption
    // --------------------------- //

    printf("\n");
    DASH_LINE;
    puts("Encryption");
    DASH_LINE;
    printf("\n");
    
    printf("Message: %s\n",msg);
    for(i = 0; i < characters_of_msg-1; i++){

        msg_encrypted[i] = msg[i] ^ key[i%characters_of_key];
    }

    msg_encrypted[i] = '\0';
    printf("Encrypted message: %s\n",msg_encrypted);

    // --------------------------- //
    // Message decryption
    // --------------------------- //

    printf("\n");
    DASH_LINE;
    puts("Decryption");
    DASH_LINE;
    printf("\n");

    for(i = 0; i < characters_of_msg-1; i++){

        msg_decrypted[i] = msg_encrypted[i] ^ key[i%characters_of_key];
    }

    msg_decrypted[i] = '\0';
    printf("Decrypted message: %s\n",msg_decrypted);


    return 0;
}