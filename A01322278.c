#include <stdio.h>
#include <math.h>

void convertBinary(char *fileName) {
    FILE *file;
    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Could not open file for reading");
    }

    int row, column;
    fscanf(file, "%d %d", &row, &column);


    for (int i = 0; i < row; ++i) {
        int convertedNum = 0;

        for (int j = column - 1; j >= 0; --j) {
            int counter = 0;

            int tempNum;
            fscanf(file, "%d", &tempNum);

            convertedNum += (tempNum * (pow(2, j)));
            ++counter;
        }
        printf("The converted binary number is %d\n", convertedNum);
    }
}

int main() {
    char fileName[100];
    printf("Please enter the name of the file: \n");
    scanf("%s", fileName);
    convertBinary(fileName);
    return 0;
}
