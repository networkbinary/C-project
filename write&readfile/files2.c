//FILE handling
#include <stdio.h>
#include <stdlib.h>
void writeToFile();
void readFromFile();
int main(){

    writeToFile();
    readFromFile();
    return 0;
}
void writeToFile(){
    char sentence[300];
    FILE *fptr;
    fptr = fopen("/home/Ssploit/Videos/file_handling/run.txt", "a");
    if (fptr == NULL){
        printf("Error while creating the file, Check \n");
        exit(1);
    }

    printf("Write a sentence of your choice \n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    printf("Sentence written successfully");
    fclose(fptr);

}

void readFromFile(){
    char line[300];
    FILE *fptr;
    fptr = fopen("/home/Ssploit/Videos/file_handling/run.txt", "r");
    if (fptr ==NULL){
        printf("Error while reading the file");
        exit(1);
    }
    printf("File contents\n");
    while(fgets(line, sizeof(line), fptr)!= NULL){
        printf("%s", line);
    }
    fclose(fptr);
    printf("File successfully read ");

}



