#ifndef MyLib14
#define MyLib14
#define n 8
#define k 5

void createMatr(double matr[n][k]);
void printOutMatrix(double matr[n][k]);
void fillInVect(double matr[n][k], double vect[n]); 
void createMaxAbsVect(double matr[n][k], double vect[n]);
double calculateSum(double matr[][k]);
double calcGreaterThanAverage(double matr[n][k], double average); 

#endif