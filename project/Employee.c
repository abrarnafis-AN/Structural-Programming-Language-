#include <stdio.h>
#include <string.h>

// For Employee's info
typedef struct {
    int id;
    char name[50];
    char designation[50];
    char phone[15];
    char email[50];
    char department[30]; // Like: IT, HR, Finance
} Employee;

int main() {
    // Employee list
    Employee employees[] = {
        {101, "Abrar Nafis", "Software Engineer", "01700000001", "nafis@example.com", "IT"},
        {102, "Mahmud Hasan", "UI/UX Designer", "01700000002", "hasan@example.com", "IT"},
        {103, "Sakib Khan", "HR Executive", "01800000001", "sabbir@example.com", "HR"},
        {104, "Tamim Iqbal", "Accountant", "01900000001", "tamim@example.com", "Finance"},
        {105, "Rafiqul Islam", "Devops Engineer", "01700000003", "rafiq@example.com", "IT"}
    };

    int totalEmployees = sizeof(employees) / sizeof(employees[0]);
    char targetDept[30];
    int selectedId, found = 0;

    printf("=== Office Management System===\n\n");
    printf("Enter the name of the Department (like: IT, HR, Finance): ");
    scanf("%s", targetDept);

    printf("\n--- '%s' Employee List ---\n", targetDept);
    int deptCount = 0;

    // specific Employee
    for (int i = 0; i < totalEmployees; i++) {
        if (strcasecmp(employees[i].department, targetDept) == 0) {
            printf("[%d] %s\n", employees[i].id, employees[i].name);
            deptCount++;
        }
    }

    if (deptCount == 0) {
        printf("No Employee Found!\n");
        return 0;
    }

    // Specific Employee's Information
    printf("\n write EmployeenID ");
    scanf("%d", &selectedId);

    // Display employee information according to ID
    for (int i = 0; i < totalEmployees; i++) {
        if (employees[i].id == selectedId && strcasecmp(employees[i].department, targetDept) == 0) {
            printf("\n====================================\n");
            printf("          Employee Details     \n");
            printf("====================================\n");
            printf("ID         : %d\n", employees[i].id);
            printf("Name        : %s\n", employees[i].name);
            printf("Dsignation       : %s\n", employees[i].designation);
            printf("Phone Number : %s\n", employees[i].phone);
            printf("email      : %s\n", employees[i].email);
            printf("sector     : %s\n", employees[i].department);
            printf("====================================\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\n You Enter Wrong ID!\n");
    }

    return 0;
}
