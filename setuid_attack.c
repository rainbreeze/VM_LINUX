
// setuid_example.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char input[100];
    FILE *fp;

    // 파일 열기
    fp = fopen("/tmp/testfile.txt", "a");
    if (fp == NULL) {
        perror("Failed to open file");
        return 1;
    }

    // 사용자 입력 받기
    printf("Enter some text: ");
    fgets(input, sizeof(input), stdin);

    // 입력된 텍스트 파일에 추가
    fprintf(fp, "%s", input);
    fclose(fp);

    printf("Input has been written to /tmp/testfile.txt\n");
    return 0;
}
