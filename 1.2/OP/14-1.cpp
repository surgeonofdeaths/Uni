#include "MyLib14.cpp"

int main() {
    // 1
    double matr[n][k];
    createMatr(matr);
    printOutMatrix(matr);

    // 2
    double vect[n];
    fillInVect(matr, vect);
    createMaxAbsVect(matr, vect);
    printOutVector(vect);

    // 3
    double sum = calculateSum(matr); 
    double average = sum / (n * k); 

    double sumGreaterThanAverage = calcGreaterThanAverage(matr, average);


    std::cout << "Сума всіх елементів матриці: " << sum << std::endl;
    std::cout << "Середнє арифметичне: " << average << std::endl;
    std::cout << "Сума елементів, які більші за середнє арифметичне: " << sumGreaterThanAverage << std::endl;
    return 0;
}

