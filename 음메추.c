#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lunch_menu() {
    const char* lunch_options[] = { "햄버거", "덮밥", "파스타", "돈까스", "떡볶이", "이삭 토스트", "제육볶음", "서브웨이", "마라탕", "오므라이스",
        "냉면", "짜장면", "우동", "카레라이스", "라멘", "칼국수", "미소야", "순두부찌개", "찜닭", "닭볶음탕", "볶음밥", "막국수", "부대찌개", "김치찌개", 
        "비빔밥", "만두", "닭강정", "갈비찜", "쌀국수", "그냥 라면이나 드세요" };
    int num_options = sizeof(lunch_options) / sizeof(lunch_options[0]);
    int choice = rand() % num_options;
    printf("점심 추천 메뉴: %s \n", lunch_options[choice]);
}

void dinner_menu() {
    const char* dinner_options[] = { "햄버거", "치킨", "피자", "덮밥", "파스타", "돈까스", "떡볶이", "구들장", "제육볶음", "닭발", "족발", "오므라이스",
        "카레라이스", "라멘", "칼국수", "삼겹살", "뜨듯한 국밥", "미소야", "순두부찌개", "찜닭", "닭볶음탕", "닭갈비", "볶음밥", "막국수", "보쌈", 
        "부대찌개", "김치찌개", "비빔밥", "초밥", "만두", "닭강정", "곱창", "오징어볶음", "갈비찜", "쌀국수", "그냥 라면이나 드세요" };
    int num_options = sizeof(dinner_options) / sizeof(dinner_options[0]);
    int choice = rand() % num_options;
    printf("저녁 추천 메뉴: %s \n", dinner_options[choice]);
}

int main() {
    int meal_type;

    srand(time(NULL));

    printf("음식 메뉴 추천 프로그램입니다.\n");
    while (1) {
        printf("\n점심은 1, 저녁은 2, 종료는 3을 입력하세요: ");
        scanf("%d", &meal_type);

        if (meal_type == 1) {
            lunch_menu();
        }
        else if (meal_type == 2) {
            dinner_menu();
        }
        else if (meal_type == 3) {
            printf("음식 추첨기를 종료합니다.\n");
            break;
        }
        else {
            printf("잘못된 입력입니다. 1, 2 또는 3을 입력하세요.\n");
        }
    }

    return 0;
}
