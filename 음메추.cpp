#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lunch_menu() {
    const char* lunch_options[] = { "�ܹ���", "����", "�Ľ�Ÿ", "���", "������", "�̻� �佺Ʈ", "��������", "�������", "������", "���Ƕ��̽�",
        "�ø�", "¥���", "�쵿", "ī�����̽�", "���", "Į����", "�̼Ҿ�", "���κ��", "���", "�ߺ�����", "������", "������", "�δ��", "��ġ�", 
        "�����", "����", "�߰���", "������", "�ұ���", "�׳� ����̳� �弼��" };
    int num_options = sizeof(lunch_options) / sizeof(lunch_options[0]);
    int choice = rand() % num_options;
    printf("���� ��õ �޴�: %s \n", lunch_options[choice]);
}

void dinner_menu() {
    const char* dinner_options[] = { "�ܹ���", "ġŲ", "����", "����", "�Ľ�Ÿ", "���", "������", "������", "��������", "�߹�", "����", "���Ƕ��̽�",
        "ī�����̽�", "���", "Į����", "����", "�ߵ��� ����", "�̼Ҿ�", "���κ��", "���", "�ߺ�����", "�߰���", "������", "������", "����", 
        "�δ��", "��ġ�", "�����", "�ʹ�", "����", "�߰���", "��â", "��¡���", "������", "�ұ���", "�׳� ����̳� �弼��" };
    int num_options = sizeof(dinner_options) / sizeof(dinner_options[0]);
    int choice = rand() % num_options;
    printf("���� ��õ �޴�: %s \n", dinner_options[choice]);
}

int main() {
    int meal_type;

    srand(time(NULL));

    printf("���� �޴� ��õ ���α׷��Դϴ�.\n");
    while (1) {
        printf("\n������ 1, ������ 2, ����� 3�� �Է��ϼ���: ");
        scanf("%d", &meal_type);

        if (meal_type == 1) {
            lunch_menu();
        }
        else if (meal_type == 2) {
            dinner_menu();
        }
        else if (meal_type == 3) {
            printf("���� ��÷�⸦ �����մϴ�.\n");
            break;
        }
        else {
            printf("�߸��� �Է��Դϴ�. 1, 2 �Ǵ� 3�� �Է��ϼ���.\n");
        }
    }

    return 0;
}
