//(h)��дһ������������ / �����ļ���ʹ��:
//(1)ƫ������ : ��ƫ�������У�Դ�ļ��е�ÿ���ַ���ƫ��һ���̶�ֵ��Ȼ��д��Ŀ���ļ���
//���磬�����Դ�ļ���ȡ���ַ��ǡ�A������ͨ������A��ƫ�ƹ̶�ֵ(���� 128)����ת��Ϊ���ַ���Ȼ�����ַ�д��Ŀ���ļ���
//(2)�滻���롣�ڴˣ���Դ�ļ���ȡ��ÿ���ַ������滻Ϊ��Ӧ��Ԥ���ַ����������ַ�д��Ŀ���ļ���
//���磬�����Դ�ļ��ж�ȡ�ַ���A��������������Ǿ�����ÿ����A���滻Ϊ��!������ʹ�á�!������д��Ŀ���ļ��Դ���ÿ����A����
//ͬ����ÿ����B����������5���滻���������ơ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// ��������
void encryptFileWithOffset(FILE* input, FILE* output, int offset);
void decryptFileWithOffset(FILE* input, FILE* output, int offset);
void encryptFileWithSubstitution(FILE* input, FILE* output, char* substitution);
void decryptFileWithSubstitution(FILE* input, FILE* output, char* substitution);

int main() {
    // ���ܺͽ��ܵ��ļ���
    char sourceFile[] = "source.txt";
    char encryptedFile[] = "encrypted.txt";
    char decryptedFile[] = "decrypted.txt";

    // ƫ�������ƫ����
    int offset = 128;

    // �滻������滻����
    char substitution[256];
    for (int i = 0; i < 256; i++) {
        substitution[i] = i; // Ĭ�ϲ��滻
    }
    substitution['A'] = '!'; // �滻����
    substitution['B'] = '5';

    // ��Դ�ļ���Ŀ���ļ�
    FILE* input = fopen(sourceFile, "rb");
    FILE* output = fopen(encryptedFile, "wb");

    if (input == NULL || output == NULL) {
        perror("Error opening file");
        return 1;
    }

    // ʹ��ƫ���������
    encryptFileWithOffset(input, output, offset);

    // �ر��ļ�
    fclose(input);
    fclose(output);

    // �򿪼����ļ��ͽ����ļ�
    input = fopen(encryptedFile, "rb");
    output = fopen(decryptedFile, "wb");

    if (input == NULL || output == NULL) {
        perror("Error opening file");
        return 1;
    }

    // ʹ��ƫ���������
    decryptFileWithOffset(input, output, offset);

    // �ر��ļ�
    fclose(input);
    fclose(output);

    // ��Դ�ļ���Ŀ���ļ������滻�������
    input = fopen(sourceFile, "rb");
    output = fopen(encryptedFile, "wb");

    if (input == NULL || output == NULL) {
        perror("Error opening file");
        return 1;
    }

    // ʹ���滻�������
    encryptFileWithSubstitution(input, output, substitution);

    // �ر��ļ�
    fclose(input);
    fclose(output);

    // �򿪼����ļ��ͽ����ļ������滻�������
    input = fopen(encryptedFile, "rb");
    output = fopen(decryptedFile, "wb");

    if (input == NULL || output == NULL) {
        perror("Error opening file");
        return 1;
    }

    // ʹ���滻�������
    decryptFileWithSubstitution(input, output, substitution);

    // �ر��ļ�
    fclose(input);
    fclose(output);

    return 0;
}

// ƫ��������ܺ���
void encryptFileWithOffset(FILE* input, FILE* output, int offset) {
    int ch;
    while ((ch = fgetc(input)) != EOF) {
        fputc((ch + offset) % 256, output);
    }
}

// ƫ��������ܺ���
void decryptFileWithOffset(FILE* input, FILE* output, int offset) {
    int ch;
    while ((ch = fgetc(input)) != EOF) {
        fputc((ch - offset + 256) % 256, output);
    }
}

// �滻������ܺ���
void encryptFileWithSubstitution(FILE* input, FILE* output, char* substitution) {
    int ch;
    while ((ch = fgetc(input)) != EOF) {
        fputc(substitution[ch], output);
    }
}

// �滻������ܺ���
void decryptFileWithSubstitution(FILE* input, FILE* output, char* substitution) {
    int ch;
    while ((ch = fgetc(input)) != EOF) {
        // �����滻�ַ����滻�����е�����
        for (int i = 0; i < 256; i++) {
            if (substitution[i] == ch) {
                fputc(i, output);
                break;
            }
        }
    }
}
