#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;

char *mystrtok(char str[], char delimiter){
    static char *input = NULL;

    if(str!=NULL){
        input = str;
    }
    if(input == NULL)
        return NULL;

    char *output = new char[strlen(input) + 1];
    int i;
    for(i=0;input[i]!='\0';i++){
        if(input[i]!=delimiter)
            output[i] = input[i];
        else{
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }
    input = NULL;
    output[i] = '\0';
    return output;
}

int main(void) {
    char str[] = "Hello, I am: Ak";
    char *ptr = mystrtok(str,',');
    while(ptr!=NULL){
        cout<<ptr<<"\n";
        ptr = mystrtok(NULL,',');
    }
	return 0;
}
