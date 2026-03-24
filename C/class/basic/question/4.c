//Grade

#include <stdio.h>

int main()
{
    int p_marks;
    int c_marks;
    int m_marks;
    
    printf("Enter the marks obtained in Physics = ");
    scanf("%d", &p_marks);
    
    printf("Enter the marks obtained in Chemistry = ");
    scanf("%d", &c_marks);
    
    printf("Enter the marks obtained in Math = ");
    scanf("%d", &m_marks);
    
    int total_marks = p_marks + c_marks + m_marks;
    int p_m_marks = p_marks + m_marks;
    
    if(p_m_marks >= 140 && m_marks >= 65 && p_marks >= 55 && c_marks >= 50 || total_marks >= 190 && m_marks >= 65 && p_marks >= 55 && c_marks >= 50){
        printf("The candidate is eligible for admission");
    }
    else{
        printf("The condidate is not eligible for admission");
    }

    return 0;
}