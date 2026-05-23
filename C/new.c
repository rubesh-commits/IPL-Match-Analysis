# include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>

/*int main() {
    int num1 = 0;
    int num2 = 0;
    char operator = "";

    printf("Calculator\n");

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the operation(+ - * /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    switch (operator)
    {
    case '+' :
        int Add = num1 + num2;
        printf("%d", Add);
        break;

    case '-':
        int sub = num1 - num2;
        printf("%d", sub);

    case '*':
        int multiple = num1 * num2;
        printf("%d", multiple);

    case '/':
        int divide = num1 / num2;
        printf("%d", divide);
    
        default:
        break;
    }
    
    return 0;
}*/

/*void greetings(char name[]){
    printf("Welcome home, %s", name);
}

int main() {
    
    char name[] = "Windows";

    greetings(name);

    return 0;
}*/

/*int getMax(int x, int y) {
    if (x >= y) {
        return x;
    }
    else {
        return y;
    }
}

int main() {
    int max = getMax(2, 3);
    
    printf("%d", max);
    return 0;
}*/

/*int add(int x, int y){
    return x + y;
}

int subract(int x, int y){
    return x - y;
}

int main() {
    int x;
    int y;
    printf("Enter the number (x): ");
    scanf("%d", &x);
    printf("Enter the number (y): ");
    scanf("%d", &y);
    int result = subract(x, y);

    printf("%d", result);

    return 0;
}*/

/*void hello(char name[], int age);
bool ageCheck(int age);

int main() {

    hello("Windows",10);
    if(ageCheck(98)) {
        printf("You can work at Microsoft\n");
    }
    else {
        printf("You can't work at Microsoft\n");
    }
    return 0;
}

void hello(char name[], int age) {
    printf("Hello %s\n", name);
    printf("Your age is %d\n", age);

}

bool ageCheck(int age) {
    return age>=16; 
}*/

/*int main() {
    bool gameRunning = true;
    char response = '\0';

    do{
        printf("You are playing the game\n");
        printf("Would like to continue (Y/N): ");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'y') {
            gameRunning = false;
        }
    }while(gameRunning);

    printf("YOU EXIT THE GAME");
    return 0;
}*/

/*int main() {
    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= 10 ; j++) {
            printf("%3d ", i * j);
        }
        printf("\n");
    }

    return 0;
}*/

/*int main() {
    int num[] = {10, 20, 30, 40, 50, 60};
    
    int size = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < size; i++) {
        printf("%i ", num[i]);
    }

    return 0;
}*/

/*int main() {

    int score[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("Enter a score: ");
        scanf("%d", &score[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", score[i]);
    }

    return 0;
}*/

/*int main() {
    char numpad[][3] = {{'1', '2', '3'}, 
                        {'4', '5', '6'}, 
                        {'7', '8', '9'},
                        {'*', '0', '#'}};


    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*int main() {
    char names[3][25] = {0};

    for(int i = 0; i < 3; i++) {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';     
    }

    for (int i = 0; i < 3; i++) {
        printf("%s ", names[i]);
    }

    return 0;
}*/

/*int main() {
    int hours = 17;
    int minutes = 10;

    printf("%02d:%02d %s", hours, minutes, (hours < 12) ? "AM" : "PM");

    return 0;
}*/

/*typedef char *his;

int main() {
    his name = "Windows";

    printf("%s", name);

    return 0;
}*/

/*typedef struct {
    char model[25];
    int year;
    int price;
}Car;

int main() {
    Car cars[] = {{"i10", 2023, 110000}, 
                  {"Aura", 2022, 120000}, 
                  {"Verna", 2021, 100000}};

    int num = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < num; i++) {
        printf("Model: %s Year: %i Price: $%i\n", cars[i].model, cars[i].year, cars[i].price);
    }
   
    return 0;
}*/

/*void birthday(int *age);

int main() {
    int age = 25;
    int *pAge = &age;

    birthday(pAge);
    printf("%d", age);

    return 0;
}

void birthday(int *age) {
    (*age)++;
}*/

/*int main(){
    int p = 4, q = 2, r = 1, s;
    s = (p && q) || (r + 1);
    printf("%d", s);

    return 0;
}*/

/*int main(){ 
    int a, b = 2, c = 8;
    a = c / b;
    c = b >> a;
    printf("%d", c);
}*/

/*int main(){

    int A, N, digit, cube, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    A=N;

    while(N>0){
        digit = N % 10;
        cube = digit * digit * digit;
        sum = sum + cube;
        N = N/10;
    
    }

    if(sum==A){
        printf("%d is a Armstrong Number\n", A);
    }
    else{
        printf("%d is not Armstrong Number\n", A);
    }

    return 0;
}*/

/*int main(){

    int number, reversenumber= 0, originalNumber, reminder;

    printf("Enter your number: ");
    scanf("%d", &number);
    
    originalNumber = number;

    while(number != 0){
        reminder = number % 10;
        reversenumber = reversenumber * 10 + reminder;
        number /= 10;
    }

    if(originalNumber == reversenumber){
        printf("It is palindrome");
    }
    else{
        printf("It is not a palindrome");
    }

    return 0;
}*/

/*int main(){
    int num, reverseNum = 0, reminder;

    printf("Enter numbers: ");
    scanf("%d", &num);
    

    while(num != 0){
        reminder = num % 10;
        reverseNum = reverseNum * 10 + reminder;

       num /= 10;
    }

    printf("\nReverse string of number: %d", reverseNum);

    return 0;
}*/
                            // Assignment Question answers //

/*int main(){                                               // Assignemnt 2 Q2
    int N, sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    for(int counter = 1; counter<=N; counter++){
        sum += counter;
    }

    printf("Sum of first %d natural numbers are: %d\n", N, sum);

    return 0;
}*/

/*int main(){                                               // Assignment 2 Q3
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(num <= 1){
        isPrime = 0;
    }
    else if(num == 2){
        isPrime = 1;
    }
    else if(num % 2 == 0){
        isPrime = 0;
    }
    else{
        for(i = 3; i*i <= num; i+=2){
            if(num % i == 0){
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime){
        printf("%d is a prime numer\n", num);
    }
    else{
        printf("%d is not a prime numer\n", num);
    }

    return 0;
}*/

/*int main(){                                                 // Assignment 2 Q1
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number > 0){
        printf("%d is a positive number\n", number);
    }
    else if(number < 0){
        printf("%d is a negative number\n", number);
    }
    else{
        printf("The number is zero\n");
    }

    return 0;
}*/

/*int main(){
    int a[2][2], b[2][2], sub[2][2];
    int i, j;

    printf("Enter the elements of first 2x2 matrix: ");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of second 2x2 matrix: ");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j< 2; j++){
            sub[i][j] = a[i][j] - b[i][j];
        }
    }


    printf("\nSum of two matrics: ");
    for(i = 0; i < 2; i++){
        for(j = 0; j< 2; j++){
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}*/

/*int main(){
    int a[10][10], b[10][10], c[10][10];
    int i, j, k;
    int r1, r2, c1, c2;

    printf("Enter the rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2){
        printf("Multiplication is not possible.\n");
        return 0;
    }

    printf("Enter the elements of first matrix elements: ");
    for(i = 0; i < r1; i++){
        for(j=0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of second matrix elements: ");
    for(i = 0; i < r2; i++){
        for(j=0; j < c2; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < r1; i++){             //multiplication logic
        for(j = 0; j < c2; j++){
            c[i][j]= 0;
            for(k = 0; k < c1; k++){
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("The result of AxB: ");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

/*int main(){
    int a[10][10], transpose[10][10];
    int r, c, i, j;

    printf("Enter the rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of matrix: ");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nThe transpose of matrix is: ");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

/*int main(){
    char str[20] = "Hello";
    char str2[20] = "Dexter", str3[20];
    int len =  strlen(str), cmp;
    
    //strcpy(str3, str);
    //printf("%s", str3);
    
    //printf("\n%d", len);

    //strcat(str3, str);
    //strcat(str3, str2);
    //printf("%s", str3);

    /*cmp = strcmp(str, str2);
    if(cmp < 0){
        printf("str is bigger");
    }
    else if(cmp < 0){
        printf("str2 is bigger");
    }
    else{
        printf("Both string are equal");
    }

    //strrev(str);
    //puts(str);

    strupr(str2);
    puts(str2);


    return 0;
}*/

/*int main(){
    int arr[100], n, i, j, minIndex, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements: ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n-1; i++){
        minIndex = i;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
    }

    temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;

    printf("Sorted array: ");
    for(i=0;  i<n; i++){
        printf("%d\t", arr[i]);
    }
    
    return 0;
}*/

/*int main(){
    int arr[100], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1; j++) {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(i=0;  i<n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}*/

/*int main(){
    int arr[100],  n, i, j, key;
    int low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order: ", n);
    for(i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n-1;
    while(low <= high){
        mid = (low + high)/2;

        if(arr[mid] == key){
            printf("Element %d found at position %d", key, mid+1);
            found = 1;
            break;
        }
        else if(key < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    if(!found){
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}*/

/*int main(){
    int arr[100], n, i, key, found=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i<n; i++){
        if(arr[i]  == key){
            printf("Element %d found at position %d\n", key, i+1);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}*/

/*int main(){                                                   //Assignment 3 Q1
    char str1[20] = "Windows";
    
    int len = strlen(str1);

    printf("Length of the string: %d", len);

    return 0;
}*/


/*int main(){                                                     //Assignment 3 Q2
    char str1[20], str2[20];

    printf("Enter first string: ");
    scanf("%s", &str1);

    printf("Enter second string: ");
    scanf("%s", &str2);

    strcat(str1, str2);
    printf("The concatenated string is: %s ", str1);

    return 0;
}*/

/*int main(){
    char str1[20], str2[20];

    printf("Enter first string: ");
    scanf("%s", &str1);

    printf("Enter second string: ");
    scanf("%s", &str2);

    int cmp = strcmp(str1, str2);

    if(cmp == 0){
        printf("The strings are equal");
    }
    else{
        printf("The strings are not equal");
    }

    return 0;
}*/

/*void reverse(char*); 

void main() { 
    char str[50]; 
    
    printf("Enter a string\n"); 
    scanf("%s", str); 
    
    printf("Input string: %s\n", str); 
    reverse(str); 
    
    printf("Output string: %s\n", str); 
} 

void reverse(char* str) { 
    int r = strlen(str) - 1, f = 0; 
    char t; 
    
    while (f < r) { 
        if (isalnum(str[f]) != 0 && isalnum(str[r]) != 0) { 
            t = str[r]; 
            str[r] = str[f]; 
            str[f] = t; 
            f++; 
            r--; 
        } 
        else if (isalnum(str[f]) != 0 && isalnum(str[r]) == 0) { 
            r--; 
        }
         else if (isalnum(str[f]) == 0 && isalnum(str[r]) != 0) { 
            f++; 
        } 
        else { 
            f++; r--; 
        }
    } 
}*/

/*void swap(int, int); 

int main() { 
    int x, y;
    
    printf("Enter the value of x and y\n"); 
    scanf("%d%d", &x, &y); 
    
    printf("Before Swapping\nx = %d\ny = %d\n", x, y); 
    swap(x, y);  
    
    return 0; 
} 

void swap(int a, int b) { 
    int temp; temp = b; 
    b = a; 
    a = temp; 
    
    printf("Values of a and b are %d %d\n", a, b);\
    printf("After Swapping\nx = %d\ny = %d\n", a, b);
}*/

/*int calculateWeight(int x){
    int weight = 0;
    if(x % 5 == 0) weight += 5;
    if(x % 3 == 0) weight += 3;
    if(x % 2 == 0) weight += 2;

    return weight;
}

int main(){
    int n;
    int arr[100], weight[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);    
    for (int i = 0; i < n; i++){ 
        scanf("%d", &arr[i]);  
        weight[i] = calculateWeight(arr[i]);
    }

     for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (weight[j] > weight[j + 1]) {
                int tempW = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = tempW;
                int tempA = arr[j];
                arr[j] = arr[j + 1];                
                arr[j + 1] = tempA;           
            }        
        }    
    }    
    
    printf("\nElements sorted by weight:\n");    
    for (int i = 0; i < n; i++){      
        printf("Element: %d  Weight: %d\n", arr[i], weight[i]);    
    }

    return 0;
}*/

/*void reverse(char*);

void main(){
    char str[50];
    char t;

    printf("Enter a string:\n");
    scanf("%s", &str);

    printf("Input string: %s\n", str);
    reverse(str);

    printf("Output string: %s\n", str);

}

void reverse(char* str){
    int r = strlen(str) - 1, f = 0;
    char t;

    while(f<r){
        if(isalnum(str[f]) != 0 && isalnum(str[r]) != 0){
            t = str[r];
            str[r] = str[f];
            str[f] = t;
            f++;
            r--;
        }
        else if(isalnum(str[f]) != 0 && isalnum(str[r]) == 0){
            r--;
        }
        else if(isalnum(str[f]) == 0 && isalnum(str[r]) != 0){
            f++;
        }
        else{
            f++;
            r--;
        }
    }
}*/

void insert();
void count();

int main(void) {
    int choice = 0;

    while (choice != 2) {
        printf("\nMENU:\n");
        printf("1. Insert records\n");
        printf("2. Count min balance holders\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert(); break;
            case 2: count(); break;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

void insert() {
    unsigned int account;
    char name[30];
    double balance;
    int records, i;

    FILE *fptr = fopen("clients.dat", "w"); // write sequential file
    if (fptr == NULL) {
        puts("File could not be opened");
        return;
    }

    printf("Enter the number of records: ");
    scanf("%d", &records);

    for (i = 0; i < records; i++) {
        printf("Enter the account, name, and balance: ");
        scanf("%u %s %lf", &account, name, &balance);

        fprintf(fptr, "%u %s %.2lf\n", account, name, balance);
    }

    fclose(fptr);
}

void count() {
    unsigned int account;
    char name[30];
    double balance;
    int count = 0;

    double minbal = 5000.0;  // minimum balance requirement

    FILE *fp = fopen("clients.dat", "r");
    if (fp == NULL) {
        printf("File could not be opened\n");
        return;
    }

    printf("\n%-10s %-15s %-10s\n", "Account", "Name", "Balance");
    printf("----------------------------------------\n");

    while (fscanf(fp, "%u %s %lf", &account, name, &balance) == 3) {
        printf("%-10u %-15s %.2lf\n", account, name, balance);

        if (balance < minbal) {
            count++;
        }
    }

    fclose(fp);

    printf("\nThe number of account holders whose balance is less than %.2lf = %d\n",
            minbal, count);
}

/*struct teledir {
    int no;
    char name[30];
};

int main(){
    struct teledir t1, t2;
    FILE *fp;
    int n, i, p, newp;

    fp = fopen("td.dat", "wb");     // binary write mode
    if (!fp) { printf("File error!\n"); return 1; }

    printf("Enter number of records: ");
    scanf("%d", &n);

    printf("Enter the records (no and name):\n");
    for (i = 0; i < n; i++) {
        scanf("%d %s", &t1.no, t1.name);
        fwrite(&t1, sizeof(struct teledir), 1, fp);
    }
    fclose(fp);

    printf("\nStored records:\n");
    fp = fopen("td.dat", "rb");
    while (fread(&t2, sizeof(struct teledir), 1, fp)) {
        printf("%d %s\n", t2.no, t2.name);
    }
    fclose(fp);

    printf("\nEnter number to be modified and new number: ");
    scanf("%d %d", &p, &newp);

    fp = fopen("td.dat", "rb+");        // read + write binary
    if (!fp) { printf("File error!\n"); return 1; }

    while (fread(&t2, sizeof(struct teledir), 1, fp)) {
        if (t2.no == p) {
            t2.no = newp;

            fseek(fp, -sizeof(struct teledir), SEEK_CUR);
            fwrite(&t2, sizeof(struct teledir), 1, fp);

            printf("Record updated!\n");
            break;
        }
    }
    fclose(fp);

    printf("\nUpdated Records:\n");
    fp = fopen("td.dat", "rb");
    while (fread(&t2, sizeof(struct teledir), 1, fp)) {
        printf("%d %s\n", t2.no, t2.name);
    }
    fclose(fp);


    return 0;
}*/