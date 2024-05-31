//(h)编写一个程序来加密 / 解密文件，使用:
//(1)偏移密码 : 在偏移密码中，源文件中的每个字符都偏移一个固定值，然后写入目标文件。
//例如，如果从源文件读取的字符是“A”，则通过将“A”偏移固定值(例如 128)将其转换为新字符，然后将新字符写入目标文件。
//(2)替换密码。在此，从源文件读取的每个字符都被替换为对应的预定字符，并将该字符写入目标文件。
//例如，如果从源文件中读取字符“A”，并且如果我们决定将每个“A”替换为“!”，则将使用“!”将被写入目标文件以代替每个“A”。
//同样，每个“B”都将被“5”替换，依此类推。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 函数声明
void encryptFileWithOffset(FILE* input, FILE* output, int offset);
void decryptFileWithOffset(FILE* input, FILE* output, int offset);
void encryptFileWithSubstitution(FILE* input, FILE* output, char* substitution);
void decryptFileWithSubstitution(FILE* input, FILE* output, char* substitution);

int main() {
    // 加密和解密的文件名
    char sourceFile[] = "source.txt";
    char encryptedFile[] = "encrypted.txt";
    char decryptedFile[] = "decrypted.txt";

    // 偏移密码的偏移量
    int offset = 128;

    // 替换密码的替换数组
    char substitution[256];
    for (int i = 0; i < 256; i++) {
        substitution[i] = i; // 默认不替换
    }
    substitution['A'] = '!'; // 替换规则
    substitution['B'] = '5';

    // 打开源文件和目标文件
    FILE* input = fopen(sourceFile, "rb");
    FILE* output = fopen(encryptedFile, "wb");

    if (input == NULL || output == NULL) {
        perror("Error opening file");
        return 1;
    }

    // 使用偏移密码加密
    encryptFileWithOffset(input, output, offset);

    // 关闭文件
    fclose(input);
    fclose(output);

    // 打开加密文件和解密文件
    input = fopen(encryptedFile, "rb");
    output = fopen(decryptedFile, "wb");

    if (input == NULL || output == NULL) {
        perror("Error opening file");
        return 1;
    }

    // 使用偏移密码解密
    decryptFileWithOffset(input, output, offset);

    // 关闭文件
    fclose(input);
    fclose(output);

    // 打开源文件和目标文件用于替换密码加密
    input = fopen(sourceFile, "rb");
    output = fopen(encryptedFile, "wb");

    if (input == NULL || output == NULL) {
        perror("Error opening file");
        return 1;
    }

    // 使用替换密码加密
    encryptFileWithSubstitution(input, output, substitution);

    // 关闭文件
    fclose(input);
    fclose(output);

    // 打开加密文件和解密文件用于替换密码解密
    input = fopen(encryptedFile, "rb");
    output = fopen(decryptedFile, "wb");

    if (input == NULL || output == NULL) {
        perror("Error opening file");
        return 1;
    }

    // 使用替换密码解密
    decryptFileWithSubstitution(input, output, substitution);

    // 关闭文件
    fclose(input);
    fclose(output);

    return 0;
}

// 偏移密码加密函数
void encryptFileWithOffset(FILE* input, FILE* output, int offset) {
    int ch;
    while ((ch = fgetc(input)) != EOF) {
        fputc((ch + offset) % 256, output);
    }
}

// 偏移密码解密函数
void decryptFileWithOffset(FILE* input, FILE* output, int offset) {
    int ch;
    while ((ch = fgetc(input)) != EOF) {
        fputc((ch - offset + 256) % 256, output);
    }
}

// 替换密码加密函数
void encryptFileWithSubstitution(FILE* input, FILE* output, char* substitution) {
    int ch;
    while ((ch = fgetc(input)) != EOF) {
        fputc(substitution[ch], output);
    }
}

// 替换密码解密函数
void decryptFileWithSubstitution(FILE* input, FILE* output, char* substitution) {
    int ch;
    while ((ch = fgetc(input)) != EOF) {
        // 查找替换字符在替换数组中的索引
        for (int i = 0; i < 256; i++) {
            if (substitution[i] == ch) {
                fputc(i, output);
                break;
            }
        }
    }
}
